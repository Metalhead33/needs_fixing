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
public:
    material *a_mat;
    element *a_elem;
    a_type *a_wearer;
    void a_set_mat(string w_setmat) {
        if (w_setmat == a_none.GetAlias())
            a_mat = &a_none;
        if (w_setmat == a_wood.GetAlias())
            a_mat = &a_wood;
        if (w_setmat == a_iron.GetAlias())
            a_mat = &a_iron;
        if (w_setmat == a_steel.GetAlias())
            a_mat = &a_steel;
        if (w_setmat == a_dwarven.GetAlias())
            a_mat = &a_dwarven;
        if (w_setmat == a_leather.GetAlias())
            a_mat = &a_leather;
        ; }
    void a_set_elem(string w_setelem) {
        if (w_setelem == m_none.GetAlias())
            a_elem = &m_none;
        if (w_setelem == m_fire.GetAlias())
            a_elem = &m_fire;
        if (w_setelem == m_water.GetAlias())
            a_elem = &m_water;
        if (w_setelem == m_ice.GetAlias())
            a_elem = &m_ice;
        if (w_setelem == m_air.GetAlias())
            a_elem = &m_air;
        if (w_setelem == m_thunder.GetAlias())
            a_elem = &m_thunder;
        if (w_setelem == m_light.GetAlias())
            a_elem = &m_light;
        if (w_setelem == m_dark.GetAlias())
            a_elem = &m_dark;
        ; }
    void a_set_type(string w_setelem) {
        if (w_setelem == cloth.GetAlias())
            a_wearer = &cloth;
        if (w_setelem == light_armour.GetAlias())
            a_wearer = &light_armour;
        if (w_setelem == medium_armour.GetAlias())
            a_wearer = &medium_armour;
        if (w_setelem == heavy_armour.GetAlias())
            a_wearer = &heavy_armour;
        ; }
    armour(string a_setname, int a_setvalue, int a_setcond, int a_setcost, string a_setmat, string a_setelem, string a_settype)
        {
        a_display_name = a_setname;
        a_defense = a_setvalue;
        a_cond = a_setcond;
        a_cost = a_setcost;
        a_set_mat(a_setmat);
        a_set_elem(a_setelem);
        a_set_type(a_settype);
        }
    armour()
        {
        string a_setname = "N\\A";
        int a_setvalue = 0;
        int a_setcond = 0;
        int a_setcost = 0;
        string a_setmat = "a_none";
        string a_setelem = "m_none";
        string a_settype = "cloth";
        }
    static armour GetNull()
    {
    armour *res = new armour("N\\A",0,0,0,"a_none","m_none","cloth");
    return *res;
    };
    void SetA_display_name(string a_setname) { a_display_name = a_setname; }
    void SetA_defense(int a_setvalue) { a_defense = a_setvalue; }
    void SetA_cond(int a_setcond) { a_cond = a_setcond; }
    void SetA_cost(int a_setcost) { a_cost = a_setcost; }
    void SetA_mat(material *a_setmat) { a_mat = a_setmat; }
    void SetA_elem(element *a_setelem) { a_elem = a_setelem; }
    void SetA_wearer(a_type *a_settype) { a_wearer = a_settype; }
    string GetA_display_name() { return a_display_name; }
    float GetA_defense() { return a_defense; }
    float GetA_cond() { return a_cond; }
    float GetA_cost() { return a_cost; }
};
armour a_dummy("N\\A",0,0,0,"a_none","m_none","cloth");
#endif
