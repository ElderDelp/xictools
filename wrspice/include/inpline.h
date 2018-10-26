
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
 * WRspice Circuit Simulation and Analysis Tool                           *
 *                                                                        *
 *========================================================================*
 $Id:$
 *========================================================================*/

/**********
Copyright 1990 Regents of the University of California.  All rights reserved.
Author: 1985 Wayne A. Christopher, U. C. Berkeley CAD Group
**********/

#ifndef INPLINE_H
#define INPLINE_H

#include <string.h>


// These keywords enable spice to recognize the spice text in files
// produced by the graphical editor.  They must be modified if
// the format changes.
//
// First characters of an symbol file
#define GFX_PREFIX "(Symbol "
// Spice title prefix
#define GFX_TITLE "Generated by"

// Keywords which specify that the following lines are shell executable.
// Exec blocks are executed before the deck is sourced, control
// blocks are executed afterward.  The PREFX's specify alternate comment
// forms.
//
#define CONT_PREFX  "*#"
#define EXEC_PREFX  "*@"
#define CONT_KW     ".control"
#define EXEC_KW     ".exec"
#define POST_KW     ".postrun"
#define ENDC_KW     ".endc"
#define CACHE_KW    ".cache"
#define ENDCACHE_KW ".endcache"
#define NEWJOB_KW   ".newjob"

enum CBLK_TYPE { CBLK_EXEC, CBLK_CTRL, CBLK_POST };

// Other input keywords
#define INCL_L_KW   ".include"
#define INCL_S_KW   ".inc"
#define SPINCL_KW   ".spinclude"
#define LIB_KW      ".lib"
#define ENDL_KW     ".endl"
#define SPLIB_KW    ".splib"

#define CHECK_KW    ".check"
#define CHECKALL_KW ".checkall"
#define MONTE_KW    ".monte"
#define NOEXEC_KW   ".noexec"

#define IF_KW       ".if"
#define ELIF_KW     ".elif"
#define ELSEIF_KW   ".elseif"
#define ELSE_KW     ".else"
#define ENDIF_KW    ".endif"
#define END_KW      ".end"

#define TITLE_KW    ".title"
#define WIDTH_KW    ".width"
#define FOUR_KW     ".four"
#define FOURIER_KW  ".fourier"
#define PLOT_KW     ".plot"
#define PRINT_KW    ".print"
#define SAVE_KW     ".save"
#define PROBE_KW    ".probe"
#define TEMP_KW     ".temp"

#define PARAM_KW    ".param"
#define MEASURE_KW  ".measure"
#define MEAS_KW     ".meas"
#define VERILOG_KW  ".verilog"
#define ENDV_KW     ".endv"
#define ADC_KW      ".adc"

#define MODEL_KW    ".model"
#define SUBCKT_KW   ".subckt"
#define ENDS_KW     ".ends"
#define MACRO_KW    ".macro"
#define EOM_KW      ".eom"

#define GLOBAL_KW   ".global"
#define IC_KW       ".ic"
#define NODESET_KW  ".nodeset"
#define OPTIONS_KW  ".options"
#define OPTION_KW   ".option"
#define OPT_KW      ".opt"
#define TABLE_KW    ".table"
#define MOSMAP_KW   ".mosmap"
#define DEFMOD_KW   ".defmod"

#define AC_KW       ".ac"
#define DC_KW       ".dc"
#define DISTO_KW    ".disto"
#define NOISE_KW    ".noise"
#define OP_KW       ".op"
#define PZ_KW       ".pz"
#define SENS_KW     ".sens"
#define TF_KW       ".tf"
#define TRAN_KW     ".tran"


// Code returned by get_keywords() if keyword found.
//
#define LI_MONTE_FOUND      0x1
#define LI_CHECK_FOUND      0x2
#define LI_CHECKALL_FOUND   0x4
#define LI_NOEXEC_FOUND     0x8
#define LI_CONT_FOUND       0x10
#define LI_EXEC_FOUND       0x20
#define LI_POST_FOUND       0x40

struct wordlist;
struct sParamTab;


// Structure to hold an input line.
//
struct sLine
{
    sLine()
        {
            li_line = 0;
            li_error = 0;
            li_next = 0;
            li_actual = 0;
            li_linenum = 0;
        }

    ~sLine()
        {
            delete [] li_line;
            delete [] li_error;
            sLine::destroy(li_actual);
        }

    static void destroy(sLine *d)
        {
            while (d) {
                sLine *dd = d;
                d = d->li_next;
                delete dd;
            }
        }

    const char *line()          { return (li_line); }

    const char *error()         { return (li_error); }
    void clear_error()          { delete [] li_error; li_error = 0; }

    sLine *next()               { return (li_next); }
    void set_next(sLine *n)     { li_next = n; }

    sLine *actual()             { return (li_actual); }
    void set_actual(sLine *a)   { li_actual = a; }

    int line_num()              { return (li_linenum); }
    void set_line_num(int i)    { li_linenum = i; }

    void comment_out()
        {
            char *s = new char[strlen(li_line) + 2];
            *s = '*';
            strcpy(s+1, li_line);
            delete [] li_line;
            li_line = s;
        }

    // inpdeck.cc
    static sLine *copy(const sLine*); // Copy the list of lines.
    void set_line(const char*); // Set li_line, copied.
    void append_line(const char*, bool);  // Append to li_line.
    void fix_line();            // Strip/alter non-ASCII chars.
    void elide_parens();        // Remove enclosing ( ... ).
    void set_error(const char*); // Set li_error, copied.
    void errcat(const char*);   // Cat arg to error message.
    void errcat_free(char*);    // Cat arg to error message, delete arg.

    // source.cc
    bool is_ckt();
    wordlist *get_speccmds();
    void get_keywords(int*);
    wordlist *get_controls(bool, CBLK_TYPE, bool = false);
    sLine *extract_verilog();
    void var_subst();
    sParamTab *process_conditionals(sParamTab*);

private:
    char *li_line;     // Text of the line, after processing.
    char *li_error;    // Error message from line processing if any.
    sLine *li_next;    // The next line of input.
    sLine *li_actual;  // Text of the line before processing.
    int li_linenum;    // Input line number.
};

#endif // INPLINE_H

