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
static const char *ng0 = "C:/Users/imannet/Desktop/test/testingStuf/charge.v";
static int ng1[] = {4, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {15U, 0U};
static unsigned int ng5[] = {0U, 0U};



static void Always_37_0(char *t0)
{
    char t4[8];
    char t11[8];
    char t13[8];
    char t47[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t14;
    char *t15;
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
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3968);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    t5 = (t0 + 1328U);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 1688U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng1)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_multiply(t11, 32, t10, 1, t9, 32);
    t12 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t11, 32, t12, 32);
    t14 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t4, 4, t6, ((int*)(t8)), 2, t13, 32, 2, t14, 32, 1, 0);
    t15 = (t0 + 2408);
    xsi_vlogvar_assign_value(t15, t4, 0, 0, 4);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 20);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t2);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB9;

LAB6:    if (t25 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t4) = 1;

LAB9:    t8 = (t4 + 4);
    t28 = *((unsigned int *)t8);
    t29 = (~(t28));
    t30 = *((unsigned int *)t4);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2568);
    t7 = (t0 + 2568);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 1688U);
    t12 = *((char **)t10);
    t10 = ((char*)((ng1)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_multiply(t47, 32, t12, 1, t10, 32);
    t14 = ((char*)((ng2)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_minus(t48, 32, t47, 32, t14, 32);
    t15 = ((char*)((ng1)));
    xsi_vlog_convert_indexed_partindices(t4, t11, t13, ((int*)(t9)), 2, t48, 32, 2, t15, 32, 1, 0);
    t33 = (t4 + 4);
    t16 = *((unsigned int *)t33);
    t49 = (!(t16));
    t34 = (t11 + 4);
    t17 = *((unsigned int *)t34);
    t50 = (!(t17));
    t51 = (t49 && t50);
    t35 = (t13 + 4);
    t18 = *((unsigned int *)t35);
    t52 = (!(t18));
    t53 = (t51 && t52);
    if (t53 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 20);
    goto LAB2;

LAB8:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(41, ng0);

LAB13:    xsi_set_current_line(42, ng0);
    t9 = (t0 + 2408);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    t14 = (t0 + 1528U);
    t15 = *((char **)t14);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 4, t12, 4, t15, 4);
    t14 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t33 = (t11 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB15;

LAB14:    t34 = (t14 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t11) > *((unsigned int *)t14))
        goto LAB17;

LAB16:    *((unsigned int *)t13) = 1;

LAB17:    t36 = (t13 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t13);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(46, ng0);

LAB23:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);

LAB21:    goto LAB12;

LAB15:    t35 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB17;

LAB19:    xsi_set_current_line(42, ng0);

LAB22:    xsi_set_current_line(43, ng0);
    t42 = (t0 + 2408);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t0 + 1528U);
    t46 = *((char **)t45);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 4, t44, 4, t46, 4);
    t45 = (t0 + 2728);
    xsi_vlogvar_assign_value(t45, t47, 0, 0, 4);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB24:    t19 = *((unsigned int *)t13);
    t54 = (t19 + 0);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t11);
    t55 = (t20 - t21);
    t56 = (t55 + 1);
    xsi_vlogvar_assign_value(t6, t5, t54, *((unsigned int *)t11), t56);
    goto LAB25;

}


extern void work_m_00000000000734727232_0854648458_init()
{
	static char *pe[] = {(void *)Always_37_0};
	xsi_register_didat("work_m_00000000000734727232_0854648458", "isim/test_isim_beh.exe.sim/work/m_00000000000734727232_0854648458.didat");
	xsi_register_executes(pe);
}
