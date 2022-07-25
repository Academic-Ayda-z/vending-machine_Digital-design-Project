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
static int ng1[] = {0, 0};
static int ng2[] = {4, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {15U, 0U};
static unsigned int ng6[] = {0U, 0U};



static void Always_38_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t25[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t52;
    char *t53;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4288);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t3, 1, t2, 32);
    t4 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t6, 32, t4, 32);
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 4);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 20);
    xsi_set_current_line(42, ng0);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB6:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB7:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB8;

LAB11:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB9;

LAB10:    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 20);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t33 = (t15 ^ t16);
    t35 = (t14 | t33);
    t36 = *((unsigned int *)t4);
    t37 = *((unsigned int *)t5);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB20;

LAB17:    if (t38 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t6) = 1;

LAB20:    t9 = (t6 + 4);
    t41 = *((unsigned int *)t9);
    t42 = (~(t41));
    t43 = *((unsigned int *)t6);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t3, 1, t2, 32);
    t4 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t6, 32, t4, 32);
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 4);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 20);
    xsi_set_current_line(63, ng0);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB35:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB37;

LAB36:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB38;

LAB39:    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 20);
    goto LAB2;

LAB8:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB10;

LAB9:    *((unsigned int *)t6) = 1;
    goto LAB10;

LAB12:    xsi_set_current_line(42, ng0);

LAB14:    xsi_set_current_line(43, ng0);
    t17 = (t0 + 1368U);
    t18 = *((char **)t17);
    t17 = (t0 + 1328U);
    t19 = (t17 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2408);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_get_index_select_value(t7, 1, t18, t20, 2, t23, 4, 2);
    t24 = (t0 + 2728);
    t26 = (t0 + 2728);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = (t0 + 2568);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_generic_convert_bit_index(t25, t28, 2, t31, 4, 2);
    t32 = (t25 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    if (t34 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 4);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t8 = (t0 + 2568);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 4);
    goto LAB6;

LAB15:    xsi_vlogvar_assign_value(t24, t7, 0, *((unsigned int *)t25), 1);
    goto LAB16;

LAB19:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(48, ng0);

LAB24:    xsi_set_current_line(49, ng0);
    t10 = (t0 + 2728);
    t11 = (t10 + 56U);
    t17 = *((char **)t11);
    t18 = (t0 + 1528U);
    t19 = *((char **)t18);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 4, t17, 4, t19, 4);
    t18 = ((char*)((ng5)));
    memset(t25, 0, 8);
    t20 = (t7 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB26;

LAB25:    t21 = (t18 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t7) > *((unsigned int *)t18))
        goto LAB28;

LAB27:    *((unsigned int *)t25) = 1;

LAB28:    t23 = (t25 + 4);
    t46 = *((unsigned int *)t23);
    t47 = (~(t46));
    t48 = *((unsigned int *)t25);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(53, ng0);

LAB34:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);

LAB32:    goto LAB23;

LAB26:    t22 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(49, ng0);

LAB33:    xsi_set_current_line(50, ng0);
    t24 = (t0 + 2728);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 1528U);
    t29 = *((char **)t28);
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 4, t27, 4, t29, 4);
    t28 = (t0 + 3048);
    xsi_vlogvar_assign_value(t28, t51, 0, 0, 4);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB32;

LAB37:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t6) = 1;
    goto LAB39;

LAB41:    xsi_set_current_line(63, ng0);

LAB43:    xsi_set_current_line(64, ng0);
    t17 = (t0 + 3048);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 3048);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2408);
    t24 = (t23 + 56U);
    t26 = *((char **)t24);
    xsi_vlog_generic_get_index_select_value(t7, 1, t19, t22, 2, t26, 4, 2);
    t27 = (t0 + 2888);
    t28 = (t0 + 2888);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 2568);
    t32 = (t31 + 56U);
    t52 = *((char **)t32);
    xsi_vlog_generic_convert_bit_index(t25, t30, 2, t52, 4, 2);
    t53 = (t25 + 4);
    t33 = *((unsigned int *)t53);
    t34 = (!(t33));
    if (t34 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 4);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t8 = (t0 + 2568);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 4);
    goto LAB35;

LAB44:    xsi_vlogvar_assign_value(t27, t7, 0, *((unsigned int *)t25), 1);
    goto LAB45;

}


extern void work_m_00000000004046967387_0854648458_init()
{
	static char *pe[] = {(void *)Always_38_0};
	xsi_register_didat("work_m_00000000004046967387_0854648458", "isim/vending_machine_isim_beh.exe.sim/work/m_00000000004046967387_0854648458.didat");
	xsi_register_executes(pe);
}
