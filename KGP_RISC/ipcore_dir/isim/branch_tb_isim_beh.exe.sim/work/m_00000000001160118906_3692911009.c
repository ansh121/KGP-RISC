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
static const char *ng0 = "D:/My Study Folder/3rd Year/Sem 5/COA/Lab/Assignment 10/KGP_RISC/ipcore_dir/branch.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {10U, 0U};



static void Initial_35_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_41_1(char *t0)
{
    char t8[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4376);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(183, ng0);

LAB126:    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 8, 0LL);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(46, ng0);

LAB14:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB15:    t4 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t7 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB36;

LAB37:
LAB39:
LAB38:    xsi_set_current_line(169, ng0);

LAB124:    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 8, 0LL);

LAB40:    goto LAB13;

LAB9:    xsi_set_current_line(177, ng0);

LAB125:    xsi_set_current_line(178, ng0);
    t4 = (t0 + 1368U);
    t9 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t8 + 4);
    t10 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 0);
    *((unsigned int *)t4) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 255U);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 & 255U);
    t11 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t11, t8, 0, 0, 8, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB13;

LAB16:    xsi_set_current_line(49, ng0);

LAB41:    xsi_set_current_line(50, ng0);
    t9 = (t0 + 1368U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t9) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 255U);
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 255U);
    t18 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t18, t8, 0, 0, 8, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB40;

LAB18:    xsi_set_current_line(54, ng0);

LAB42:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1688U);
    t9 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t10 = (t9 + 4);
    t11 = (t4 + 4);
    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t4);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB46;

LAB43:    if (t22 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t8) = 1;

LAB46:    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(61, ng0);

LAB51:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 8, 0LL);

LAB49:    goto LAB40;

LAB20:    xsi_set_current_line(67, ng0);

LAB52:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 1688U);
    t9 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t10 = (t9 + 4);
    t11 = (t4 + 4);
    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t4);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB56;

LAB53:    if (t22 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t8) = 1;

LAB56:    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(74, ng0);

LAB61:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 8, 0LL);

LAB59:    goto LAB40;

LAB22:    xsi_set_current_line(80, ng0);

LAB62:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 1528U);
    t9 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t10 = (t9 + 4);
    t11 = (t4 + 4);
    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t4);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB66;

LAB63:    if (t22 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t8) = 1;

LAB66:    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(87, ng0);

LAB71:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 8, 0LL);

LAB69:    goto LAB40;

LAB24:    xsi_set_current_line(93, ng0);

LAB72:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 1528U);
    t9 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t10 = (t9 + 4);
    t11 = (t4 + 4);
    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t4);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB76;

LAB73:    if (t22 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t8) = 1;

LAB76:    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(100, ng0);

LAB81:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 8, 0LL);

LAB79:    goto LAB40;

LAB26:    xsi_set_current_line(106, ng0);

LAB82:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 2008U);
    t9 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t10 = (t9 + 4);
    t11 = (t4 + 4);
    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t4);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB86;

LAB83:    if (t22 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t8) = 1;

LAB86:    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(113, ng0);

LAB91:    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 8, 0LL);

LAB89:    goto LAB40;

LAB28:    xsi_set_current_line(119, ng0);

LAB92:    xsi_set_current_line(120, ng0);
    t4 = (t0 + 2008U);
    t9 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t10 = (t9 + 4);
    t11 = (t4 + 4);
    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t4);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB96;

LAB93:    if (t22 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t8) = 1;

LAB96:    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(126, ng0);

LAB101:    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 8, 0LL);

LAB99:    goto LAB40;

LAB30:    xsi_set_current_line(132, ng0);

LAB102:    xsi_set_current_line(133, ng0);
    t4 = (t0 + 1848U);
    t9 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t10 = (t9 + 4);
    t11 = (t4 + 4);
    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t4);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB106;

LAB103:    if (t22 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t8) = 1;

LAB106:    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(139, ng0);

LAB111:    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 8, 0LL);

LAB109:    goto LAB40;

LAB32:    xsi_set_current_line(145, ng0);

LAB112:    xsi_set_current_line(146, ng0);
    t4 = (t0 + 1848U);
    t9 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t10 = (t9 + 4);
    t11 = (t4 + 4);
    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t4);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t19 = (t14 | t17);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB116;

LAB113:    if (t22 != 0)
        goto LAB115;

LAB114:    *((unsigned int *)t8) = 1;

LAB116:    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB117;

LAB118:    xsi_set_current_line(152, ng0);

LAB121:    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 8, 0LL);

LAB119:    goto LAB40;

LAB34:    xsi_set_current_line(158, ng0);

LAB122:    xsi_set_current_line(159, ng0);
    t4 = (t0 + 1368U);
    t9 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t8 + 4);
    t10 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 0);
    *((unsigned int *)t4) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 255U);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 & 255U);
    t11 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t11, t8, 0, 0, 8, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 2168U);
    t4 = *((char **)t2);
    memcpy(t8, t4, 8);
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t8, 0, 0, 32, 0LL);
    goto LAB40;

LAB36:    xsi_set_current_line(164, ng0);

LAB123:    xsi_set_current_line(165, ng0);
    t4 = (t0 + 2888);
    t9 = (t4 + 56U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t11 = (t8 + 4);
    t18 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t18);
    t15 = (t14 >> 0);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 255U);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 255U);
    t25 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t25, t8, 0, 0, 8, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB40;

LAB45:    t18 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(56, ng0);

LAB50:    xsi_set_current_line(57, ng0);
    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 0);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    t41 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t41, t31, 0, 0, 8, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB49;

LAB55:    t18 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(69, ng0);

LAB60:    xsi_set_current_line(70, ng0);
    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 0);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    t41 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t41, t31, 0, 0, 8, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB59;

LAB65:    t18 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(82, ng0);

LAB70:    xsi_set_current_line(83, ng0);
    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 0);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    t41 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t41, t31, 0, 0, 8, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB69;

LAB75:    t18 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(95, ng0);

LAB80:    xsi_set_current_line(96, ng0);
    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 0);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    t41 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t41, t31, 0, 0, 8, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB79;

LAB85:    t18 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB86;

LAB87:    xsi_set_current_line(108, ng0);

LAB90:    xsi_set_current_line(109, ng0);
    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 0);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    t41 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t41, t31, 0, 0, 8, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB89;

LAB95:    t18 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB96;

LAB97:    xsi_set_current_line(121, ng0);

LAB100:    xsi_set_current_line(122, ng0);
    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 0);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    t41 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t41, t31, 0, 0, 8, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB99;

LAB105:    t18 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB106;

LAB107:    xsi_set_current_line(134, ng0);

LAB110:    xsi_set_current_line(135, ng0);
    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 0);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    t41 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t41, t31, 0, 0, 8, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB109;

LAB115:    t18 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB116;

LAB117:    xsi_set_current_line(147, ng0);

LAB120:    xsi_set_current_line(148, ng0);
    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 0);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    t41 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t41, t31, 0, 0, 8, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB119;

}


extern void work_m_00000000001160118906_3692911009_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_41_1};
	xsi_register_didat("work_m_00000000001160118906_3692911009", "isim/branch_tb_isim_beh.exe.sim/work/m_00000000001160118906_3692911009.didat");
	xsi_register_executes(pe);
}
