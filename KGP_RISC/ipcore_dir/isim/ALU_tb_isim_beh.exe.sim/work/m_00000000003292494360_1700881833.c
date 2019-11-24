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
static const char *ng0 = "D:/My Study Folder/3rd Year/Sem 5/COA/Lab/Assignment 10/KGP_RISC/ipcore_dir/twos_complement_64.v";
static unsigned int ng1[] = {1U, 0U, 0U, 0U};



static void Cont_27_0(char *t0)
{
    char t3[16];
    char t5[16];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    xsi_vlogtype_unsigned_bit_neg(t3, 64, t4, 64);
    t2 = ((char*)((ng1)));
    xsi_vlog_unsigned_add(t5, 64, t3, 64, t2, 64);
    t6 = (t0 + 2928);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_bit_copy(t10, 0, t5, 0, 64);
    xsi_driver_vfirst_trans(t6, 0, 63);
    t11 = (t0 + 2848);
    *((int *)t11) = 1;

LAB1:    return;
}


extern void work_m_00000000003292494360_1700881833_init()
{
	static char *pe[] = {(void *)Cont_27_0};
	xsi_register_didat("work_m_00000000003292494360_1700881833", "isim/ALU_tb_isim_beh.exe.sim/work/m_00000000003292494360_1700881833.didat");
	xsi_register_executes(pe);
}
