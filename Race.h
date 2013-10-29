#ifndef _RACE_INCLUDED_
#define _RACE_INCLUDED_
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>
#include "STRUCTURE.h"
using namespace std;

class race1
{
private:
    string r1_display_name;
    attrib r_max;
    attrib r_min;
public:
    race1(string setname, int min_atr_str, int max_atr_str, int min_atr_int, int max_atr_int, int min_atr_wlp, int max_atr_wlp, int min_atr_agl, int max_atr_agl, int min_atr_dxt, int max_atr_dxt, int min_atr_chr, int max_atr_chr)
    {
        r1_display_name = setname;
        r_min.atr_str = min_atr_str;
        r_max.atr_str = max_atr_str;
        r_min.atr_int = min_atr_int;
        r_max.atr_int = max_atr_int;
        r_min.atr_wlp = min_atr_wlp;
        r_max.atr_wlp = max_atr_wlp;
        r_min.atr_agl = min_atr_agl;
        r_max.atr_agl = max_atr_agl;
        r_min.atr_dxt = min_atr_dxt;
        r_max.atr_dxt = max_atr_dxt;
        r_min.atr_chr = min_atr_chr;
        r_max.atr_chr = max_atr_chr;
    };
    race1()
    {
        string setname = "None";
        int min_atr_str = 0;
        int max_atr_str = 0;
        int min_atr_int = 0;
        int max_atr_int = 0;
        int min_atr_wlp = 0;
        int max_atr_wlp = 0;
        int min_atr_agl = 0;
        int max_atr_agl = 0;
        int min_atr_dxt = 0;
        int max_atr_dxt = 0;
        int min_atr_chr = 0;
        int max_atr_chr = 0;
    };
    static race1 GetNull()
    {
    race1 *res = new race1("None",0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    return *res;
    };
    string get_display_name() {return r1_display_name; }
    int get_min_str() {return r_min.atr_str; }
	void set_min_str(int set_min_atset_str) { r_min.atr_str = set_min_atset_str; }
	int get_max_str() {return r_max.atr_str; }
	void set_max_str(int set_max_atset_str) { r_max.atr_str = set_max_atset_str; }
	int get_min_int() {return r_min.atr_int; }
	void set_min_int(int set_min_atset_int) { r_min.atr_int = set_min_atset_int; }
	int get_max_int() {return r_max.atr_int; }
	void set_max_int(int set_max_atset_int) { r_max.atr_int = set_max_atset_int; }
	int get_min_wlp() {return r_min.atr_wlp; }
	void set_min_wlp(int set_min_atset_wlp) { r_min.atr_wlp = set_min_atset_wlp; }
	int get_max_wlp() {return r_max.atr_wlp; }
	void set_max_wlp(int set_max_atset_wlp) { r_max.atr_wlp = set_max_atset_wlp; }
	int get_min_agl() {return r_min.atr_agl; }
	void set_min_agl(int set_min_atset_agl) { r_min.atr_agl = set_min_atset_agl; }
	int get_max_agl() {return r_max.atr_agl; }
	void set_max_agl(int set_max_atset_agl) { r_max.atr_agl = set_max_atset_agl; }
	int get_min_dxt() {return r_min.atr_dxt; }
	void set_min_dxt(int set_min_atset_dxt) { r_min.atr_dxt = set_min_atset_dxt; }
	int get_max_dxt() {return r_max.atr_dxt; }
	void set_max_dxt(int set_max_atset_dxt) { r_max.atr_dxt = set_max_atset_dxt; }
	int get_min_chr() {return r_min.atr_chr; }
	void set_min_chr(int set_min_atset_chr) { r_min.atr_chr = set_min_atset_chr; }
	int get_max_chr() {return r_max.atr_chr; }
	void set_max_chr(int set_max_atset_chr) { r_max.atr_chr = set_max_atset_chr; }
};

race1 r_dummy("None",0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
race1 r_human("Human", 8, 18, 8, 18, 8, 18, 8, 18, 8, 18, 8, 18);
race1 r_wood_elf("Wood Elf", 7, 17, 9, 19, 9, 19, 9, 19, 8, 18, 7, 17);
race1 r_high_elf("High Elf", 7, 17, 8, 18, 9, 19, 9, 19, 8, 18, 7, 17);
race1 r_dark_elf("Dark Elf", 7, 17, 8, 18, 8, 18, 9, 19, 9, 19, 7, 17);
race1 r_orc("Orc", 10, 20, 8, 18, 7, 17, 9, 19, 7, 17, 7, 17);
race1 r_dwarf("Dwarf", 10, 20, 8, 18, 8, 18, 6, 16, 8, 18, 8, 18);
race1 r_gnome("Gnome", 7, 17, 9, 19, 9, 19, 6, 16, 9, 19, 8, 18);
race1 r_halfling("Halfling", 7, 17, 8, 18, 8, 18, 9, 19, 7, 17, 9, 19);
race1 r_lizardman("Lizardman", 9, 19, 9, 19, 8, 18, 9, 19, 7, 17, 6, 16);
race1 r_ogre("Ogre", 12, 22, 7, 17, 7, 17, 9, 19, 7, 17, 6, 16);
race1 r_goblin("Goblin", 9, 19, 8, 18, 7, 17, 9, 19, 9, 19, 7, 17);

class race2
{
private:
    string r2_display_name;
    attrib r2_bonus;
public:
    race2(string r2_setname, signed int set_bon_atset_str, signed int set_bon_atset_int, signed int set_bon_atset_wlp, signed int set_bon_agl, signed int set_bon_atset_dxt, signed int set_bon_atset_chr)
    {
    r2_display_name = r2_setname;
    r2_bonus.atr_str = set_bon_atset_str;
    r2_bonus.atr_int = set_bon_atset_int;
    r2_bonus.atr_wlp = set_bon_atset_wlp;
    r2_bonus.atr_agl = set_bon_agl;
    r2_bonus.atr_dxt = set_bon_atset_dxt;
    r2_bonus.atr_chr = set_bon_atset_chr;
    };
    race2()
    {
    string r2_setname = "None";
    int set_bon_atset_str = 0;
    int set_bon_atset_int = 0;
    int set_bon_atset_wlp = 0;
    int set_bon_atset_agl = 0;
    int set_bon_atset_dxt = 0;
    int set_bon_atset_chr = 0;
    };
    static race2 GetNull()
    {
    race2 *res = new race2("None",0, 0, 0, 0, 0, 0);
    return *res;
    };
	int get_bon_str() {return r2_bonus.atr_str; }
	void set_bon_str(int set_bon_atset_str) { r2_bonus.atr_str = set_bon_atset_str; }
	int get_bon_int() {return r2_bonus.atr_int; }
	void set_bon_int(int set_bon_atset_int) { r2_bonus.atr_int = set_bon_atset_int; }
	int get_bon_wlp() {return r2_bonus.atr_wlp; }
	void set_bon_wlp(int set_bon_atset_wlp) { r2_bonus.atr_wlp = set_bon_atset_wlp; }
	int get_bon_agl() {return r2_bonus.atr_agl; }
	void set_bon_agl(int set_bon_atset_agl) { r2_bonus.atr_agl = set_bon_atset_agl; }
	int get_bon_dxt() {return r2_bonus.atr_dxt; }
	void set_bon_dxt(int set_bon_atset_dxt) { r2_bonus.atr_dxt = set_bon_atset_dxt; }
	int get_bon_chr() {return r2_bonus.atr_chr; }
	void set_bon_chr(int set_bon_atset_chr) { r2_bonus.atr_chr = set_bon_atset_chr; }
};
race2 r_none("None", 0, 0, 0, 0, 0, 0);
race2 r_vampire("Vampire", 7, 0, 0, 1, 1, 2);
race2 r_lich("Lich", 0, 6, 6, 0, 0, -1);
race2 r_werewolf("Werewolf", 6, 0, 2, 0, 0, 0);
race2 r_werebear("Werebear", 10, 0, 0, 0, -2, -2);
race2 r_werelion("Werelion", 5, 0, 0, 0, 3, 0);
race2 r_wereboar("Wereboar", 8, 0, 0, 0, -1, 0);
race2 r_weretiger("Weretiger", 5, 0, 0, 1, 2, 0);
race2 r_wererat("Wererat", 1, 3, 1, 0, 3, -1);
#endif
