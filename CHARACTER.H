#ifndef _CHARACTER_INCLUDED_
#define _CHARACTER_INCLUDED_
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>
#include "Race.h"
#include "Classes.h"
#include "INVENTORY.H"
using namespace std;

class chr{
private:
    string display_name;
    int lvl;
    attrib base_attrib;
    attrib mod_attrib;
    bool alive;
    string state[30];
    float mhp;
    float chp;
    float mmp;
    float cmp;
    float hp_lvl;
    float mp_lvl;
    float msta;
    float csta;
    float sta_lvl;
public:
    race1* race;
    race2* sec_race;
    char_class *class1;
    char_class *class2;
    prestige_class *pclass;
    inventory inv;
    chr(string setname, race1 *setrace, race2 *setrace2, char_class *setclass1, char_class *setclass2, prestige_class *setpclass, int setlvl)
    {
    display_name = setname;
    race = setrace;
    sec_race = setrace2;
    class1 = setclass1;
    class2 = setclass2;
    pclass = setpclass;
    lvl = setlvl;
    alive = true;
    mhp = 0.00;
    chp = 0.00;
    mmp = 0.00;
    cmp = 0.00;
    hp_lvl = 0.00;
    mp_lvl = 0.00;
    msta = 0.00;
    csta = 0.00;
    sta_lvl = 0.00;
    mod_attrib.atr_str = 0;
    mod_attrib.atr_int = 0;
    mod_attrib.atr_wlp = 0;
    mod_attrib.atr_agl = 0;
    mod_attrib.atr_dxt = 0;
    mod_attrib.atr_chr = 0;
    };
    string GetName() { return display_name; }
    void set_name(string set_name) { display_name = set_name; }
    void set_race1(race1 *setrace) { race = setrace;}
    void set_race2(race2 *setrace2) { sec_race = setrace2;}
    void set_class1(char_class *setclass1) { class1 = setclass1;}
    void set_class2(char_class *setclass2) { class2 = setclass2;}
    void set_pc(prestige_class *setpc){pclass = setpc;}
    int getlvl() { return lvl; }
    void set_lvl(int setlvl) { lvl = setlvl; }
    bool get_alive() { return alive; }
    void rfr_alive()
    {
    if (chp <= 0.00)
        alive = false;
    else
        alive = true; }
    float get_mhp() { return mhp; }
    void set_mhp(float setmhp) { mhp = setmhp; }
    float get_chp() { return chp; }
    void set_chp(float setchp) { chp = setchp; }
    float get_mmp() { return mmp; }
    void set_mmp(float setmmp) { mmp = setmmp; }
    float get_cmp() { return cmp; }
    void set_cmp(float setcmp) { cmp = setcmp; }
    float get_hp_lvl() { return hp_lvl; }
    void set_hp_lvl(float sethp_lvl) { hp_lvl = sethp_lvl; }
    float get_mp_lvl() { return mp_lvl; }
    void set_mp_lvl(float setmp_lvl) { mp_lvl = setmp_lvl; }
    float get_msta() { return msta; }
    void set_msta(float setmsta) { msta = setmsta; }
    float get_csta() { return csta; }
    void set_csta(float setcsta) { msta = setcsta; }
    float get_sta_lvl() { return sta_lvl; }
    void set_sta_lvl(float setsta_lvl) { sta_lvl = setsta_lvl; }
    void default_attributes()
    {
    base_attrib.atr_str = race->get_min_str();
    base_attrib.atr_int = race->get_min_int();
    base_attrib.atr_wlp = race->get_min_wlp();
    base_attrib.atr_agl = race->get_min_agl();
    base_attrib.atr_dxt = race->get_min_dxt();
    base_attrib.atr_chr = race->get_min_chr();
        };
    int get_bstr() { return base_attrib.atr_str; }
    int get_bint() { return base_attrib.atr_int; }
    int get_bwlp() { return base_attrib.atr_wlp; }
    int get_bagl() { return base_attrib.atr_agl; }
    int get_bdxt() { return base_attrib.atr_dxt; }
    int get_bchr() { return base_attrib.atr_chr; }
    int get_BaseStrength() { return (base_attrib.atr_str + sec_race->get_bon_str()); }
    int get_BaseIntelligence() { return (base_attrib.atr_int + sec_race->get_bon_int()); }
    int get_BaseWillpower() { return (base_attrib.atr_wlp + sec_race->get_bon_wlp()); }
    int get_BaseAgility() { return (base_attrib.atr_agl + sec_race->get_bon_agl()); }
    int get_BaseDexterity() { return (base_attrib.atr_dxt + sec_race->get_bon_dxt()); }
    int get_BaseCharisma() { return (base_attrib.atr_chr + sec_race->get_bon_chr()); }
    void set_bstr(int setstr) { base_attrib.atr_str = setstr; }
    void set_bint(int setint) { base_attrib.atr_int = setint; }
    void set_bwlp(int setwlp) { base_attrib.atr_wlp = setwlp; }
    void set_bagl(int setagl) { base_attrib.atr_agl = setagl; }
    void set_bdxt(int setdxt) { base_attrib.atr_dxt = setdxt; }
    void set_bchr(int setchr) { base_attrib.atr_chr = setchr; }
    void refresh_mstr() { mod_attrib.atr_str = (sec_race->get_bon_str()); }
    void refresh_mint() { mod_attrib.atr_int = (sec_race->get_bon_int()); }
    void refresh_mwlp() { mod_attrib.atr_wlp = (sec_race->get_bon_wlp()); }
    void refresh_magl() { mod_attrib.atr_agl = (sec_race->get_bon_agl()); }
    void refresh_mdxt() { mod_attrib.atr_dxt = (sec_race->get_bon_dxt()); }
    void refresh_mchr() { mod_attrib.atr_chr = (sec_race->get_bon_chr()); }
    int get_mstr() { refresh_mstr(); return mod_attrib.atr_str; }
    int get_mint() { refresh_mint(); return mod_attrib.atr_int; }
    int get_mwlp() { refresh_mwlp(); return mod_attrib.atr_wlp; }
    int get_magl() { refresh_magl(); return mod_attrib.atr_agl; }
    int get_mdxt() { refresh_mdxt(); return mod_attrib.atr_dxt; }
    int get_mchr() { refresh_mchr(); return mod_attrib.atr_chr; }
    void set_mstr(int setstr) { mod_attrib.atr_str = setstr; }
    void set_mint(int setint) { mod_attrib.atr_int = setint; }
    void set_mwlp(int setwlp) { mod_attrib.atr_wlp = setwlp; }
    void set_magl(int setagl) { mod_attrib.atr_agl = setagl; }
    void set_mdxt(int setdxt) { mod_attrib.atr_dxt = setdxt; }
    void set_mchr(int setchr) { mod_attrib.atr_chr = setchr; }
    void plus_mstr(int plusstr) { mod_attrib.atr_str = mod_attrib.atr_str + plusstr; }
    void plus_mint(int plusint) { mod_attrib.atr_int = mod_attrib.atr_int + plusint; }
    void plus_mwlp(int pluswlp) { mod_attrib.atr_wlp = mod_attrib.atr_wlp + pluswlp; }
    void plus_magl(int plusagl) { mod_attrib.atr_agl = mod_attrib.atr_agl + plusagl; }
    void plus_mdxt(int plusdxt) { mod_attrib.atr_dxt = mod_attrib.atr_dxt + plusdxt; }
    void plus_mchr(int pluschr) { mod_attrib.atr_chr = mod_attrib.atr_chr + pluschr; }
    void min_mstr(int minustr) { mod_attrib.atr_str = mod_attrib.atr_str + minustr; }
    void min_mint(int minuint) { mod_attrib.atr_int = mod_attrib.atr_int + minuint; }
    void min_mwlp(int minuwlp) { mod_attrib.atr_wlp = mod_attrib.atr_wlp + minuwlp; }
    void min_magl(int minuagl) { mod_attrib.atr_agl = mod_attrib.atr_agl + minuagl; }
    void min_mdxt(int minudxt) { mod_attrib.atr_dxt = mod_attrib.atr_dxt + minudxt; }
    void min_mchr(int minuchr) { mod_attrib.atr_chr = mod_attrib.atr_chr + minuchr; }
    int getSrength() { return (get_BaseStrength() + get_mstr());}
    int getIntelligence() { return (get_BaseIntelligence() + get_mint());}
    int getWillpower() { return (get_BaseWillpower() + get_mwlp()); }
    int getAgility() { return (get_BaseAgility() + get_magl());}
    int getDexterity() { return (get_BaseDexterity() + get_mdxt());}
    int getCharisma() { return (get_BaseCharisma() + get_mchr());}
    ~chr()
    {
        delete[] race;
        delete[] sec_race;
        delete[] class1;
        delete[] class2;
        };
};

void Promote(chr *character, prestige_class *classis)
{
    if (classis->get_free_variaton()){
    bool requirements_meet[2];
if (character->class1 == classis->required_class1)
    requirements_meet[0] = true;
else
    requirements_meet[0] = false;
if (character->class2 == classis->required_class1)
    requirements_meet[1] = true;
    else
        requirements_meet[1] = false;
if (requirements_meet[0]||requirements_meet[1])
        character->set_pc(classis);
        else
            cerr << character->GetName() << "is not qualified to be a. " << classis->get_pc_display_name() << "." << endl;}
        else{
    bool requirements_meet[2];
    bool requirements_meet2[2];
    bool arch_requirements_meet[2];
if (character->class1 == classis->required_class1)
    requirements_meet[0] = true;
else
    requirements_meet[0] = false;
if (character->class2 == classis->required_class1)
    requirements_meet[1] = true;
else
    requirements_meet[1] = false;
if (character->class1 == classis->required_class2)
    requirements_meet2[0] = true;
else
    requirements_meet2[0] = false;
if (character->class2 == classis->required_class2)
    requirements_meet2[1] = true;
else
    requirements_meet2[1] = false;
if (requirements_meet[0]||requirements_meet[1])
        arch_requirements_meet[0] = true;
        else
        arch_requirements_meet[0] = false;
if (requirements_meet2[0]||requirements_meet2[1])
        arch_requirements_meet[1] = true;
        else
        arch_requirements_meet[1] = false;
if (arch_requirements_meet[0]&&arch_requirements_meet[1])
        character->set_pc(classis);
        else
            cerr << character->GetName() << "is not qualified to be a. " << classis->get_pc_display_name() << "." << endl;;}}

#endif
