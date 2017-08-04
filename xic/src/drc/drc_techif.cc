
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
 * Xic Integrated Circuit Layout and Schematic Editor                     *
 *                                                                        *
 *========================================================================*
 $Id:$
 *========================================================================*/

#include "main.h"
#include "drc.h"
#include "drc_kwords.h"
#include "tech.h"


//-----------------------------------------------------------------------------
// Techfile package configuration for DRC.
//

namespace {
    TCret user_rule_parse(FILE *techfp)
    {
        if (Tech()->Matching(Dkw.DrcTest())) {
            DRC()->techParseUserRule(techfp);
            return (TCmatch);
        }
        return (TCnone);
    }

    TCret layer_parse(CDl *lastlayer)
    {
        TCret tcret = DRC()->techParseLayer(lastlayer);
        if (tcret != TCnone)
            return (tcret);

        return (TCnone);
    }


    void print_user_rules(FILE *techfp)
    {
        DRC()->techPrintUserRules(techfp);
    }

    void print_rules(FILE *techfp, sLstr *lstr, bool cmts, const CDl *ld)
    {
        DRC()->techPrintLayer(techfp, lstr, cmts, ld, false, true);
    }
}


void
cDRC::setupTech()
{
    Tech()->RegisterUserRuleParser(&user_rule_parse);
    Tech()->RegisterLayerParser(&layer_parse);
    Tech()->RegisterPrintUserRules(&print_user_rules);
    Tech()->RegisterPrintRules(&print_rules);
}

