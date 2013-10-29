#ifndef _STRUCTURE_INCLUDED_
#define _STRUCTURE_INCLUDED_
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>
using namespace std;

struct attrib
{
    signed int atr_str;
    signed int atr_int;
    signed int atr_wlp;
    signed int atr_agl;
    signed int atr_dxt;
    signed int atr_chr;
};

enum wpn_slot
{
    eq_wpn_dummy = 0,
    eq_wpn1,
    eq_wpn2
};

enum armour_slot
{
    eq_arm_dummy = 0,
    eq_shld,
    eq_hlm,
    eq_clth1,
    eq_clth2,
    eq_ndrwr,
    eq_arm_tors,
    eq_arm_lgs,
    eq_boots,
    eq_ggntlet,
    eq_clk,
    eq_arrow,
    eq_neck
};

enum sex
{
        male,
        female
};
#endif
