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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/this/rca/bit_serial.v";
static int ng1[] = {0, 0};
static int ng2[] = {7, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {4, 0};
static int ng7[] = {5, 0};
static int ng8[] = {6, 0};



static void Always_48_0(char *t0)
{
    char t13[8];
    char t19[8];
    char t27[8];
    char t32[8];
    char t36[8];
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
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    int t41;

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4440);
    *((int *)t2) = 1;
    t3 = (t0 + 4152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(65, ng0);

LAB14:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB16;

LAB15:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB18;

LAB17:    *((unsigned int *)t13) = 1;

LAB18:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB20;

LAB21:
LAB22:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(51, ng0);

LAB9:    xsi_set_current_line(52, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2568);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 8);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB10:    xsi_set_current_line(58, ng0);

LAB13:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB12;

LAB16:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(67, ng0);

LAB23:    xsi_set_current_line(68, ng0);
    t16 = (t0 + 2568);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t20 = (t0 + 2568);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t19, 2, t18, t22, 2, t23, 32, 1);
    t24 = (t0 + 2728);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t28 = (t0 + 2728);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t27, 2, t26, t30, 2, t31, 32, 1);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 2, t19, 2, t27, 2);
    t33 = (t0 + 2888);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 2, t32, 2, t35, 1);
    t37 = (t0 + 3208);
    xsi_vlogvar_assign_value(t37, t36, 0, 0, 1);
    t38 = (t0 + 2408);
    xsi_vlogvar_assign_value(t38, t36, 1, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2568);
    t14 = (t0 + 2568);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 2);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2568);
    t14 = (t0 + 2568);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 3);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2568);
    t14 = (t0 + 2568);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 4);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 4);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2568);
    t14 = (t0 + 2568);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 5);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 5);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2568);
    t14 = (t0 + 2568);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 6);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 6);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2568);
    t14 = (t0 + 2568);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 7);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2568);
    t14 = (t0 + 2568);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t41 = (!(t6));
    if (t41 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2728);
    t14 = (t0 + 2728);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 2);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2728);
    t14 = (t0 + 2728);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 3);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2728);
    t14 = (t0 + 2728);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 4);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 4);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2728);
    t14 = (t0 + 2728);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 5);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 5);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2728);
    t14 = (t0 + 2728);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 6);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 6);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2728);
    t14 = (t0 + 2728);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB50;

LAB51:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 7);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2728);
    t14 = (t0 + 2728);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t41 = (!(t6));
    if (t41 == 1)
        goto LAB54;

LAB55:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2248);
    t14 = (t0 + 2248);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 2);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2248);
    t14 = (t0 + 2248);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB58;

LAB59:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 3);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2248);
    t14 = (t0 + 2248);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB60;

LAB61:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 4);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 4);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2248);
    t14 = (t0 + 2248);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB62;

LAB63:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 5);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 5);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2248);
    t14 = (t0 + 2248);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB64;

LAB65:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 6);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 6);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2248);
    t14 = (t0 + 2248);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB66;

LAB67:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 7);
    t39 = (t10 & 1);
    *((unsigned int *)t5) = t39;
    t12 = (t0 + 2248);
    t14 = (t0 + 2248);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t19, t16, 2, t17, 32, 1);
    t18 = (t19 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB68;

LAB69:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t11 = (t0 + 2248);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t41 = (!(t6));
    if (t41 == 1)
        goto LAB70;

LAB71:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 5, t5, 32);
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 5);
    goto LAB22;

LAB24:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB25;

LAB26:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB27;

LAB28:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB29;

LAB30:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB31;

LAB32:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB33;

LAB34:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB35;

LAB36:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB37;

LAB38:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB39;

LAB40:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB41;

LAB42:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB43;

LAB44:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB45;

LAB46:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB47;

LAB48:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB49;

LAB50:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB51;

LAB52:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB53;

LAB54:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB55;

LAB56:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB57;

LAB58:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB59;

LAB60:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB61;

LAB62:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB63;

LAB64:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB65;

LAB66:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB67;

LAB68:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t19), 1);
    goto LAB69;

LAB70:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t13), 1);
    goto LAB71;

}


extern void work_m_17775478670438946004_2915114288_init()
{
	static char *pe[] = {(void *)Always_48_0};
	xsi_register_didat("work_m_17775478670438946004_2915114288", "isim/bit_tb_isim_beh.exe.sim/work/m_17775478670438946004_2915114288.didat");
	xsi_register_executes(pe);
}
