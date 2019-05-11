
/*========================================================================*
 *                                                                        *
 *  Distributed by Whiteley Research Inc., Sunnyvale, California, USA     *
 *                       http://wrcad.com                                 *
 *  Copyright (C) 2017 Whiteley Research Inc., all rights reserved.       *
 *  Author: Stephen R. Whiteley, except as indicated.                     *
 *                                                                        *
 *  As fully as possible recognizing licensing terms and conditions       *
 *  imposed by earlier work from which this work was derived, if any,     *
 *  this work is released under the Apache License, Version 2.0 (the      *
 *  "License").  You may not use this file except in compliance with      *
 *  the License, and compliance with inherited licenses which are         *
 *  specified in a sub-header below this one if applicable.  A copy       *
 *  of the License is provided with this distribution, or you may         *
 *  obtain a copy of the License at                                       *
 *                                                                        *
 *        http://www.apache.org/licenses/LICENSE-2.0                      *
 *                                                                        *
 *  See the License for the specific language governing permissions       *
 *  and limitations under the License.                                    *
 *                                                                        *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,      *
 *   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES      *
 *   OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-        *
 *   INFRINGEMENT.  IN NO EVENT SHALL WHITELEY RESEARCH INCORPORATED      *
 *   OR STEPHEN R. WHITELEY BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER     *
 *   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,      *
 *   ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE       *
 *   USE OR OTHER DEALINGS IN THE SOFTWARE.                               *
 *                                                                        *
 *========================================================================*
 *               XicTools Integrated Circuit Design System                *
 *                                                                        *
 * WRspice Circuit Simulation and Analysis Tool:  Device Library          *
 *                                                                        *
 *========================================================================*
 $Id:$
 *========================================================================*/

/***************************************************************************
JSPICE3 adaptation of Spice3e2 - Copyright (c) Stephen R. Whiteley 1992
Author: 1992 Stephen R. Whiteley
****************************************************************************/

#include "jjdefs.h"


int
JJdev::accept(sCKT *ckt, sGENmodel *genmod)
{
    sJJmodel *model = static_cast<sJJmodel*>(genmod);
    for ( ; model; model = model->next()) {

        bool didm = false;
        double vmax = 0;

        sJJinstance *inst;
        for (inst = model->inst(); inst; inst = inst->next()) {

            // Keep phi in the range -2pi - 2pi, with an integer 4pi
            // modulus.  This preserves phase accuracy for large phase
            // numbers.

            double phi = *(ckt->CKTstate0 + inst->JJphase);
            int pint = *(int *)(ckt->CKTstate1 + inst->JJphsInt);
            double twopi = M_PI + M_PI;
            double fourpi = twopi + twopi;
            if (phi >= twopi) {
                phi -= fourpi;
                pint++;
            }
            else if (phi < -twopi) {
                phi += fourpi;
                pint--;
            }

            *(ckt->CKTstate0 + inst->JJphase) = phi;
            *(int *)(ckt->CKTstate0 + inst->JJphsInt) = pint;
            if (inst->JJphsNode > 0)
                *(ckt->CKTrhsOld + inst->JJphsNode) = phi + fourpi*pint;

            // SFQ hooks.
            pint += pint;
            if (phi > 1.25*M_PI)
                pint++;
            else if (phi < -0.75*M_PI)
                pint--;

            int last_pn = inst->JJphsN;
            inst->JJphsN = abs(pint);
            inst->JJphsF = false;
            if (pint != last_pn) {
                // Pulse count changed, record time and set flag.
//XXX interpolate instead
                inst->JJphsT = ckt->CKTtime;
                inst->JJphsF = true;
            }

            // find max vj for time step
            if (model->JJictype != 0 && inst->JJcriti > 0) {
                if (!didm) {
                    didm = true;
                    if (vmax < model->JJvdpbak)
                        vmax = model->JJvdpbak;
                }
                double vj = *(ckt->CKTstate0 + inst->JJvoltage);
                if (vj < 0)
                    vj = -vj;
                if (vmax < vj)
                    vmax = vj;
            }
        }
        if (vmax > 0.0) {
            // Limit next time step.
            double delmax = M_PI*model->JJtsfact*PHI0_2PI/vmax;
            if (ckt->CKTdevMaxDelta == 0.0 || delmax < ckt->CKTdevMaxDelta)
                ckt->CKTdevMaxDelta = delmax;
        }
    }
    return (OK);
}

