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
    material w_mat;
    element w_elem;
public:
    w_type *w_usage;
    w_type2 *w_kind;
    wpn(string w_setname, int w_setmin, int w_setmax, int w_setcond, int w_setcost, material w_setmat, element w_setelem, w_type *w_settype, w_type2 *w_setkind)
        {
        w_display_name = w_setname;
        w_minatk = w_setmin;
        w_maxatk = w_setmax;
        w_cond = w_setcond;
        w_cost = w_setcost;
        w_mat = w_setmat;
        w_elem = w_setelem;
        w_usage = w_settype;
        w_kind = w_setkind;
        };
    wpn()
        {
        string w_setname = "N\\A";
        int w_setmin = 0;
        int w_setmax = 0;
        int w_setcond = 0;
        int w_setcost = 0;
        material w_setmat = a_none;
        element w_setelem = m_none;
        w_type *w_settype = &blunt;
        w_type2 *w_kind = &crude;
        };
    static wpn GetNull()
    {
        wpn *res = new wpn("N\\A",0, 0, 0, 0, a_none, m_none, &blunt, &crude);
        return *res;
     };
    void w_set_name(string w_setname) {w_display_name = w_setname; }
    void w_set_min(int w_setmin) {w_minatk = w_setmin; }
    void w_set_max(int w_setmax) {w_maxatk = w_setmax; }
    void w_set_cond(int w_setcond) {w_cond = w_setcond; }
    void w_set_cost(int w_setcost) {w_cost = w_setcost; }
    void w_set_mat(material w_setmat) {w_mat = w_setmat; }
    void w_set_elem(element w_setelem) {w_elem = w_setelem; }
    void w_set_type(w_type *w_settype) {w_usage = w_settype; }
    void w_set_kind(w_type2 *w_setkind) {w_kind = w_setkind; }
    string GetW_display_name() { return w_display_name; }
    float GetW_minatk() { return w_minatk; }
    float GetW_maxatk() { return w_maxatk; }
    float GetW_cond() { return w_cond; }
    float GetW_cost() { return w_cost; }
    material GetW_mat() { return w_mat; }
    element GetW_elem() { return w_elem; }
};
wpn w_dummy("N\\A",0, 0, 0, 0, a_none, m_none, &blunt, &crude);
#endif
