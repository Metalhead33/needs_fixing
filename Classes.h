#ifndef _CLASSES_INCLUDED_
#define _CLASSES_INCLUDED_
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>
#include "Wtypes.h"
using namespace std;

class char_class
{
private:
    string c_display_name;
    bool arcane_magic;
    bool cleric_magic;
    bool druid_magic;
    bool can_use[s_special];
    bool can_wear[s_heavy_armour];
    attrib requirement;
public:
    char_class(string set_name, bool setmagic1, bool setmagic2, bool setmagic3, int setr_atr_str, int setr_atr_int, int setr_atr_wlp, int setr_atr_agl, int setr_atr_dxt, int setr_atr_chr, bool can_use_crude, bool can_use_bow, bool can_use_crossbow, bool can_use_short_blade, bool can_use_long_blade, bool can_use_axe, bool can_use_halberd, bool can_use_hammer, bool can_use_spear, bool can_use_special , bool can_wear_t_none, bool can_wear_cloth, bool can_wear_light_armour, bool can_wear_medium_armour, bool can_wear_heavy_armour)
    {
        c_display_name = set_name;
        arcane_magic = setmagic1;
        cleric_magic = setmagic2;
        druid_magic = setmagic3;
        requirement.atr_str = setr_atr_str;
        requirement.atr_int = setr_atr_int;
        requirement.atr_wlp = setr_atr_wlp;
        requirement.atr_agl = setr_atr_agl;
        requirement.atr_dxt = setr_atr_dxt;
        requirement.atr_chr = setr_atr_chr;
        can_use[s_crude] = can_use_crude;
        can_use[s_bow] = can_use_bow;
        can_use[s_crossbow] = can_use_crossbow;
        can_use[s_short_blade] = can_use_short_blade;
        can_use[s_long_blade] = can_use_long_blade;
        can_use[s_axe] = can_use_axe;
        can_use[s_halberd] = can_use_halberd;
        can_use[s_hammer] = can_use_hammer;
        can_use[s_spear] = can_use_spear;
        can_use[s_special] = can_use_special;
        can_wear[s_cloth] = can_wear_cloth;
        can_wear[s_light_armour] = can_wear_light_armour;
        can_wear[s_medium_armour] = can_wear_medium_armour;
        can_wear[s_heavy_armour] = can_wear_heavy_armour;
    };
    char_class()
    {
        string set_name = "None";
        bool setmagic1 = false;
        bool setmagic2 = false;
        bool setmagic3 = false;
        int setr_atr_str = 0;
        int setr_atr_int = 0;
        int setr_atr_wlp = 0;
        int setr_atr_agl = 0;
        int setr_atr_dxt = 0;
        int setr_atr_chr = 0;
        bool can_use_crude = true;
        bool can_use_bow = true;
        bool can_use_crossbow = true;
        bool can_use_short_blade = true;
        bool can_use_long_blade = false;
        bool can_use_axe = true;
        bool can_use_halberd = false;
        bool can_use_hammer = false;
        bool can_use_spear = true;
        bool can_use_special = false;
        bool can_wear_t_none = true;
        bool can_wear_cloth = true;
        bool can_wear_light_armour = true;
        bool can_wear_medium_armour = false;
        bool can_wear_heavy_armour = false;
    };
    static char_class GetNull()
    {
    char_class *res = new char_class("None",false, false, false, 0, 0, 0, 0, 0, 0, true, true, true, true, false, true, false, false, true, false, true, true, true, false, false);
    return *res;
    };
	void set_c_display_name(string set_name) { c_display_name = set_name; }
	void set_arcane_magic(bool setmagic1) { arcane_magic = setmagic1; }
	void set_cleric_magic(bool setmagic2) { cleric_magic = setmagic2; }
	void set_druid_magic(bool setmagic3) { druid_magic = setmagic3; }
	void set_req_str(int setr_atr_str) { requirement.atr_str = setr_atr_str; }
	void set_req_int(int setr_atr_int) { requirement.atr_int = setr_atr_int; }
	void set_req_wlp(int setr_atr_wlp) { requirement.atr_wlp = setr_atr_wlp; }
	void set_req_agl(int setr_atr_agl) { requirement.atr_agl = setr_atr_agl; }
	void set_req_dxt(int setr_atr_dxt) { requirement.atr_dxt = setr_atr_dxt; }
	void set_req_chr(int setr_atr_chr) { requirement.atr_chr = setr_atr_chr; }
	void set_can_crude(bool can_use_crude) { can_use[s_crude] = can_use_crude; }
	void set_can_bow(bool can_use_bow) { can_use[s_bow] = can_use_bow; }
	void set_can_crossbow(bool can_use_crossbow) { can_use[s_crossbow] = can_use_crossbow; }
	void set_can_short_blade(bool can_use_short_blade) { can_use[s_short_blade] = can_use_short_blade; }
	void set_can_long_blade(bool can_use_long_blade) { can_use[s_long_blade] = can_use_long_blade; }
	void set_can_axe(bool can_use_axe) { can_use[s_axe] = can_use_axe; }
	void set_can_halberd(bool can_use_halberd) { can_use[s_halberd] = can_use_halberd; }
	void set_can_hammer(bool can_use_hammer) { can_use[s_hammer] = can_use_hammer; }
	void set_can_spear(bool can_use_spear) { can_use[s_spear] = can_use_spear; }
	void set_can_special(bool can_use_special) { can_use[s_special] = can_use_special; }
	void set_can_cloth(bool can_wear_cloth) { can_wear[s_cloth] = can_wear_cloth; }
	void set_can_light_armour(bool can_wear_light_armour) { can_wear[s_light_armour] = can_wear_light_armour; }
	void set_can_medium_armour(bool can_wear_medium_armour) { can_wear[s_medium_armour] = can_wear_medium_armour; }
	void set_can_heavy_armour(bool can_wear_heavy_armour) { can_wear[s_heavy_armour] = can_wear_heavy_armour; }
    string get_c_display_name() { return c_display_name; }
    bool get_arcane_magic() { return arcane_magic; }
    bool get_cleric_magic() { return cleric_magic; }
    bool get_druid_magic() { return druid_magic; }
    int get_req_str() { return requirement.atr_str; }
    int get_req_int() { return requirement.atr_int; }
    int get_req_wlp() { return requirement.atr_wlp; }
    int get_req_agl() { return requirement.atr_agl; }
    int get_req_dxt() { return requirement.atr_dxt; }
    int get_req_chr() { return requirement.atr_chr; }
    bool get_can_crude() { return can_use[s_crude]; }
    bool get_can_bow() { return can_use[s_bow]; }
    bool get_can_crossbow() { return can_use[s_crossbow]; }
    bool get_can_short_blade() { return can_use[s_short_blade]; }
    bool get_can_long_blade() { return can_use[s_long_blade]; }
    bool get_can_axe() { return can_use[s_axe]; }
    bool get_can_halberd() { return can_use[s_halberd]; }
    bool get_can_hammer() { return can_use[s_hammer]; }
    bool get_can_spear() { return can_use[s_spear]; }
    bool get_can_special() { return can_use[s_special]; }
    bool get_can_cloth() { return can_wear[s_cloth]; }
    bool get_can_light_armour() { return can_wear[s_light_armour]; }
    bool get_can_medium_armour() { return can_wear[s_medium_armour]; }
    bool get_can_heavy_armour() { return can_wear[s_heavy_armour]; }
};
char_class c_dummy("None", false,  false,  false, 0, 0, 0, 0, 0, 0,  true,  true,  true,  true,  false,  true,  false,  false,  true,  false,  true,  true,  true,  false,  false);
char_class c_warrior("Warrior", false,  false,  false, 11, 0, 0, 9, 0, 0,  true,  true,  true,  true, true,  true, true, true,  true, true,  true,  true,  true, true, true);
char_class c_thief("Thief", false,  false,  false, 0, 0, 0, 12, 12, 0,  true,  true,  true,  true, true,  true, true, true,  true, true,  true,  true,  true, false, false);
char_class c_cleric("Cleric", false, true,  false, 10, 10, 13, 0, 0, 10,  true, false, false, false, false, false, false, true, false, true,  true,  true,  true, true, false);
char_class c_mage("Magician", true, false,  false, 0, 12, 12, 0, 0, 10,  true, false, true, true, false, true, false, true, false, true,  true,  true,  true, false, false);
char_class c_druid("Druid", false, false, true, 0, 14, 12, 0, 0, 0,  true, true, false, false, false, false, false, false, false, true,  true,  true, false, false, false);

class prestige_class
{
private:
    string pc_display_name;
    bool free_variation;
    bool arcane_magic;
    bool cleric_magic;
    bool druid_magic;
    bool can_use[s_special];
    bool can_wear[s_heavy_armour];
public:
    char_class *required_class1;
    char_class *required_class2;
    prestige_class(string set_name, char_class *setreq1, char_class *setreq2, bool set_free_variation, bool setmagic1, bool setmagic2, bool setmagic3, bool can_use_crude, bool can_use_bow, bool can_use_crossbow, bool can_use_short_blade, bool can_use_long_blade, bool can_use_axe, bool can_use_halberd, bool can_use_hammer, bool can_use_spear, bool can_use_special , bool can_wear_t_none, bool can_wear_cloth, bool can_wear_light_armour, bool can_wear_medium_armour, bool can_wear_heavy_armour)
    {
        pc_display_name = set_name;
        free_variation = set_free_variation;
        required_class1 = setreq1;
        required_class2 = setreq2;
        arcane_magic = setmagic1;
        cleric_magic = setmagic2;
        druid_magic = setmagic3;
        can_use[s_crude] = can_use_crude;
        can_use[s_bow] = can_use_bow;
        can_use[s_crossbow] = can_use_crossbow;
        can_use[s_short_blade] = can_use_short_blade;
        can_use[s_long_blade] = can_use_long_blade;
        can_use[s_axe] = can_use_axe;
        can_use[s_halberd] = can_use_halberd;
        can_use[s_hammer] = can_use_hammer;
        can_use[s_spear] = can_use_spear;
        can_use[s_special] = can_use_special;
        can_wear[s_cloth] = can_wear_cloth;
        can_wear[s_light_armour] = can_wear_light_armour;
        can_wear[s_medium_armour] = can_wear_medium_armour;
        can_wear[s_heavy_armour] = can_wear_heavy_armour;
    };
    prestige_class()
    {
        string set_name = "None";
        char_class setreq1 = c_dummy;
        char_class setreq2 = c_dummy;
        bool set_free_variation = true;
        bool setmagic1 = false;
        bool setmagic2 = false;
        bool setmagic3 = false;
        bool can_use_crude = true;
        bool can_use_bow = true;
        bool can_use_crossbow = true;
        bool can_use_short_blade = true;
        bool can_use_long_blade = false;
        bool can_use_axe = true;
        bool can_use_halberd = false;
        bool can_use_hammer = false;
        bool can_use_spear = true;
        bool can_use_special = false;
        bool can_wear_t_none = true;
        bool can_wear_cloth = true;
        bool can_wear_light_armour = true;
        bool can_wear_medium_armour = false;
        bool can_wear_heavy_armour = false;
    };
    static prestige_class GetNull()
    {
    prestige_class *res = new prestige_class("None", &c_dummy, &c_dummy, true, false, false, false, true, true, true, true, false, true, false, false, true, false, true, true, true, false, false);
    return *res;
    };
    void set_req1(char_class *setclass1) { required_class1 = setclass1;}
    void set_req2(char_class *setclass2) { required_class2 = setclass2;}
	void set_pc_display_name(string set_name) { pc_display_name = set_name; }
	void set_arcane_magic(bool setmagic1) { arcane_magic = setmagic1; }
	void set_cleric_magic(bool setmagic2) { cleric_magic = setmagic2; }
	void set_druid_magic(bool setmagic3) { druid_magic = setmagic3; }
	void set_can_crude(bool can_use_crude) { can_use[s_crude] = can_use_crude; }
	void set_can_bow(bool can_use_bow) { can_use[s_bow] = can_use_bow; }
	void set_can_crossbow(bool can_use_crossbow) { can_use[s_crossbow] = can_use_crossbow; }
	void set_can_short_blade(bool can_use_short_blade) { can_use[s_short_blade] = can_use_short_blade; }
	void set_can_long_blade(bool can_use_long_blade) { can_use[s_long_blade] = can_use_long_blade; }
	void set_can_axe(bool can_use_axe) { can_use[s_axe] = can_use_axe; }
	void set_can_halberd(bool can_use_halberd) { can_use[s_halberd] = can_use_halberd; }
	void set_can_hammer(bool can_use_hammer) { can_use[s_hammer] = can_use_hammer; }
	void set_can_spear(bool can_use_spear) { can_use[s_spear] = can_use_spear; }
	void set_can_special(bool can_use_special) { can_use[s_special] = can_use_special; }
	void set_can_cloth(bool can_wear_cloth) { can_wear[s_cloth] = can_wear_cloth; }
	void set_can_light_armour(bool can_wear_light_armour) { can_wear[s_light_armour] = can_wear_light_armour; }
	void set_can_medium_armour(bool can_wear_medium_armour) { can_wear[s_medium_armour] = can_wear_medium_armour; }
	void set_can_heavy_armour(bool can_wear_heavy_armour) { can_wear[s_heavy_armour] = can_wear_heavy_armour; }
    string get_pc_display_name() { return pc_display_name; }
    bool get_free_variaton() { return free_variation; }
    bool get_arcane_magic() { return arcane_magic; }
    bool get_cleric_magic() { return cleric_magic; }
    bool get_druid_magic() { return druid_magic; }
    bool get_can_crude() { return can_use[s_crude]; }
    bool get_can_bow() { return can_use[s_bow]; }
    bool get_can_crossbow() { return can_use[s_crossbow]; }
    bool get_can_short_blade() { return can_use[s_short_blade]; }
    bool get_can_long_blade() { return can_use[s_long_blade]; }
    bool get_can_axe() { return can_use[s_axe]; }
    bool get_can_halberd() { return can_use[s_halberd]; }
    bool get_can_hammer() { return can_use[s_hammer]; }
    bool get_can_spear() { return can_use[s_spear]; }
    bool get_can_special() { return can_use[s_special]; }
    bool get_can_cloth() { return can_wear[s_cloth]; }
    bool get_can_light_armour() { return can_wear[s_light_armour]; }
    bool get_can_medium_armour() { return can_wear[s_medium_armour]; }
    bool get_can_heavy_armour() { return can_wear[s_heavy_armour]; }
};
prestige_class pc_dummy("None", &c_dummy, &c_dummy, true, false, false, false, true, true, true, true, false, true, false, false, true, false, true, true, true, false, false);
prestige_class pc_knight("Knight", &c_warrior, &c_cleric, false, false, false, false, true, true, true, true, false, true, false, false, true, false, true, true, true, false, false);

#endif
