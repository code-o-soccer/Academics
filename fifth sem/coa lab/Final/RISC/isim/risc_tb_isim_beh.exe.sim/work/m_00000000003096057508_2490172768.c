/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Siddhant/Downloads/RISC/regBank.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {8, 0};
static int ng4[] = {16, 0};
static int ng5[] = {24, 0};
static int ng6[] = {1, 0};
static int ng7[] = {9, 0};
static int ng8[] = {17, 0};
static int ng9[] = {25, 0};
static int ng10[] = {2, 0};
static int ng11[] = {10, 0};
static int ng12[] = {18, 0};
static int ng13[] = {26, 0};
static int ng14[] = {3, 0};
static int ng15[] = {11, 0};
static int ng16[] = {19, 0};
static int ng17[] = {27, 0};
static int ng18[] = {4, 0};
static int ng19[] = {12, 0};
static int ng20[] = {20, 0};
static int ng21[] = {28, 0};
static int ng22[] = {5, 0};
static int ng23[] = {13, 0};
static int ng24[] = {21, 0};
static int ng25[] = {29, 0};
static int ng26[] = {6, 0};
static int ng27[] = {14, 0};
static int ng28[] = {22, 0};
static int ng29[] = {30, 0};
static int ng30[] = {7, 0};
static int ng31[] = {15, 0};
static int ng32[] = {23, 0};
static int ng33[] = {31, 0};



static void Initial_38_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;

LAB0:    xsi_set_current_line(39, ng0);

LAB2:    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng11)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng13)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng15)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng16)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng17)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng18)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng19)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng21)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng23)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng24)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng25)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng26)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB51;

LAB52:    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng27)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB53;

LAB54:    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng28)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB55;

LAB56:    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng29)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB57;

LAB58:    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng30)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB59;

LAB60:    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng31)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB61;

LAB62:    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng32)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB63;

LAB64:    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3208);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng33)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB65;

LAB66:
LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB6;

LAB7:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB8;

LAB9:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB10;

LAB11:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB12;

LAB13:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB14;

LAB15:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB16;

LAB17:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB18;

LAB19:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB20;

LAB21:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB22;

LAB23:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB24;

LAB25:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB26;

LAB27:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB28;

LAB29:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB30;

LAB31:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB32;

LAB33:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB34;

LAB35:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB36;

LAB37:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB38;

LAB39:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB40;

LAB41:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB42;

LAB43:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB44;

LAB45:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB46;

LAB47:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB48;

LAB49:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB50;

LAB51:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB52;

LAB53:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB54;

LAB55:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB56;

LAB57:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB58;

LAB59:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB60;

LAB61:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB62;

LAB63:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB64;

LAB65:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB66;

}

static void Cont_52_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2168U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 5304);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5192);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_53_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3208);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2328U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 5368);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5208);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_55_3(char *t0)
{
    char t11[8];
    char t28[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    int t39;
    char *t40;
    unsigned int t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5224);
    *((int *)t2) = 1;
    t3 = (t0 + 4904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(58, ng0);

LAB9:    xsi_set_current_line(59, ng0);
    t12 = (t0 + 2488U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t12) == 0)
        goto LAB10;

LAB12:    t19 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t19) = 1;

LAB13:    t20 = (t11 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t11);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB19;

LAB20:
LAB21:    goto LAB8;

LAB10:    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(60, ng0);
    t26 = (t0 + 1688U);
    t27 = *((char **)t26);
    t26 = (t0 + 3208);
    t30 = (t0 + 3208);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = (t0 + 3208);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 1528U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t28, t29, t32, t35, 2, 1, t37, 5, 2);
    t36 = (t28 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (!(t38));
    t40 = (t29 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (!(t41));
    t43 = (t39 && t42);
    if (t43 == 1)
        goto LAB17;

LAB18:    goto LAB16;

LAB17:    t44 = *((unsigned int *)t28);
    t45 = *((unsigned int *)t29);
    t46 = (t44 - t45);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t26, t27, 0, *((unsigned int *)t29), t47, 0LL);
    goto LAB18;

LAB19:    xsi_set_current_line(62, ng0);

LAB22:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t0 + 3208);
    t12 = (t0 + 3208);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = (t0 + 3208);
    t26 = (t20 + 64U);
    t27 = *((char **)t26);
    t30 = ((char*)((ng16)));
    xsi_vlog_generic_convert_array_indices(t11, t28, t19, t27, 2, 1, t30, 32, 1);
    t31 = (t11 + 4);
    t14 = *((unsigned int *)t31);
    t39 = (!(t14));
    t32 = (t28 + 4);
    t15 = *((unsigned int *)t32);
    t42 = (!(t15));
    t43 = (t39 && t42);
    if (t43 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    t4 = (t0 + 3208);
    t5 = (t4 + 72U);
    t12 = *((char **)t5);
    t13 = (t0 + 3208);
    t19 = (t13 + 64U);
    t20 = *((char **)t19);
    t26 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t11, t28, t12, t20, 2, 1, t26, 32, 1);
    t27 = (t11 + 4);
    t6 = *((unsigned int *)t27);
    t39 = (!(t6));
    t30 = (t28 + 4);
    t7 = *((unsigned int *)t30);
    t42 = (!(t7));
    t43 = (t39 && t42);
    if (t43 == 1)
        goto LAB25;

LAB26:    goto LAB21;

LAB23:    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t28);
    t46 = (t16 - t17);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t28), t47, 0LL);
    goto LAB24;

LAB25:    t8 = *((unsigned int *)t11);
    t9 = *((unsigned int *)t28);
    t46 = (t8 - t9);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t28), t47, 0LL);
    goto LAB26;

}


extern void work_m_00000000003096057508_2490172768_init()
{
	static char *pe[] = {(void *)Initial_38_0,(void *)Cont_52_1,(void *)Cont_53_2,(void *)Always_55_3};
	xsi_register_didat("work_m_00000000003096057508_2490172768", "isim/risc_tb_isim_beh.exe.sim/work/m_00000000003096057508_2490172768.didat");
	xsi_register_executes(pe);
}
