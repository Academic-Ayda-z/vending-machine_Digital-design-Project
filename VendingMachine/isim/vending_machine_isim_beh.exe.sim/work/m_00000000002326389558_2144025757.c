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
static const char *ng0 = "C:/Users/imannet/Desktop/test/testingStuf/project.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {3, 0};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {4, 0};
static unsigned int ng9[] = {4U, 0U};
static int ng10[] = {5, 0};
static const char *ng11 = "mytest.txt";
static const char *ng12 = "r";
static const char *ng13 = "%b";
static int ng14[] = {0, 0};
static unsigned int ng15[] = {126U, 0U};
static unsigned int ng16[] = {48U, 0U};
static unsigned int ng17[] = {109U, 0U};
static unsigned int ng18[] = {121U, 0U};
static unsigned int ng19[] = {51U, 0U};
static unsigned int ng20[] = {5U, 0U};
static unsigned int ng21[] = {91U, 0U};
static unsigned int ng22[] = {6U, 0U};
static unsigned int ng23[] = {95U, 0U};
static unsigned int ng24[] = {7U, 0U};
static unsigned int ng25[] = {112U, 0U};
static unsigned int ng26[] = {8U, 0U};
static unsigned int ng27[] = {127U, 0U};
static unsigned int ng28[] = {9U, 0U};
static unsigned int ng29[] = {123U, 0U};
static unsigned int ng30[] = {10U, 0U};
static unsigned int ng31[] = {119U, 0U};
static unsigned int ng32[] = {11U, 0U};
static unsigned int ng33[] = {31U, 0U};
static unsigned int ng34[] = {12U, 0U};
static unsigned int ng35[] = {78U, 0U};
static unsigned int ng36[] = {13U, 0U};
static unsigned int ng37[] = {61U, 0U};
static unsigned int ng38[] = {14U, 0U};
static unsigned int ng39[] = {79U, 0U};
static unsigned int ng40[] = {15U, 0U};
static unsigned int ng41[] = {71U, 0U};

static void NetReassign_61_2(char *);
static void NetReassign_65_3(char *);
static void NetReassign_66_4(char *);
static void NetReassign_71_5(char *);


static void Initial_52_0(char *t0)
{
    char t6[8];
    char t7[16];
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(52, ng0);

LAB2:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1528U);
    t2 = *((char **)t1);

LAB3:    t1 = ((char*)((ng1)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB4;

LAB5:    t1 = ((char*)((ng3)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB6;

LAB7:    t1 = ((char*)((ng5)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB8;

LAB9:    t1 = ((char*)((ng7)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB10;

LAB11:    t1 = ((char*)((ng9)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 4968);
    xsi_set_assignedflag(t1);
    t4 = (t0 + 9980);
    *((int *)t4) = 1;
    NetReassign_61_2(t0);
    xsi_set_current_line(63, ng0);
    *((int *)t6) = xsi_vlogfile_file_open_of_cname_ctype(ng11, ng12);
    t1 = (t6 + 4);
    *((int *)t1) = 0;
    t4 = (t0 + 4328);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 4328);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t0 + 4808);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_bit_copy(t7, 0, t10, 0, 40);
    *((int *)t6) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng13, 2, t0, (char)118, t7, 40);
    t11 = (t6 + 4);
    *((int *)t11) = 0;
    t12 = (t0 + 4808);
    xsi_vlogvar_assign_value(t12, t7, 0, 0, 40);
    t13 = (t0 + 4488);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 4008);
    xsi_set_assignedflag(t1);
    t4 = (t0 + 9984);
    *((int *)t4) = 1;
    NetReassign_65_3(t0);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 4168);
    xsi_set_assignedflag(t1);
    t4 = (t0 + 9988);
    *((int *)t4) = 1;
    NetReassign_66_4(t0);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 4328);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(69, ng0);
    t1 = ((char*)((ng1)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 4);
    xsi_set_current_line(70, ng0);
    t1 = ((char*)((ng1)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 7);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 3848);
    xsi_set_assignedflag(t1);
    t4 = (t0 + 9992);
    *((int *)t4) = 1;
    NetReassign_71_5(t0);

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 4648);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB14;

LAB6:    xsi_set_current_line(55, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 4648);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB14;

LAB8:    xsi_set_current_line(56, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 4648);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB14;

LAB10:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 4648);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB14;

LAB12:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 4648);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB14;

}

static void Always_109_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 7448);
    *((int *)t2) = 1;
    t3 = (t0 + 6168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(109, ng0);

LAB5:    xsi_set_current_line(110, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB18:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3688);
    t4 = (t2 + 56U);
    t7 = *((char **)t4);

LAB29:    t8 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t8, 4);
    if (t6 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t6 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t6 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t6 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t6 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t6 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t6 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t6 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t6 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t6 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng30)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t6 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng32)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t6 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng34)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t6 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng36)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t6 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng38)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t6 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng40)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t6 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB2;

LAB7:    xsi_set_current_line(111, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 4648);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB17;

LAB9:    xsi_set_current_line(112, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB17;

LAB11:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB17;

LAB13:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB17;

LAB15:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB17;

LAB19:    xsi_set_current_line(119, ng0);

LAB26:    xsi_set_current_line(120, ng0);
    t4 = (t0 + 2168U);
    t7 = *((char **)t4);
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 20);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 4);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2968U);
    t4 = *((char **)t2);
    t2 = (t0 + 4968);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 4);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2488U);
    t4 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 4968);
    t4 = (t2 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3688);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB25;

LAB21:    xsi_set_current_line(126, ng0);

LAB27:    xsi_set_current_line(127, ng0);
    t4 = (t0 + 2328U);
    t7 = *((char **)t4);
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 20);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2648U);
    t4 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 1);
    goto LAB25;

LAB23:    xsi_set_current_line(130, ng0);

LAB28:    xsi_set_current_line(131, ng0);
    t4 = (t0 + 2008U);
    t7 = *((char **)t4);
    t4 = (t0 + 3848);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 4);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3848);
    t4 = (t2 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3688);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2808U);
    t4 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 1);
    goto LAB25;

LAB30:    xsi_set_current_line(137, ng0);
    t9 = ((char*)((ng15)));
    t10 = (t0 + 3368);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 7);
    goto LAB62;

LAB32:    xsi_set_current_line(138, ng0);
    t4 = ((char*)((ng16)));
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 7);
    goto LAB62;

LAB34:    xsi_set_current_line(139, ng0);
    t4 = ((char*)((ng17)));
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 7);
    goto LAB62;

LAB36:    xsi_set_current_line(140, ng0);
    t4 = ((char*)((ng18)));
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 7);
    goto LAB62;

LAB38:    xsi_set_current_line(141, ng0);
    t4 = ((char*)((ng19)));
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 7);
    goto LAB62;

LAB40:    xsi_set_current_line(142, ng0);
    t4 = ((char*)((ng21)));
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 7);
    goto LAB62;

LAB42:    xsi_set_current_line(143, ng0);
    t4 = ((char*)((ng23)));
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 7);
    goto LAB62;

LAB44:    xsi_set_current_line(144, ng0);
    t4 = ((char*)((ng25)));
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 7);
    goto LAB62;

LAB46:    xsi_set_current_line(145, ng0);
    t4 = ((char*)((ng27)));
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 7);
    goto LAB62;

LAB48:    xsi_set_current_line(146, ng0);
    t4 = ((char*)((ng29)));
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 7);
    goto LAB62;

LAB50:    xsi_set_current_line(147, ng0);
    t4 = ((char*)((ng31)));
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 7);
    goto LAB62;

LAB52:    xsi_set_current_line(148, ng0);
    t4 = ((char*)((ng33)));
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 7);
    goto LAB62;

LAB54:    xsi_set_current_line(149, ng0);
    t4 = ((char*)((ng35)));
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 7);
    goto LAB62;

LAB56:    xsi_set_current_line(150, ng0);
    t4 = ((char*)((ng37)));
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 7);
    goto LAB62;

LAB58:    xsi_set_current_line(151, ng0);
    t4 = ((char*)((ng39)));
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 7);
    goto LAB62;

LAB60:    xsi_set_current_line(152, ng0);
    t4 = ((char*)((ng41)));
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 7);
    goto LAB62;

}

static void NetReassign_61_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t3 = 0;
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 9980);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 7464);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 4968);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 4, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 7464);
    *((int *)t6) = 1;
    goto LAB8;

}

static void NetReassign_65_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 6632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t3 = 0;
    t2 = (t0 + 4808);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 1048575U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 1048575U);
    t15 = (t0 + 9984);
    if (*((int *)t15) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t18 = (t0 + 7480);
    *((int *)t18) = 0;

LAB8:
LAB1:    return;
LAB4:    t16 = (t0 + 4008);
    xsi_vlogvar_assignassignvalue(t16, t4, 0, 0, 0, 20, ((int*)(t15)));
    t3 = 1;
    goto LAB5;

LAB6:    t17 = (t0 + 7480);
    *((int *)t17) = 1;
    goto LAB8;

}

static void NetReassign_66_4(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 6880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t3 = 0;
    t2 = (t0 + 4808);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 20);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 20);
    *((unsigned int *)t7) = t12;
    t13 = (t6 + 8);
    t14 = (t6 + 12);
    t15 = *((unsigned int *)t13);
    t16 = (t15 << 12);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 | t16);
    t18 = *((unsigned int *)t14);
    t19 = (t18 << 12);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 | t19);
    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1048575U);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 1048575U);
    t23 = (t0 + 9988);
    if (*((int *)t23) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t26 = (t0 + 7496);
    *((int *)t26) = 0;

LAB8:
LAB1:    return;
LAB4:    t24 = (t0 + 4168);
    xsi_vlogvar_assignassignvalue(t24, t4, 0, 0, 0, 20, ((int*)(t23)));
    t3 = 1;
    goto LAB5;

LAB6:    t25 = (t0 + 7496);
    *((int *)t25) = 1;
    goto LAB8;

}

static void NetReassign_71_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 7128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t3 = 0;
    t2 = ((char*)((ng1)));
    t4 = (t0 + 9992);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 3848);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 4, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}


extern void work_m_00000000002326389558_2144025757_init()
{
	static char *pe[] = {(void *)Initial_52_0,(void *)Always_109_1,(void *)NetReassign_61_2,(void *)NetReassign_65_3,(void *)NetReassign_66_4,(void *)NetReassign_71_5};
	xsi_register_didat("work_m_00000000002326389558_2144025757", "isim/vending_machine_isim_beh.exe.sim/work/m_00000000002326389558_2144025757.didat");
	xsi_register_executes(pe);
}
