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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    xilinxcorelib_ver_m_00000000001358910285_1837464205_init();
    xilinxcorelib_ver_m_00000000001687936702_3218604958_init();
    xilinxcorelib_ver_m_00000000000277421008_0409380349_init();
    xilinxcorelib_ver_m_00000000001603977570_3125986030_init();
    work_m_00000000000403262735_3389041166_init();
    work_m_00000000001871068011_0406098766_init();
    work_m_00000000002574846872_4087373549_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002574846872_4087373549");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
