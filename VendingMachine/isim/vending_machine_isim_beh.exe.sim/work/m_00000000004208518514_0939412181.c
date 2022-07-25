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
static const char *ng0 = "C:/Users/imannet/Desktop/test/testingStuf/costumer.v";
static int ng1[] = {0, 0};
static int ng2[] = {4, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};



static void Always_41_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t25[8];
    char t54[8];
    char t55[8];
    char t57[8];
    char t65[8];
    char t107[8];
    char t108[8];
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
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t109;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 5088);
    *((int *)t2) = 1;
    t3 = (t0 + 4800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t3, 1, t2, 32);
    t4 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t6, 32, t4, 32);
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 4);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 20);
    xsi_set_current_line(46, ng0);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB6:    t2 = (t0 + 3368);
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

LAB13:    xsi_set_current_line(51, ng0);
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
        goto LAB22;

LAB19:    if (t38 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t6) = 1;

LAB22:    t9 = (t6 + 4);
    t41 = *((unsigned int *)t9);
    t42 = (~(t41));
    t43 = *((unsigned int *)t6);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t3, 1, t2, 32);
    t4 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t6, 32, t4, 32);
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 4);
    xsi_set_current_line(66, ng0);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB56:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB58;

LAB57:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB58;

LAB61:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB59;

LAB60:    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 20);
    goto LAB2;

LAB8:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB10;

LAB9:    *((unsigned int *)t6) = 1;
    goto LAB10;

LAB12:    xsi_set_current_line(46, ng0);

LAB14:    xsi_set_current_line(47, ng0);
    t17 = (t0 + 2168U);
    t18 = *((char **)t17);
    t17 = (t0 + 2128U);
    t19 = (t17 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 3208);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_get_index_select_value(t7, 1, t18, t20, 2, t23, 4, 2);
    t24 = (t0 + 3528);
    t26 = (t0 + 3528);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = (t0 + 3368);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_generic_convert_bit_index(t25, t28, 2, t31, 4, 2);
    t32 = (t25 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    if (t34 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 1968U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t8 = (t0 + 3208);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_generic_get_index_select_value(t6, 1, t3, t5, 2, t10, 4, 2);
    t11 = (t0 + 3688);
    t17 = (t0 + 3688);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3368);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_bit_index(t7, t19, 2, t22, 4, 2);
    t23 = (t7 + 4);
    t12 = *((unsigned int *)t23);
    t34 = (!(t12));
    if (t34 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t8 = (t0 + 3208);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 4);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 4);
    goto LAB6;

LAB15:    xsi_vlogvar_assign_value(t24, t7, 0, *((unsigned int *)t25), 1);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t11, t6, 0, *((unsigned int *)t7), 1);
    goto LAB18;

LAB21:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(51, ng0);

LAB26:    xsi_set_current_line(52, ng0);
    t10 = (t0 + 3688);
    t11 = (t10 + 56U);
    t17 = *((char **)t11);
    t18 = (t0 + 1528U);
    t19 = *((char **)t18);
    memset(t7, 0, 8);
    t18 = (t17 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB28;

LAB27:    t20 = (t19 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB28;

LAB31:    if (*((unsigned int *)t17) < *((unsigned int *)t19))
        goto LAB30;

LAB29:    *((unsigned int *)t7) = 1;

LAB30:    memset(t25, 0, 8);
    t22 = (t7 + 4);
    t46 = *((unsigned int *)t22);
    t47 = (~(t46));
    t48 = *((unsigned int *)t7);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t22) != 0)
        goto LAB34;

LAB35:    t24 = (t25 + 4);
    t51 = *((unsigned int *)t25);
    t52 = *((unsigned int *)t24);
    t53 = (t51 || t52);
    if (t53 > 0)
        goto LAB36;

LAB37:    memcpy(t65, t25, 8);

LAB38:    t96 = (t65 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t65);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(58, ng0);

LAB55:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);

LAB53:    goto LAB25;

LAB28:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB30;

LAB32:    *((unsigned int *)t25) = 1;
    goto LAB35;

LAB34:    t23 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB35;

LAB36:    t26 = (t0 + 1528U);
    t27 = *((char **)t26);
    t26 = (t0 + 3528);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    memset(t54, 0, 8);
    xsi_vlog_unsigned_multiply(t54, 4, t27, 4, t29, 4);
    t30 = (t0 + 1688U);
    t31 = *((char **)t30);
    memset(t55, 0, 8);
    t30 = (t54 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB40;

LAB39:    t32 = (t31 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB40;

LAB43:    if (*((unsigned int *)t54) > *((unsigned int *)t31))
        goto LAB42;

LAB41:    *((unsigned int *)t55) = 1;

LAB42:    memset(t57, 0, 8);
    t58 = (t55 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t55);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t58) != 0)
        goto LAB46;

LAB47:    t66 = *((unsigned int *)t25);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t25 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB38;

LAB40:    t56 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB42;

LAB44:    *((unsigned int *)t57) = 1;
    goto LAB47;

LAB46:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB47;

LAB48:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t25 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t25);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t34 = (t82 & t84);
    t89 = (t86 & t88);
    t90 = (~(t34));
    t91 = (~(t89));
    t92 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t92 & t90);
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t94 & t90);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    goto LAB50;

LAB51:    xsi_set_current_line(52, ng0);

LAB54:    xsi_set_current_line(53, ng0);
    t102 = (t0 + 1688U);
    t103 = *((char **)t102);
    t102 = (t0 + 1528U);
    t104 = *((char **)t102);
    t102 = (t0 + 3528);
    t105 = (t102 + 56U);
    t106 = *((char **)t105);
    memset(t107, 0, 8);
    xsi_vlog_unsigned_multiply(t107, 4, t104, 4, t106, 4);
    memset(t108, 0, 8);
    xsi_vlog_unsigned_minus(t108, 4, t103, 4, t107, 4);
    t109 = (t0 + 2888);
    xsi_vlogvar_assign_value(t109, t108, 0, 0, 4);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t2 = (t0 + 3528);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 4, t4, 4, t8, 4);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 4, t3, 4, t6, 4);
    t9 = (t0 + 2728);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 4);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB53;

LAB58:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB60;

LAB59:    *((unsigned int *)t6) = 1;
    goto LAB60;

LAB62:    xsi_set_current_line(66, ng0);

LAB64:    xsi_set_current_line(67, ng0);
    t17 = (t0 + 3688);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 3688);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 3368);
    t24 = (t23 + 56U);
    t26 = *((char **)t24);
    xsi_vlog_generic_get_index_select_value(t7, 1, t19, t22, 2, t26, 4, 2);
    t27 = (t0 + 3848);
    t28 = (t0 + 3848);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 3208);
    t32 = (t31 + 56U);
    t56 = *((char **)t32);
    xsi_vlog_generic_convert_bit_index(t25, t30, 2, t56, 4, 2);
    t58 = (t25 + 4);
    t33 = *((unsigned int *)t58);
    t34 = (!(t33));
    if (t34 == 1)
        goto LAB65;

LAB66:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t8 = (t0 + 3208);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 4);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 4);
    goto LAB56;

LAB65:    xsi_vlogvar_assign_value(t27, t7, 0, *((unsigned int *)t25), 1);
    goto LAB66;

}


extern void work_m_00000000004208518514_0939412181_init()
{
	static char *pe[] = {(void *)Always_41_0};
	xsi_register_didat("work_m_00000000004208518514_0939412181", "isim/vending_machine_isim_beh.exe.sim/work/m_00000000004208518514_0939412181.didat");
	xsi_register_executes(pe);
}
