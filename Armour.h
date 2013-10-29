#ifndef _ARMOUR_INCLUDED_
#define _ARMOUR_INCLUDED_
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>
#include "Wtypes.h"

class armour{
private:
    string a_display_name;
    float a_defense;
    float a_cond;
    float a_cost;
    material a_mat;
    element a_elem;
    a_type a_wearer;
public:
    armour(string a_setname, int a_setvalue, int a_setcond, int a_setcost, material a_setmat, element a_setelem, a_type a_settype)
        {
        a_display_name = a_setname;
        a_defense = a_setvalue;
        a_cond = a_setcond;
        a_cost = a_setcost;
        a_mat = a_setmat;
        a_elem = a_setelem;
        a_wearer = a_settype;
        }
    armour()
        {
        string a_setname = "N\\A";
        int a_setvalue = 0;
        int a_setcond = 0;
        int a_setcost = 0;
        material a_setmat = a_none;
        element a_setelem = m_none;
        a_type a_settype = t_none;
        }
    static armour GetNull()
    {
    armour *res = new armour("N\\A",0,0,0,a_none,m_none,t_none);
    return *res;
    };
    void SetA_display_name(string a_setname) { a_display_name = a_setname; }
    void SetA_defense(int a_setvalue) { a_defense = a_setvalue; }
    void SetA_cond(int a_setcond) { a_cond = a_setcond; }
    void SetA_cost(int a_setcost) { a_cost = a_setcost; }
    void SetA_mat(material a_setmat) { a_mat = a_setmat; }
    void SetA_elem(element a_setelem) { a_elem = a_setelem; }
    void SetA_wearer(a_type a_settype) { a_wearer = a_settype; }
    string GetA_display_name() { return a_display_name; }
    float GetA_defense() { return a_defense; }
    float GetA_cond() { return a_cond; }
    float GetA_cost() { return a_cost; }
    material GetA_mat() { return a_mat; }
    element GetA_elem() { return a_elem; }
    a_type getA_wearer() { return a_wearer; }
};
armour a_dummy("N\\A",0,0,0,a_none,m_none,t_none);
#endif
