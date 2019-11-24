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
static const char *ng0 = "D:/My Study Folder/3rd Year/Sem 5/COA/Lab/Assignment 10/KGP_RISC/ipcore_dir/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {11U, 0U};
static int ng13[] = {0, 0, 0, 0};
static int ng14[] = {1, 0};
static unsigned int ng15[] = {10U, 0U};



static void Cont_45_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8112);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 8000);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_46_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8176);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 8016);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_56_2(char *t0)
{
    char t4[8];
    char t5[8];
    char t8[8];
    char t48[8];
    char t62[8];
    char t70[8];
    char t85[16];
    char t86[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    int t34;
    int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    int t46;
    char *t47;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t87;

LAB0:    t1 = (t0 + 7184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 8032);
    *((int *)t2) = 1;
    t3 = (t0 + 7216);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    memset(t5, 0, 8);
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t16) != 0)
        goto LAB8;

LAB9:    t23 = (t5 + 4);
    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB10;

LAB11:    t29 = *((unsigned int *)t5);
    t30 = (~(t29));
    t31 = *((unsigned int *)t23);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t23) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) > 0)
        goto LAB16;

LAB17:    memcpy(t4, t33, 8);

LAB18:    t27 = (t0 + 5608);
    xsi_vlogvar_assign_value(t27, t4, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t6 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t2) = t15;
    memset(t5, 0, 8);
    t7 = (t8 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t7) != 0)
        goto LAB21;

LAB22:    t16 = (t5 + 4);
    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t16);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB23;

LAB24:    t29 = *((unsigned int *)t5);
    t30 = (~(t29));
    t31 = *((unsigned int *)t16);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t16) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t5) > 0)
        goto LAB29;

LAB30:    memcpy(t4, t27, 8);

LAB31:    t22 = (t0 + 5768);
    xsi_vlogvar_assign_value(t22, t4, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);

LAB32:    t2 = ((char*)((ng1)));
    t34 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t34 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng3)));
    t34 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t34 == 1)
        goto LAB35;

LAB36:
LAB38:
LAB37:    xsi_set_current_line(207, ng0);

LAB381:    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 4328);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4488);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);

LAB39:    goto LAB2;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB8:    t22 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB9;

LAB10:    t27 = (t0 + 3448U);
    t28 = *((char **)t27);
    goto LAB11;

LAB12:    t27 = (t0 + 1208U);
    t33 = *((char **)t27);
    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t4, 32, t28, 32, t33, 32);
    goto LAB18;

LAB16:    memcpy(t4, t28, 8);
    goto LAB18;

LAB19:    *((unsigned int *)t5) = 1;
    goto LAB22;

LAB21:    t9 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB22;

LAB23:    t22 = (t0 + 3608U);
    t23 = *((char **)t22);
    goto LAB24;

LAB25:    t22 = (t0 + 1368U);
    t27 = *((char **)t22);
    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t4, 32, t23, 32, t27, 32);
    goto LAB31;

LAB29:    memcpy(t4, t23, 8);
    goto LAB31;

LAB33:    xsi_set_current_line(61, ng0);

LAB40:    xsi_set_current_line(62, ng0);
    t6 = (t0 + 1688U);
    t7 = *((char **)t6);

LAB41:    t6 = ((char*)((ng1)));
    t35 = xsi_vlog_unsigned_case_compare(t7, 4, t6, 4);
    if (t35 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng3)));
    t34 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t34 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng4)));
    t34 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t34 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng5)));
    t34 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t34 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng6)));
    t34 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t34 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng7)));
    t34 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t34 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng8)));
    t34 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t34 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng9)));
    t34 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t34 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng10)));
    t34 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t34 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng11)));
    t34 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t34 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng12)));
    t34 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t34 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng15)));
    t34 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t34 == 1)
        goto LAB64;

LAB65:
LAB67:
LAB66:    xsi_set_current_line(172, ng0);

LAB325:    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4328);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4488);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);

LAB68:    goto LAB39;

LAB35:    xsi_set_current_line(180, ng0);

LAB326:    xsi_set_current_line(181, ng0);
    t6 = (t0 + 1688U);
    t9 = *((char **)t6);

LAB327:    t6 = ((char*)((ng1)));
    t35 = xsi_vlog_unsigned_case_compare(t9, 4, t6, 4);
    if (t35 == 1)
        goto LAB328;

LAB329:    t2 = ((char*)((ng3)));
    t34 = xsi_vlog_unsigned_case_compare(t9, 4, t2, 4);
    if (t34 == 1)
        goto LAB330;

LAB331:
LAB333:
LAB332:    xsi_set_current_line(199, ng0);

LAB380:    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4328);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4488);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);

LAB334:    goto LAB39;

LAB42:    xsi_set_current_line(64, ng0);

LAB69:    xsi_set_current_line(65, ng0);
    t9 = (t0 + 1208U);
    t16 = *((char **)t9);
    t9 = (t0 + 1368U);
    t22 = *((char **)t9);
    t10 = *((unsigned int *)t16);
    t11 = *((unsigned int *)t22);
    t12 = (t10 ^ t11);
    *((unsigned int *)t4) = t12;
    t9 = (t16 + 4);
    t23 = (t22 + 4);
    t27 = (t4 + 4);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t23);
    t15 = (t13 | t14);
    *((unsigned int *)t27) = t15;
    t17 = *((unsigned int *)t27);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB70;

LAB71:
LAB72:    t28 = (t0 + 4328);
    xsi_vlogvar_assign_value(t28, t4, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4488);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 5128);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 4648);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t16 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t22 = (t9 + 4);
    t23 = (t16 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t16);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t22);
    t14 = *((unsigned int *)t23);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t24 = (t17 & t21);
    if (t24 != 0)
        goto LAB76;

LAB73:    if (t20 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t8) = 1;

LAB76:    memset(t5, 0, 8);
    t28 = (t8 + 4);
    t25 = *((unsigned int *)t28);
    t26 = (~(t25));
    t29 = *((unsigned int *)t8);
    t30 = (t29 & t26);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t28) != 0)
        goto LAB79;

LAB80:    t36 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t37 = *((unsigned int *)t36);
    t38 = (t32 || t37);
    if (t38 > 0)
        goto LAB81;

LAB82:    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t36) > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t5) > 0)
        goto LAB87;

LAB88:    memcpy(t4, t44, 8);

LAB89:    t45 = (t0 + 4808);
    xsi_vlogvar_assign_value(t45, t4, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    memset(t4, 0, 8);
    t16 = (t4 + 4);
    t22 = (t9 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t22);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t16) = t15;
    t23 = (t0 + 4968);
    xsi_vlogvar_assign_value(t23, t4, 0, 0, 1);
    goto LAB68;

LAB44:    xsi_set_current_line(73, ng0);

LAB90:    xsi_set_current_line(74, ng0);
    t6 = (t0 + 1208U);
    t9 = *((char **)t6);
    t6 = (t0 + 1368U);
    t16 = *((char **)t6);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t16);
    t12 = (t10 & t11);
    *((unsigned int *)t4) = t12;
    t6 = (t9 + 4);
    t22 = (t16 + 4);
    t23 = (t4 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t22);
    t15 = (t13 | t14);
    *((unsigned int *)t23) = t15;
    t17 = *((unsigned int *)t23);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB91;

LAB92:
LAB93:    t33 = (t0 + 4328);
    xsi_vlogvar_assign_value(t33, t4, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4488);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 5128);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 4648);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t16 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t22 = (t9 + 4);
    t23 = (t16 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t16);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t22);
    t14 = *((unsigned int *)t23);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t24 = (t17 & t21);
    if (t24 != 0)
        goto LAB97;

LAB94:    if (t20 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t8) = 1;

LAB97:    memset(t5, 0, 8);
    t28 = (t8 + 4);
    t25 = *((unsigned int *)t28);
    t26 = (~(t25));
    t29 = *((unsigned int *)t8);
    t30 = (t29 & t26);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t28) != 0)
        goto LAB100;

LAB101:    t36 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t37 = *((unsigned int *)t36);
    t38 = (t32 || t37);
    if (t38 > 0)
        goto LAB102;

LAB103:    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t36) > 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t5) > 0)
        goto LAB108;

LAB109:    memcpy(t4, t44, 8);

LAB110:    t45 = (t0 + 4808);
    xsi_vlogvar_assign_value(t45, t4, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    memset(t4, 0, 8);
    t16 = (t4 + 4);
    t22 = (t9 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t22);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t16) = t15;
    t23 = (t0 + 4968);
    xsi_vlogvar_assign_value(t23, t4, 0, 0, 1);
    goto LAB68;

LAB46:    xsi_set_current_line(82, ng0);

LAB111:    xsi_set_current_line(83, ng0);
    t6 = (t0 + 3608U);
    t9 = *((char **)t6);
    t6 = (t0 + 4328);
    xsi_vlogvar_assign_value(t6, t9, 0, 0, 32);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4488);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 5128);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 4648);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t16 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t22 = (t9 + 4);
    t23 = (t16 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t16);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t22);
    t14 = *((unsigned int *)t23);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t24 = (t17 & t21);
    if (t24 != 0)
        goto LAB115;

LAB112:    if (t20 != 0)
        goto LAB114;

LAB113:    *((unsigned int *)t8) = 1;

LAB115:    memset(t5, 0, 8);
    t28 = (t8 + 4);
    t25 = *((unsigned int *)t28);
    t26 = (~(t25));
    t29 = *((unsigned int *)t8);
    t30 = (t29 & t26);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t28) != 0)
        goto LAB118;

LAB119:    t36 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t37 = *((unsigned int *)t36);
    t38 = (t32 || t37);
    if (t38 > 0)
        goto LAB120;

LAB121:    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t36) > 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t5) > 0)
        goto LAB126;

LAB127:    memcpy(t4, t44, 8);

LAB128:    t45 = (t0 + 4808);
    xsi_vlogvar_assign_value(t45, t4, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    memset(t4, 0, 8);
    t16 = (t4 + 4);
    t22 = (t9 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t22);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t16) = t15;
    t23 = (t0 + 4968);
    xsi_vlogvar_assign_value(t23, t4, 0, 0, 1);
    goto LAB68;

LAB48:    xsi_set_current_line(91, ng0);

LAB129:    xsi_set_current_line(92, ng0);
    t6 = (t0 + 2328U);
    t9 = *((char **)t6);
    t6 = (t0 + 4328);
    xsi_vlogvar_assign_value(t6, t9, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1848U);
    t6 = *((char **)t2);
    t2 = (t0 + 4648);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4488);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4648);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t16 = (t0 + 4328);
    t22 = (t16 + 56U);
    t23 = *((char **)t22);
    memset(t4, 0, 8);
    t27 = (t4 + 4);
    t28 = (t23 + 4);
    t10 = *((unsigned int *)t23);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t28);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t27) = t15;
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t4);
    t19 = (t17 ^ t18);
    *((unsigned int *)t5) = t19;
    t33 = (t9 + 4);
    t36 = (t4 + 4);
    t39 = (t5 + 4);
    t20 = *((unsigned int *)t33);
    t21 = *((unsigned int *)t36);
    t24 = (t20 | t21);
    *((unsigned int *)t39) = t24;
    t25 = *((unsigned int *)t39);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB130;

LAB131:
LAB132:    t44 = (t0 + 1208U);
    t45 = *((char **)t44);
    memset(t8, 0, 8);
    t44 = (t8 + 4);
    t47 = (t45 + 4);
    t31 = *((unsigned int *)t45);
    t32 = (t31 >> 31);
    t37 = (t32 & 1);
    *((unsigned int *)t8) = t37;
    t38 = *((unsigned int *)t47);
    t40 = (t38 >> 31);
    t41 = (t40 & 1);
    *((unsigned int *)t44) = t41;
    t42 = *((unsigned int *)t5);
    t43 = *((unsigned int *)t8);
    t49 = (t42 ^ t43);
    *((unsigned int *)t48) = t49;
    t50 = (t5 + 4);
    t51 = (t8 + 4);
    t52 = (t48 + 4);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB133;

LAB134:
LAB135:    t60 = (t0 + 1368U);
    t61 = *((char **)t60);
    memset(t62, 0, 8);
    t60 = (t62 + 4);
    t63 = (t61 + 4);
    t64 = *((unsigned int *)t61);
    t65 = (t64 >> 31);
    t66 = (t65 & 1);
    *((unsigned int *)t62) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 >> 31);
    t69 = (t68 & 1);
    *((unsigned int *)t60) = t69;
    t71 = *((unsigned int *)t48);
    t72 = *((unsigned int *)t62);
    t73 = (t71 ^ t72);
    *((unsigned int *)t70) = t73;
    t74 = (t48 + 4);
    t75 = (t62 + 4);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t74);
    t78 = *((unsigned int *)t75);
    t79 = (t77 | t78);
    *((unsigned int *)t76) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB136;

LAB137:
LAB138:    t84 = (t0 + 5128);
    xsi_vlogvar_assign_value(t84, t70, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t16 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t22 = (t9 + 4);
    t23 = (t16 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t16);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t22);
    t14 = *((unsigned int *)t23);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t24 = (t17 & t21);
    if (t24 != 0)
        goto LAB142;

LAB139:    if (t20 != 0)
        goto LAB141;

LAB140:    *((unsigned int *)t8) = 1;

LAB142:    memset(t5, 0, 8);
    t28 = (t8 + 4);
    t25 = *((unsigned int *)t28);
    t26 = (~(t25));
    t29 = *((unsigned int *)t8);
    t30 = (t29 & t26);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t28) != 0)
        goto LAB145;

LAB146:    t36 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t37 = *((unsigned int *)t36);
    t38 = (t32 || t37);
    if (t38 > 0)
        goto LAB147;

LAB148:    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB149;

LAB150:    if (*((unsigned int *)t36) > 0)
        goto LAB151;

LAB152:    if (*((unsigned int *)t5) > 0)
        goto LAB153;

LAB154:    memcpy(t4, t44, 8);

LAB155:    t45 = (t0 + 4808);
    xsi_vlogvar_assign_value(t45, t4, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    memset(t4, 0, 8);
    t16 = (t4 + 4);
    t22 = (t9 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t22);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t16) = t15;
    t23 = (t0 + 4968);
    xsi_vlogvar_assign_value(t23, t4, 0, 0, 1);
    goto LAB68;

LAB50:    xsi_set_current_line(100, ng0);

LAB156:    xsi_set_current_line(101, ng0);
    t6 = (t0 + 2648U);
    t9 = *((char **)t6);
    t6 = (t0 + 4328);
    xsi_vlogvar_assign_value(t6, t9, 0, 0, 32);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4488);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 5128);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 4648);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t16 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t22 = (t9 + 4);
    t23 = (t16 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t16);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t22);
    t14 = *((unsigned int *)t23);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t24 = (t17 & t21);
    if (t24 != 0)
        goto LAB160;

LAB157:    if (t20 != 0)
        goto LAB159;

LAB158:    *((unsigned int *)t8) = 1;

LAB160:    memset(t5, 0, 8);
    t28 = (t8 + 4);
    t25 = *((unsigned int *)t28);
    t26 = (~(t25));
    t29 = *((unsigned int *)t8);
    t30 = (t29 & t26);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB161;

LAB162:    if (*((unsigned int *)t28) != 0)
        goto LAB163;

LAB164:    t36 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t37 = *((unsigned int *)t36);
    t38 = (t32 || t37);
    if (t38 > 0)
        goto LAB165;

LAB166:    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB167;

LAB168:    if (*((unsigned int *)t36) > 0)
        goto LAB169;

LAB170:    if (*((unsigned int *)t5) > 0)
        goto LAB171;

LAB172:    memcpy(t4, t44, 8);

LAB173:    t45 = (t0 + 4808);
    xsi_vlogvar_assign_value(t45, t4, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    memset(t4, 0, 8);
    t16 = (t4 + 4);
    t22 = (t9 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t22);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t16) = t15;
    t23 = (t0 + 4968);
    xsi_vlogvar_assign_value(t23, t4, 0, 0, 1);
    goto LAB68;

LAB52:    xsi_set_current_line(109, ng0);

LAB174:    xsi_set_current_line(110, ng0);
    t6 = (t0 + 2488U);
    t9 = *((char **)t6);
    t6 = (t0 + 4328);
    xsi_vlogvar_assign_value(t6, t9, 0, 0, 32);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4488);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 5128);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 4648);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t16 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t22 = (t9 + 4);
    t23 = (t16 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t16);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t22);
    t14 = *((unsigned int *)t23);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t24 = (t17 & t21);
    if (t24 != 0)
        goto LAB178;

LAB175:    if (t20 != 0)
        goto LAB177;

LAB176:    *((unsigned int *)t8) = 1;

LAB178:    memset(t5, 0, 8);
    t28 = (t8 + 4);
    t25 = *((unsigned int *)t28);
    t26 = (~(t25));
    t29 = *((unsigned int *)t8);
    t30 = (t29 & t26);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB179;

LAB180:    if (*((unsigned int *)t28) != 0)
        goto LAB181;

LAB182:    t36 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t37 = *((unsigned int *)t36);
    t38 = (t32 || t37);
    if (t38 > 0)
        goto LAB183;

LAB184:    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB185;

LAB186:    if (*((unsigned int *)t36) > 0)
        goto LAB187;

LAB188:    if (*((unsigned int *)t5) > 0)
        goto LAB189;

LAB190:    memcpy(t4, t44, 8);

LAB191:    t45 = (t0 + 4808);
    xsi_vlogvar_assign_value(t45, t4, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    memset(t4, 0, 8);
    t16 = (t4 + 4);
    t22 = (t9 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t22);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t16) = t15;
    t23 = (t0 + 4968);
    xsi_vlogvar_assign_value(t23, t4, 0, 0, 1);
    goto LAB68;

LAB54:    xsi_set_current_line(118, ng0);

LAB192:    xsi_set_current_line(119, ng0);
    t6 = (t0 + 2648U);
    t9 = *((char **)t6);
    t6 = (t0 + 4328);
    xsi_vlogvar_assign_value(t6, t9, 0, 0, 32);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4488);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 5128);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 4648);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t16 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t22 = (t9 + 4);
    t23 = (t16 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t16);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t22);
    t14 = *((unsigned int *)t23);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t24 = (t17 & t21);
    if (t24 != 0)
        goto LAB196;

LAB193:    if (t20 != 0)
        goto LAB195;

LAB194:    *((unsigned int *)t8) = 1;

LAB196:    memset(t5, 0, 8);
    t28 = (t8 + 4);
    t25 = *((unsigned int *)t28);
    t26 = (~(t25));
    t29 = *((unsigned int *)t8);
    t30 = (t29 & t26);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB197;

LAB198:    if (*((unsigned int *)t28) != 0)
        goto LAB199;

LAB200:    t36 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t37 = *((unsigned int *)t36);
    t38 = (t32 || t37);
    if (t38 > 0)
        goto LAB201;

LAB202:    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB203;

LAB204:    if (*((unsigned int *)t36) > 0)
        goto LAB205;

LAB206:    if (*((unsigned int *)t5) > 0)
        goto LAB207;

LAB208:    memcpy(t4, t44, 8);

LAB209:    t45 = (t0 + 4808);
    xsi_vlogvar_assign_value(t45, t4, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    memset(t4, 0, 8);
    t16 = (t4 + 4);
    t22 = (t9 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t22);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t16) = t15;
    t23 = (t0 + 4968);
    xsi_vlogvar_assign_value(t23, t4, 0, 0, 1);
    goto LAB68;

LAB56:    xsi_set_current_line(127, ng0);

LAB210:    xsi_set_current_line(128, ng0);
    t6 = (t0 + 2488U);
    t9 = *((char **)t6);
    t6 = (t0 + 4328);
    xsi_vlogvar_assign_value(t6, t9, 0, 0, 32);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4488);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 5128);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 4648);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t16 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t22 = (t9 + 4);
    t23 = (t16 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t16);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t22);
    t14 = *((unsigned int *)t23);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t24 = (t17 & t21);
    if (t24 != 0)
        goto LAB214;

LAB211:    if (t20 != 0)
        goto LAB213;

LAB212:    *((unsigned int *)t8) = 1;

LAB214:    memset(t5, 0, 8);
    t28 = (t8 + 4);
    t25 = *((unsigned int *)t28);
    t26 = (~(t25));
    t29 = *((unsigned int *)t8);
    t30 = (t29 & t26);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB215;

LAB216:    if (*((unsigned int *)t28) != 0)
        goto LAB217;

LAB218:    t36 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t37 = *((unsigned int *)t36);
    t38 = (t32 || t37);
    if (t38 > 0)
        goto LAB219;

LAB220:    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB221;

LAB222:    if (*((unsigned int *)t36) > 0)
        goto LAB223;

LAB224:    if (*((unsigned int *)t5) > 0)
        goto LAB225;

LAB226:    memcpy(t4, t44, 8);

LAB227:    t45 = (t0 + 4808);
    xsi_vlogvar_assign_value(t45, t4, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    memset(t4, 0, 8);
    t16 = (t4 + 4);
    t22 = (t9 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t22);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t16) = t15;
    t23 = (t0 + 4968);
    xsi_vlogvar_assign_value(t23, t4, 0, 0, 1);
    goto LAB68;

LAB58:    xsi_set_current_line(136, ng0);

LAB228:    xsi_set_current_line(137, ng0);
    t6 = (t0 + 2808U);
    t9 = *((char **)t6);
    t6 = (t0 + 4328);
    xsi_vlogvar_assign_value(t6, t9, 0, 0, 32);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4488);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 5128);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 4648);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t16 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t22 = (t9 + 4);
    t23 = (t16 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t16);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t22);
    t14 = *((unsigned int *)t23);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t24 = (t17 & t21);
    if (t24 != 0)
        goto LAB232;

LAB229:    if (t20 != 0)
        goto LAB231;

LAB230:    *((unsigned int *)t8) = 1;

LAB232:    memset(t5, 0, 8);
    t28 = (t8 + 4);
    t25 = *((unsigned int *)t28);
    t26 = (~(t25));
    t29 = *((unsigned int *)t8);
    t30 = (t29 & t26);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB233;

LAB234:    if (*((unsigned int *)t28) != 0)
        goto LAB235;

LAB236:    t36 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t37 = *((unsigned int *)t36);
    t38 = (t32 || t37);
    if (t38 > 0)
        goto LAB237;

LAB238:    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB239;

LAB240:    if (*((unsigned int *)t36) > 0)
        goto LAB241;

LAB242:    if (*((unsigned int *)t5) > 0)
        goto LAB243;

LAB244:    memcpy(t4, t44, 8);

LAB245:    t45 = (t0 + 4808);
    xsi_vlogvar_assign_value(t45, t4, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    memset(t4, 0, 8);
    t16 = (t4 + 4);
    t22 = (t9 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t22);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t16) = t15;
    t23 = (t0 + 4968);
    xsi_vlogvar_assign_value(t23, t4, 0, 0, 1);
    goto LAB68;

LAB60:    xsi_set_current_line(145, ng0);

LAB246:    xsi_set_current_line(146, ng0);
    t6 = (t0 + 2808U);
    t9 = *((char **)t6);
    t6 = (t0 + 4328);
    xsi_vlogvar_assign_value(t6, t9, 0, 0, 32);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4488);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 5128);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 4648);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t16 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t22 = (t9 + 4);
    t23 = (t16 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t16);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t22);
    t14 = *((unsigned int *)t23);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t24 = (t17 & t21);
    if (t24 != 0)
        goto LAB250;

LAB247:    if (t20 != 0)
        goto LAB249;

LAB248:    *((unsigned int *)t8) = 1;

LAB250:    memset(t5, 0, 8);
    t28 = (t8 + 4);
    t25 = *((unsigned int *)t28);
    t26 = (~(t25));
    t29 = *((unsigned int *)t8);
    t30 = (t29 & t26);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB251;

LAB252:    if (*((unsigned int *)t28) != 0)
        goto LAB253;

LAB254:    t36 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t37 = *((unsigned int *)t36);
    t38 = (t32 || t37);
    if (t38 > 0)
        goto LAB255;

LAB256:    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB257;

LAB258:    if (*((unsigned int *)t36) > 0)
        goto LAB259;

LAB260:    if (*((unsigned int *)t5) > 0)
        goto LAB261;

LAB262:    memcpy(t4, t44, 8);

LAB263:    t45 = (t0 + 4808);
    xsi_vlogvar_assign_value(t45, t4, 0, 0, 1);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    memset(t4, 0, 8);
    t16 = (t4 + 4);
    t22 = (t9 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t22);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t16) = t15;
    t23 = (t0 + 4968);
    xsi_vlogvar_assign_value(t23, t4, 0, 0, 1);
    goto LAB68;

LAB62:    xsi_set_current_line(154, ng0);

LAB264:    xsi_set_current_line(155, ng0);
    t6 = (t0 + 2968U);
    t9 = *((char **)t6);
    t6 = ((char*)((ng13)));
    xsi_vlog_unsigned_equal(t85, 64, t9, 64, t6, 32);
    memset(t5, 0, 8);
    t16 = (t85 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (~(t10));
    t12 = *((unsigned int *)t85);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB265;

LAB266:    if (*((unsigned int *)t16) != 0)
        goto LAB267;

LAB268:    t23 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t23);
    t18 = (t15 || t17);
    if (t18 > 0)
        goto LAB269;

LAB270:    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t23);
    t24 = (t20 || t21);
    if (t24 > 0)
        goto LAB271;

LAB272:    if (*((unsigned int *)t23) > 0)
        goto LAB273;

LAB274:    if (*((unsigned int *)t5) > 0)
        goto LAB275;

LAB276:    memcpy(t4, t28, 8);

LAB277:    t33 = (t0 + 4808);
    xsi_vlogvar_assign_value(t33, t4, 0, 0, 1);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 4808);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t16 = ((char*)((ng14)));
    memset(t8, 0, 8);
    t22 = (t9 + 4);
    t23 = (t16 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t16);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t22);
    t14 = *((unsigned int *)t23);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t24 = (t17 & t21);
    if (t24 != 0)
        goto LAB281;

LAB278:    if (t20 != 0)
        goto LAB280;

LAB279:    *((unsigned int *)t8) = 1;

LAB281:    memset(t5, 0, 8);
    t28 = (t8 + 4);
    t25 = *((unsigned int *)t28);
    t26 = (~(t25));
    t29 = *((unsigned int *)t8);
    t30 = (t29 & t26);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB282;

LAB283:    if (*((unsigned int *)t28) != 0)
        goto LAB284;

LAB285:    t36 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t37 = *((unsigned int *)t36);
    t38 = (t32 || t37);
    if (t38 > 0)
        goto LAB286;

LAB287:    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB288;

LAB289:    if (*((unsigned int *)t36) > 0)
        goto LAB290;

LAB291:    if (*((unsigned int *)t5) > 0)
        goto LAB292;

LAB293:    memcpy(t4, t70, 8);

LAB294:    t74 = (t0 + 4968);
    xsi_vlogvar_assign_value(t74, t4, 0, 0, 1);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 4968);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    memset(t4, 0, 8);
    t16 = (t9 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB298;

LAB299:    if (*((unsigned int *)t16) != 0)
        goto LAB300;

LAB301:    t23 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t23);
    t18 = (t15 || t17);
    if (t18 > 0)
        goto LAB302;

LAB303:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t23);
    t24 = (t20 || t21);
    if (t24 > 0)
        goto LAB304;

LAB305:    if (*((unsigned int *)t23) > 0)
        goto LAB306;

LAB307:    if (*((unsigned int *)t4) > 0)
        goto LAB308;

LAB309:    memcpy(t85, t33, 16);

LAB310:    t27 = (t0 + 4328);
    xsi_vlogvar_assign_value(t27, t85, 0, 0, 32);
    t36 = (t0 + 4488);
    xsi_vlogvar_assign_value(t36, t85, 32, 0, 32);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 5128);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 4648);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    goto LAB68;

LAB64:    xsi_set_current_line(163, ng0);

LAB311:    xsi_set_current_line(164, ng0);
    t6 = (t0 + 3288U);
    t9 = *((char **)t6);
    t6 = (t0 + 4328);
    xsi_vlogvar_assign_value(t6, t9, 0, 0, 32);
    t16 = (t0 + 4488);
    xsi_vlogvar_assign_value(t16, t9, 32, 0, 32);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 5128);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 4648);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t16 = (t0 + 4488);
    t22 = (t16 + 56U);
    t23 = *((char **)t22);
    xsi_vlogtype_concat(t85, 64, 64, 2U, t23, 32, t9, 32);
    t27 = ((char*)((ng13)));
    xsi_vlog_unsigned_equal(t86, 64, t85, 64, t27, 32);
    memset(t5, 0, 8);
    t28 = (t86 + 4);
    t10 = *((unsigned int *)t28);
    t11 = (~(t10));
    t12 = *((unsigned int *)t86);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB312;

LAB313:    if (*((unsigned int *)t28) != 0)
        goto LAB314;

LAB315:    t36 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t36);
    t18 = (t15 || t17);
    if (t18 > 0)
        goto LAB316;

LAB317:    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t36);
    t24 = (t20 || t21);
    if (t24 > 0)
        goto LAB318;

LAB319:    if (*((unsigned int *)t36) > 0)
        goto LAB320;

LAB321:    if (*((unsigned int *)t5) > 0)
        goto LAB322;

LAB323:    memcpy(t4, t44, 8);

LAB324:    t45 = (t0 + 4808);
    xsi_vlogvar_assign_value(t45, t4, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4968);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    goto LAB68;

LAB70:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t27);
    *((unsigned int *)t4) = (t19 | t20);
    goto LAB72;

LAB75:    t27 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB76;

LAB77:    *((unsigned int *)t5) = 1;
    goto LAB80;

LAB79:    t33 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB80;

LAB81:    t39 = ((char*)((ng3)));
    goto LAB82;

LAB83:    t44 = ((char*)((ng1)));
    goto LAB84;

LAB85:    xsi_vlog_unsigned_bit_combine(t4, 1, t39, 1, t44, 1);
    goto LAB89;

LAB87:    memcpy(t4, t39, 8);
    goto LAB89;

LAB91:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t23);
    *((unsigned int *)t4) = (t19 | t20);
    t27 = (t9 + 4);
    t28 = (t16 + 4);
    t21 = *((unsigned int *)t9);
    t24 = (~(t21));
    t25 = *((unsigned int *)t27);
    t26 = (~(t25));
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = *((unsigned int *)t28);
    t32 = (~(t31));
    t35 = (t24 & t26);
    t46 = (t30 & t32);
    t37 = (~(t35));
    t38 = (~(t46));
    t40 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t40 & t37);
    t41 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t41 & t38);
    t42 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t42 & t37);
    t43 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t43 & t38);
    goto LAB93;

LAB96:    t27 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB97;

LAB98:    *((unsigned int *)t5) = 1;
    goto LAB101;

LAB100:    t33 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB101;

LAB102:    t39 = ((char*)((ng3)));
    goto LAB103;

LAB104:    t44 = ((char*)((ng1)));
    goto LAB105;

LAB106:    xsi_vlog_unsigned_bit_combine(t4, 1, t39, 1, t44, 1);
    goto LAB110;

LAB108:    memcpy(t4, t39, 8);
    goto LAB110;

LAB114:    t27 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB115;

LAB116:    *((unsigned int *)t5) = 1;
    goto LAB119;

LAB118:    t33 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB119;

LAB120:    t39 = ((char*)((ng3)));
    goto LAB121;

LAB122:    t44 = ((char*)((ng1)));
    goto LAB123;

LAB124:    xsi_vlog_unsigned_bit_combine(t4, 1, t39, 1, t44, 1);
    goto LAB128;

LAB126:    memcpy(t4, t39, 8);
    goto LAB128;

LAB130:    t29 = *((unsigned int *)t5);
    t30 = *((unsigned int *)t39);
    *((unsigned int *)t5) = (t29 | t30);
    goto LAB132;

LAB133:    t58 = *((unsigned int *)t48);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t48) = (t58 | t59);
    goto LAB135;

LAB136:    t82 = *((unsigned int *)t70);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t70) = (t82 | t83);
    goto LAB138;

LAB141:    t27 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB142;

LAB143:    *((unsigned int *)t5) = 1;
    goto LAB146;

LAB145:    t33 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB146;

LAB147:    t39 = ((char*)((ng3)));
    goto LAB148;

LAB149:    t44 = ((char*)((ng1)));
    goto LAB150;

LAB151:    xsi_vlog_unsigned_bit_combine(t4, 1, t39, 1, t44, 1);
    goto LAB155;

LAB153:    memcpy(t4, t39, 8);
    goto LAB155;

LAB159:    t27 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB160;

LAB161:    *((unsigned int *)t5) = 1;
    goto LAB164;

LAB163:    t33 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB164;

LAB165:    t39 = ((char*)((ng3)));
    goto LAB166;

LAB167:    t44 = ((char*)((ng1)));
    goto LAB168;

LAB169:    xsi_vlog_unsigned_bit_combine(t4, 1, t39, 1, t44, 1);
    goto LAB173;

LAB171:    memcpy(t4, t39, 8);
    goto LAB173;

LAB177:    t27 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB178;

LAB179:    *((unsigned int *)t5) = 1;
    goto LAB182;

LAB181:    t33 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB182;

LAB183:    t39 = ((char*)((ng3)));
    goto LAB184;

LAB185:    t44 = ((char*)((ng1)));
    goto LAB186;

LAB187:    xsi_vlog_unsigned_bit_combine(t4, 1, t39, 1, t44, 1);
    goto LAB191;

LAB189:    memcpy(t4, t39, 8);
    goto LAB191;

LAB195:    t27 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB196;

LAB197:    *((unsigned int *)t5) = 1;
    goto LAB200;

LAB199:    t33 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB200;

LAB201:    t39 = ((char*)((ng3)));
    goto LAB202;

LAB203:    t44 = ((char*)((ng1)));
    goto LAB204;

LAB205:    xsi_vlog_unsigned_bit_combine(t4, 1, t39, 1, t44, 1);
    goto LAB209;

LAB207:    memcpy(t4, t39, 8);
    goto LAB209;

LAB213:    t27 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB214;

LAB215:    *((unsigned int *)t5) = 1;
    goto LAB218;

LAB217:    t33 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB218;

LAB219:    t39 = ((char*)((ng3)));
    goto LAB220;

LAB221:    t44 = ((char*)((ng1)));
    goto LAB222;

LAB223:    xsi_vlog_unsigned_bit_combine(t4, 1, t39, 1, t44, 1);
    goto LAB227;

LAB225:    memcpy(t4, t39, 8);
    goto LAB227;

LAB231:    t27 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB232;

LAB233:    *((unsigned int *)t5) = 1;
    goto LAB236;

LAB235:    t33 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB236;

LAB237:    t39 = ((char*)((ng3)));
    goto LAB238;

LAB239:    t44 = ((char*)((ng1)));
    goto LAB240;

LAB241:    xsi_vlog_unsigned_bit_combine(t4, 1, t39, 1, t44, 1);
    goto LAB245;

LAB243:    memcpy(t4, t39, 8);
    goto LAB245;

LAB249:    t27 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB250;

LAB251:    *((unsigned int *)t5) = 1;
    goto LAB254;

LAB253:    t33 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB254;

LAB255:    t39 = ((char*)((ng3)));
    goto LAB256;

LAB257:    t44 = ((char*)((ng1)));
    goto LAB258;

LAB259:    xsi_vlog_unsigned_bit_combine(t4, 1, t39, 1, t44, 1);
    goto LAB263;

LAB261:    memcpy(t4, t39, 8);
    goto LAB263;

LAB265:    *((unsigned int *)t5) = 1;
    goto LAB268;

LAB267:    t22 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB268;

LAB269:    t27 = ((char*)((ng3)));
    goto LAB270;

LAB271:    t28 = ((char*)((ng1)));
    goto LAB272;

LAB273:    xsi_vlog_unsigned_bit_combine(t4, 1, t27, 1, t28, 1);
    goto LAB277;

LAB275:    memcpy(t4, t27, 8);
    goto LAB277;

LAB280:    t27 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB281;

LAB282:    *((unsigned int *)t5) = 1;
    goto LAB285;

LAB284:    t33 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB285;

LAB286:    t39 = ((char*)((ng1)));
    goto LAB287;

LAB288:    t44 = (t0 + 1208U);
    t45 = *((char **)t44);
    memset(t48, 0, 8);
    t44 = (t48 + 4);
    t47 = (t45 + 4);
    t49 = *((unsigned int *)t45);
    t53 = (t49 >> 31);
    t54 = (t53 & 1);
    *((unsigned int *)t48) = t54;
    t55 = *((unsigned int *)t47);
    t56 = (t55 >> 31);
    t57 = (t56 & 1);
    *((unsigned int *)t44) = t57;
    t50 = (t0 + 1368U);
    t51 = *((char **)t50);
    memset(t62, 0, 8);
    t50 = (t62 + 4);
    t52 = (t51 + 4);
    t58 = *((unsigned int *)t51);
    t59 = (t58 >> 31);
    t64 = (t59 & 1);
    *((unsigned int *)t62) = t64;
    t65 = *((unsigned int *)t52);
    t66 = (t65 >> 31);
    t67 = (t66 & 1);
    *((unsigned int *)t50) = t67;
    t68 = *((unsigned int *)t48);
    t69 = *((unsigned int *)t62);
    t71 = (t68 ^ t69);
    *((unsigned int *)t70) = t71;
    t60 = (t48 + 4);
    t61 = (t62 + 4);
    t63 = (t70 + 4);
    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t61);
    t77 = (t72 | t73);
    *((unsigned int *)t63) = t77;
    t78 = *((unsigned int *)t63);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB295;

LAB296:
LAB297:    goto LAB289;

LAB290:    xsi_vlog_unsigned_bit_combine(t4, 1, t39, 1, t70, 1);
    goto LAB294;

LAB292:    memcpy(t4, t39, 8);
    goto LAB294;

LAB295:    t80 = *((unsigned int *)t70);
    t81 = *((unsigned int *)t63);
    *((unsigned int *)t70) = (t80 | t81);
    goto LAB297;

LAB298:    *((unsigned int *)t4) = 1;
    goto LAB301;

LAB300:    t22 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB301;

LAB302:    t27 = (t0 + 3128U);
    t28 = *((char **)t27);
    goto LAB303;

LAB304:    t27 = (t0 + 2968U);
    t33 = *((char **)t27);
    goto LAB305;

LAB306:    xsi_vlog_unsigned_bit_combine(t85, 64, t28, 64, t33, 64);
    goto LAB310;

LAB308:    memcpy(t85, t28, 16);
    goto LAB310;

LAB312:    *((unsigned int *)t5) = 1;
    goto LAB315;

LAB314:    t33 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB315;

LAB316:    t39 = ((char*)((ng3)));
    goto LAB317;

LAB318:    t44 = ((char*)((ng1)));
    goto LAB319;

LAB320:    xsi_vlog_unsigned_bit_combine(t4, 1, t39, 1, t44, 1);
    goto LAB324;

LAB322:    memcpy(t4, t39, 8);
    goto LAB324;

LAB328:    xsi_set_current_line(182, ng0);

LAB335:    xsi_set_current_line(183, ng0);
    t16 = (t0 + 2328U);
    t22 = *((char **)t16);
    t16 = (t0 + 4328);
    xsi_vlogvar_assign_value(t16, t22, 0, 0, 32);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 1848U);
    t6 = *((char **)t2);
    t2 = (t0 + 4648);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 1);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4488);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 4648);
    t6 = (t2 + 56U);
    t16 = *((char **)t6);
    t22 = (t0 + 4328);
    t23 = (t22 + 56U);
    t27 = *((char **)t23);
    memset(t4, 0, 8);
    t28 = (t4 + 4);
    t33 = (t27 + 4);
    t10 = *((unsigned int *)t27);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t33);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t28) = t15;
    t17 = *((unsigned int *)t16);
    t18 = *((unsigned int *)t4);
    t19 = (t17 ^ t18);
    *((unsigned int *)t5) = t19;
    t36 = (t16 + 4);
    t39 = (t4 + 4);
    t44 = (t5 + 4);
    t20 = *((unsigned int *)t36);
    t21 = *((unsigned int *)t39);
    t24 = (t20 | t21);
    *((unsigned int *)t44) = t24;
    t25 = *((unsigned int *)t44);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB336;

LAB337:
LAB338:    t45 = (t0 + 1208U);
    t47 = *((char **)t45);
    memset(t8, 0, 8);
    t45 = (t8 + 4);
    t50 = (t47 + 4);
    t31 = *((unsigned int *)t47);
    t32 = (t31 >> 31);
    t37 = (t32 & 1);
    *((unsigned int *)t8) = t37;
    t38 = *((unsigned int *)t50);
    t40 = (t38 >> 31);
    t41 = (t40 & 1);
    *((unsigned int *)t45) = t41;
    t42 = *((unsigned int *)t5);
    t43 = *((unsigned int *)t8);
    t49 = (t42 ^ t43);
    *((unsigned int *)t48) = t49;
    t51 = (t5 + 4);
    t52 = (t8 + 4);
    t60 = (t48 + 4);
    t53 = *((unsigned int *)t51);
    t54 = *((unsigned int *)t52);
    t55 = (t53 | t54);
    *((unsigned int *)t60) = t55;
    t56 = *((unsigned int *)t60);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB339;

LAB340:
LAB341:    t61 = (t0 + 1368U);
    t63 = *((char **)t61);
    memset(t62, 0, 8);
    t61 = (t62 + 4);
    t74 = (t63 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (t64 >> 31);
    t66 = (t65 & 1);
    *((unsigned int *)t62) = t66;
    t67 = *((unsigned int *)t74);
    t68 = (t67 >> 31);
    t69 = (t68 & 1);
    *((unsigned int *)t61) = t69;
    t71 = *((unsigned int *)t48);
    t72 = *((unsigned int *)t62);
    t73 = (t71 ^ t72);
    *((unsigned int *)t70) = t73;
    t75 = (t48 + 4);
    t76 = (t62 + 4);
    t84 = (t70 + 4);
    t77 = *((unsigned int *)t75);
    t78 = *((unsigned int *)t76);
    t79 = (t77 | t78);
    *((unsigned int *)t84) = t79;
    t80 = *((unsigned int *)t84);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB342;

LAB343:
LAB344:    t87 = (t0 + 5128);
    xsi_vlogvar_assign_value(t87, t70, 0, 0, 1);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t16 = *((char **)t6);
    t22 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t23 = (t16 + 4);
    t27 = (t22 + 4);
    t10 = *((unsigned int *)t16);
    t11 = *((unsigned int *)t22);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t23);
    t14 = *((unsigned int *)t27);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t23);
    t19 = *((unsigned int *)t27);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t24 = (t17 & t21);
    if (t24 != 0)
        goto LAB348;

LAB345:    if (t20 != 0)
        goto LAB347;

LAB346:    *((unsigned int *)t8) = 1;

LAB348:    memset(t5, 0, 8);
    t33 = (t8 + 4);
    t25 = *((unsigned int *)t33);
    t26 = (~(t25));
    t29 = *((unsigned int *)t8);
    t30 = (t29 & t26);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB349;

LAB350:    if (*((unsigned int *)t33) != 0)
        goto LAB351;

LAB352:    t39 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t37 = *((unsigned int *)t39);
    t38 = (t32 || t37);
    if (t38 > 0)
        goto LAB353;

LAB354:    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t39);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB355;

LAB356:    if (*((unsigned int *)t39) > 0)
        goto LAB357;

LAB358:    if (*((unsigned int *)t5) > 0)
        goto LAB359;

LAB360:    memcpy(t4, t45, 8);

LAB361:    t47 = (t0 + 4808);
    xsi_vlogvar_assign_value(t47, t4, 0, 0, 1);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t16 = *((char **)t6);
    memset(t4, 0, 8);
    t22 = (t4 + 4);
    t23 = (t16 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t23);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t22) = t15;
    t27 = (t0 + 4968);
    xsi_vlogvar_assign_value(t27, t4, 0, 0, 1);
    goto LAB334;

LAB330:    xsi_set_current_line(190, ng0);

LAB362:    xsi_set_current_line(191, ng0);
    t6 = (t0 + 3608U);
    t16 = *((char **)t6);
    t6 = (t0 + 4328);
    xsi_vlogvar_assign_value(t6, t16, 0, 0, 32);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 4488);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 5128);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 4648);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t16 = *((char **)t6);
    t22 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t23 = (t16 + 4);
    t27 = (t22 + 4);
    t10 = *((unsigned int *)t16);
    t11 = *((unsigned int *)t22);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t23);
    t14 = *((unsigned int *)t27);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t23);
    t19 = *((unsigned int *)t27);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t24 = (t17 & t21);
    if (t24 != 0)
        goto LAB366;

LAB363:    if (t20 != 0)
        goto LAB365;

LAB364:    *((unsigned int *)t8) = 1;

LAB366:    memset(t5, 0, 8);
    t33 = (t8 + 4);
    t25 = *((unsigned int *)t33);
    t26 = (~(t25));
    t29 = *((unsigned int *)t8);
    t30 = (t29 & t26);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB367;

LAB368:    if (*((unsigned int *)t33) != 0)
        goto LAB369;

LAB370:    t39 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t37 = *((unsigned int *)t39);
    t38 = (t32 || t37);
    if (t38 > 0)
        goto LAB371;

LAB372:    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t39);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB373;

LAB374:    if (*((unsigned int *)t39) > 0)
        goto LAB375;

LAB376:    if (*((unsigned int *)t5) > 0)
        goto LAB377;

LAB378:    memcpy(t4, t45, 8);

LAB379:    t47 = (t0 + 4808);
    xsi_vlogvar_assign_value(t47, t4, 0, 0, 1);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t16 = *((char **)t6);
    memset(t4, 0, 8);
    t22 = (t4 + 4);
    t23 = (t16 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t23);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t22) = t15;
    t27 = (t0 + 4968);
    xsi_vlogvar_assign_value(t27, t4, 0, 0, 1);
    goto LAB334;

LAB336:    t29 = *((unsigned int *)t5);
    t30 = *((unsigned int *)t44);
    *((unsigned int *)t5) = (t29 | t30);
    goto LAB338;

LAB339:    t58 = *((unsigned int *)t48);
    t59 = *((unsigned int *)t60);
    *((unsigned int *)t48) = (t58 | t59);
    goto LAB341;

LAB342:    t82 = *((unsigned int *)t70);
    t83 = *((unsigned int *)t84);
    *((unsigned int *)t70) = (t82 | t83);
    goto LAB344;

LAB347:    t28 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB348;

LAB349:    *((unsigned int *)t5) = 1;
    goto LAB352;

LAB351:    t36 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB352;

LAB353:    t44 = ((char*)((ng3)));
    goto LAB354;

LAB355:    t45 = ((char*)((ng1)));
    goto LAB356;

LAB357:    xsi_vlog_unsigned_bit_combine(t4, 1, t44, 1, t45, 1);
    goto LAB361;

LAB359:    memcpy(t4, t44, 8);
    goto LAB361;

LAB365:    t28 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB366;

LAB367:    *((unsigned int *)t5) = 1;
    goto LAB370;

LAB369:    t36 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB370;

LAB371:    t44 = ((char*)((ng3)));
    goto LAB372;

LAB373:    t45 = ((char*)((ng1)));
    goto LAB374;

LAB375:    xsi_vlog_unsigned_bit_combine(t4, 1, t44, 1, t45, 1);
    goto LAB379;

LAB377:    memcpy(t4, t44, 8);
    goto LAB379;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 8240);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 8304);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00000000002985451138_0886308060_init()
{
	static char *pe[] = {(void *)Cont_45_0,(void *)Cont_46_1,(void *)Always_56_2,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_00000000002985451138_0886308060", "isim/KGP_RISC_tb_isim_beh.exe.sim/work/m_00000000002985451138_0886308060.didat");
	xsi_register_executes(pe);
}
