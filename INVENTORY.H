#ifndef _INVENTORY_INCLUDED_
#define _INVENTORY_INCLUDED_
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>
#include "STRUCTURE.h"
#include "WEAPON.h"
#include "Armour.h"

class inventory{
public:
    wpn *char_wpn[eq_wpn2];
    armour *char_armour[eq_neck];
    inventory(){
        char_wpn[eq_wpn1] = &w_dummy;
        char_wpn[eq_wpn2] = &w_dummy;
        char_armour[eq_shld] = &a_dummy;
        char_armour[eq_hlm] = &a_dummy;
        char_armour[eq_clth1] = &a_dummy;
        char_armour[eq_clth2] = &a_dummy;
        char_armour[eq_ndrwr] = &a_dummy;
        char_armour[eq_arm_tors] = &a_dummy;
        char_armour[eq_arm_lgs] = &a_dummy;
        char_armour[eq_boots] = &a_dummy;
        char_armour[eq_ggntlet] = &a_dummy;
        char_armour[eq_clk] = &a_dummy;
        char_armour[eq_arrow] = &a_dummy;
        char_armour[eq_neck] = &a_dummy;
        };
        ~inventory(){
        delete[] char_wpn[eq_wpn1];
        delete[] char_wpn[eq_wpn2];
        delete[] char_armour[eq_shld];
        delete[] char_armour[eq_hlm];
        delete[] char_armour[eq_clth1];
        delete[] char_armour[eq_clth2];
        delete[] char_armour[eq_ndrwr];
        delete[] char_armour[eq_arm_tors];
        delete[] char_armour[eq_arm_lgs];
        delete[] char_armour[eq_boots];
        delete[] char_armour[eq_ggntlet];
        delete[] char_armour[eq_clk];
        delete[] char_armour[eq_arrow];
        delete[] char_armour[eq_neck];}
};
#endif
