
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

/**********
Copyright 1990 Regents of the University of California.  All rights reserved.
Author: 1985 Thomas L. Quarles
Modified by Dietmar Warning 2003 and Paolo Nenzi 2003
**********/

#include "diodefs.h"


int
DIOdev::askModl (const sGENmodel *genmod, int which, IFdata *data)
{
    const sDIOmodel *model = static_cast<const sDIOmodel*>(genmod);
    IFvalue *value = &data->v;
    // Need to override this for non-real returns.
    data->type = IF_REAL;

    switch (which) {
    case DIO_MOD_IS:
        value->rValue = model->DIOsatCur;
        return(OK);
    case DIO_MOD_JSW:
        value->rValue = model->DIOsatSWCur;
        return(OK);

    case DIO_MOD_TNOM:
        value->rValue = model->DIOnomTemp-CONSTCtoK;
        return(OK);
    case DIO_MOD_RS:
        value->rValue = model->DIOresist;
        return(OK);
    case DIO_MOD_TRS:
        value->rValue = model->DIOresistTemp1;
        return(OK);     
    case DIO_MOD_TRS2:
        value->rValue = model->DIOresistTemp2;
        return(OK);             
    case DIO_MOD_N:
        value->rValue = model->DIOemissionCoeff;
        return(OK);
    case DIO_MOD_TT:
        value->rValue = model->DIOtransitTime;
        return(OK);
    case DIO_MOD_TTT1:
        value->rValue = model->DIOtranTimeTemp1;
        return(OK);     
    case DIO_MOD_TTT2:
        value->rValue = model->DIOtranTimeTemp2;
        return(OK);             
    case DIO_MOD_CJO:
        value->rValue = model->DIOjunctionCap;
        return(OK);
    case DIO_MOD_VJ:
        value->rValue = model->DIOjunctionPot;
        return(OK);
    case DIO_MOD_M:
        value->rValue = model->DIOgradingCoeff;
        return(OK);
    case DIO_MOD_TM1:
        value->rValue = model->DIOgradCoeffTemp1;
        return(OK);  
    case DIO_MOD_TM2:
        value->rValue = model->DIOgradCoeffTemp2;
        return(OK);                
    case DIO_MOD_CJSW:
        value->rValue = model->DIOjunctionSWCap;
        return(OK);
    case DIO_MOD_VJSW:
        value->rValue = model->DIOjunctionSWPot;
        return(OK);
    case DIO_MOD_MJSW:
        value->rValue = model->DIOgradingSWCoeff;
        return(OK);
    case DIO_MOD_IKF:
        value->rValue = model->DIOforwardKneeCurrent;
        return(OK);
    case DIO_MOD_IKR:
        value->rValue = model->DIOreverseKneeCurrent;
        return(OK);
        
    case DIO_MOD_EG:
        value->rValue = model->DIOactivationEnergy;
        return (OK);
    case DIO_MOD_XTI:
        value->rValue = model->DIOsaturationCurrentExp;
        return(OK);
    case DIO_MOD_FC:
        value->rValue = model->DIOdepletionCapCoeff;
        return(OK);
    case DIO_MOD_FCS:
        value->rValue = model->DIOdepletionSWcapCoeff;
        return(OK);
    case DIO_MOD_KF:
        value->rValue = model->DIOfNcoef;
        return(OK);
    case DIO_MOD_AF:
        value->rValue = model->DIOfNexp;
        return(OK);
    case DIO_MOD_BV:
        value->rValue = model->DIObreakdownVoltage;
        return(OK);
    case DIO_MOD_IBV:
        value->rValue = model->DIObreakdownCurrent;
        return(OK);
    case DIO_MOD_COND:
        value->rValue = model->DIOconductance;
        return(OK);
    case DIO_MOD_PJ:
        value->rValue = model->DIOpj;
        return(OK);
    case DIO_MOD_AREA:
        value->rValue = model->DIOarea;
        return(OK);
    case DIO_MOD_CTA:
        value->rValue = model->DIOcta;
        return(OK);
    case DIO_MOD_CTP:
        value->rValue = model->DIOctp;
        return(OK);
    case DIO_MOD_TCV:
        value->rValue = model->DIOtcv;
        return(OK);
    case DIO_MOD_TPB:
        value->rValue = model->DIOtpb;
        return(OK);
    case DIO_MOD_TPHP:
        value->rValue = model->DIOtphp;
        return(OK);
    case DIO_MOD_TLEV:
        value->iValue = model->DIOtlev;
        data->type = IF_INTEGER;
        return(OK);
    case DIO_MOD_TLEVC:
        value->iValue = model->DIOtlevc;
        data->type = IF_INTEGER;
        return(OK);

    default:
        return(E_BADPARM);
    }
}

