#ifndef _WEAPON_INCLUDED_
#define _WEAPON_INCLUDED_
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>
#include "Wtypes.h"

class wpn{
private:
    string w_display_name;
    float w_minatk;
    float w_maxatk;
    float w_cond;
    float w_cost;
public:
    material *w_mat;
    element *w_elem;
    w_type *w_usage;
    w_type2 *w_kind;
    void w_set_mat(string w_setmat) {
        if (w_setmat == a_none.GetAlias())
            w_mat = &a_none;
        if (w_setmat == a_wood.GetAlias())
            w_mat = &a_wood;
        if (w_setmat == a_iron.GetAlias())
            w_mat = &a_iron;
        if (w_setmat == a_steel.GetAlias())
            w_mat = &a_steel;
        if (w_setmat == a_dwarven.GetAlias())
            w_mat = &a_dwarven;
        if (w_setmat == a_leather.GetAlias())
            w_mat = &a_leather;
        ; }
    void w_set_elem(string w_setelem) {
        if (w_setelem == m_none.GetAlias())
            w_elem = &m_none;
        if (w_setelem == m_fire.GetAlias())
            w_elem = &m_fire;
        if (w_setelem == m_water.GetAlias())
            w_elem = &m_water;
        if (w_setelem == m_ice.GetAlias())
            w_elem = &m_ice;
        if (w_setelem == m_air.GetAlias())
            w_elem = &m_air;
        if (w_setelem == m_thunder.GetAlias())
            w_elem = &m_thunder;
        if (w_setelem == m_light.GetAlias())
            w_elem = &m_light;
        if (w_setelem == m_dark.GetAlias())
            w_elem = &m_dark;
        ; }
    void w_set_type(string w_settype) {
        if (w_settype == blunt.GetAlias())
            w_usage = &blunt;
        if (w_settype == ranged.GetAlias())
            w_usage = &ranged;
        if (w_settype == piercing.GetAlias())
            w_usage = &piercing;
        if (w_settype == slashing.GetAlias())
            w_usage = &slashing;
        ; }
    void w_set_kind(string w_setkind) {
        if (w_setkind == crude.GetAlias())
            w_kind = &crude;
        if (w_setkind == bow.GetAlias())
            w_kind = &bow;
        if (w_setkind == crossbow.GetAlias())
            w_kind = &crossbow;
        if (w_setkind == short_blade.GetAlias())
            w_kind = &short_blade;
        if (w_setkind == long_blade.GetAlias())
            w_kind = &long_blade;
        if (w_setkind == axe.GetAlias())
            w_kind = &axe;
        if (w_setkind == halberd.GetAlias())
            w_kind = &halberd;
        if (w_setkind == hammer.GetAlias())
            w_kind = &hammer;
        if (w_setkind == spear.GetAlias())
            w_kind = &spear;
        if (w_setkind == special.GetAlias())
            w_kind = &special;
        ; }
    wpn(string w_setname, int w_setmin, int w_setmax, int w_setcond, int w_setcost, string w_setmat, string w_setelem, string w_settype, string w_setkind)
        {
        w_display_name = w_setname;
        w_minatk = w_setmin;
        w_maxatk = w_setmax;
        w_cond = w_setcond;
        w_cost = w_setcost;
        w_set_mat(w_setmat);
        w_set_elem(w_setelem);
        w_set_type(w_settype);
        w_set_kind(w_setkind);
        };
    wpn()
        {
        string w_setname = "N\\A";
        int w_setmin = 0;
        int w_setmax = 0;
        int w_setcond = 0;
        int w_setcost = 0;
        string w_setmat = "a_none";
        string w_setelem = "m_none";
        string w_settype = "blunt";
        string w_setkind = "crude";
        };
    static wpn GetNull()
    {
        wpn *res = new wpn("N\\A",0, 0, 0, 0, "a_none", "m_none", "blunt", "crude");
        return *res;
     };
    void w_set_name(string w_setname) {w_display_name = w_setname; }
    void w_set_min(int w_setmin) {w_minatk = w_setmin; }
    void w_set_max(int w_setmax) {w_maxatk = w_setmax; }
    void w_set_cond(int w_setcond) {w_cond = w_setcond; }
    void w_set_cost(int w_setcost) {w_cost = w_setcost; }
    string GetW_display_name() { return w_display_name; }
    float GetW_minatk() { return w_minatk; }
    float GetW_maxatk() { return w_maxatk; }
    float GetW_cond() { return w_cond; }
    float GetW_cost() { return w_cost; }
};
wpn w_dummy("N\\A",0, 0, 0, 0, "a_none", "m_none", "blunt", "crude");
#endif
