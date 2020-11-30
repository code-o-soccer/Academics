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
static const char *ng0 = "C:/Users/Siddhant/Downloads/RISC/array_smult.v";
static int ng1[] = {31, 0};
static int ng2[] = {1, 0};



static void Always_30_0(char *t0)
{
    char t6[8];
    char t11[8];
    char t33[8];
    char t37[8];
    char t48[8];
    char t68[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t69;
    char *t70;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1008U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t5, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t12 = (t6 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB9;

LAB6:    if (t23 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t11) = 1;

LAB9:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(37, ng0);

LAB14:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB12:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1168U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t9 = (t6 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB18;

LAB15:    if (t23 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t11) = 1;

LAB18:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(46, ng0);

LAB23:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB21:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t9 = (t6 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB27;

LAB24:    if (t23 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t11) = 1;

LAB27:    t13 = (t0 + 1208U);
    t26 = *((char **)t13);
    t13 = (t0 + 1168U);
    t27 = (t13 + 72U);
    t34 = *((char **)t27);
    t35 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t33, 32, t26, t34, 2, t35, 32, 1);
    t36 = ((char*)((ng2)));
    memset(t37, 0, 8);
    t38 = (t33 + 4);
    t39 = (t36 + 4);
    t28 = *((unsigned int *)t33);
    t29 = *((unsigned int *)t36);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t38);
    t32 = *((unsigned int *)t39);
    t40 = (t31 ^ t32);
    t41 = (t30 | t40);
    t42 = *((unsigned int *)t38);
    t43 = *((unsigned int *)t39);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB31;

LAB28:    if (t44 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t37) = 1;

LAB31:    t49 = *((unsigned int *)t11);
    t50 = *((unsigned int *)t37);
    t51 = (t49 ^ t50);
    *((unsigned int *)t48) = t51;
    t52 = (t11 + 4);
    t53 = (t37 + 4);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t52);
    t56 = *((unsigned int *)t53);
    t57 = (t55 | t56);
    *((unsigned int *)t54) = t57;
    t58 = *((unsigned int *)t54);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB32;

LAB33:
LAB34:    t62 = (t48 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(55, ng0);

LAB39:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memcpy(t68, t3, 8);
    t2 = (t68 + 8);
    memset(t2, 0, 8);
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t68, 0, 0, 64, 0LL);

LAB37:    goto LAB2;

LAB8:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(33, ng0);

LAB13:    xsi_set_current_line(34, ng0);
    t34 = (t0 + 1048U);
    t35 = *((char **)t34);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_unary_minus(t33, 32, t35, 32);
    t34 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 32, 0LL);
    goto LAB12;

LAB17:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(42, ng0);

LAB22:    xsi_set_current_line(43, ng0);
    t26 = (t0 + 1208U);
    t27 = *((char **)t26);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_unary_minus(t33, 32, t27, 32);
    t26 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t26, t33, 0, 0, 32, 0LL);
    goto LAB21;

LAB26:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB27;

LAB30:    t47 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB31;

LAB32:    t60 = *((unsigned int *)t48);
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t48) = (t60 | t61);
    goto LAB34;

LAB35:    xsi_set_current_line(51, ng0);

LAB38:    xsi_set_current_line(52, ng0);
    t69 = (t0 + 1368U);
    t70 = *((char **)t69);
    xsi_vlog_unsigned_unary_minus(t68, 64, t70, 32);
    t69 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t69, t68, 0, 0, 64, 0LL);
    goto LAB37;

}


extern void work_m_00000000001884317714_3185537345_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000001884317714_3185537345", "isim/risc_tb_isim_beh.exe.sim/work/m_00000000001884317714_3185537345.didat");
	xsi_register_executes(pe);
}
