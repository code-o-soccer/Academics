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
    work_m_00000000003092811518_0443808329_init();
    work_m_00000000003987688035_1733832700_init();
    work_m_00000000001149624628_0557941046_init();
    work_m_00000000004228988069_2352116331_init();
    work_m_00000000001537500515_1648104263_init();
    work_m_00000000002948183680_3037777339_init();
    work_m_00000000003096057508_2490172768_init();
    work_m_00000000001497117878_3873618783_init();
    work_m_00000000000140698907_3140140613_init();
    work_m_00000000000416051517_4033376979_init();
    work_m_00000000001133516636_1323274903_init();
    work_m_00000000004282793666_2759158778_init();
    work_m_00000000004282793666_3841856305_init();
    work_m_00000000004282793666_3980943130_init();
    work_m_00000000004282793666_0069990959_init();
    work_m_00000000004282793666_2636295061_init();
    work_m_00000000002817707538_2940210399_init();
    work_m_00000000001497575087_3961895978_init();
    work_m_00000000001884317714_3185537345_init();
    work_m_00000000001291630288_0886308060_init();
    work_m_00000000003457009331_3692911009_init();
    work_m_00000000001715937055_2813788857_init();
    work_m_00000000002845029221_3510135451_init();
    work_m_00000000002746374490_3657110840_init();
    work_m_00000000002047498008_2303047399_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_2303047399");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
