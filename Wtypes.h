#ifndef _WTYPES_INCLUDED_
#define _WTYPES_INCLUDED_
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>


class w_type
{private:
    string display_name;
    string alias;
public:
    w_type(string setname, string setalias)
    {
        display_name = setname;
        alias = setalias;
    };
    w_type()
    {
        string setname = "None";
        string setalias = "dummy";
    };
    static w_type GetNull()
    {
        w_type *res = new w_type("None", "dummy");
        return *res;
     };
     void setname(string setname) { display_name = setname; }
     string GetName() { return display_name; }
     void setalias(string setalias) { alias = setalias; }
     string GetAlias() { return alias; }
};
w_type blunt("Blunt", "blunt");
w_type ranged("Ranged", "ranged");
w_type piercing("Piercing", "percing");
w_type slashing("Slashing", "slashing");

class w_type2
{
private:
    string display_name;
    string alias;
public:
    w_type2(string setname, string setalias)
    {
        display_name = setname;
        alias = setalias;
    };
    w_type2()
    {
        string setname = "None";
        string setalias = "dummy";
    };
    static w_type2 GetNull()
    {
        w_type2 *res = new w_type2("None", "dummy");
        return *res;
     };
     void setname(string setname) { display_name = setname; }
     string GetName() { return display_name; }
     void setalias(string setalias) { alias = setalias; }
     string GetAlias() { return alias; }
};

w_type2 crude("Crude", "crude");
w_type2 bow("Bow", "bow");
w_type2 crossbow("Crossbow", "xbow");
w_type2 short_blade("Short Blade", "ssword");
w_type2 long_blade("Long Blade", "lsword");
w_type2 axe("Axe", "axe");
w_type2 halberd("Battle Axe", "halberd");
w_type2 hammer("Hammer", "hammer");
w_type2 spear("Polearm", "polearm");
w_type2 special("Special", "special");

enum weapons_canuse
{
    s_crude = 0,
    s_bow,
    s_crossbow,
    s_short_blade,
    s_long_blade,
    s_axe,
    s_halberd,
    s_hammer,
    s_spear,
    s_special
};

class a_type
{
private:
    string display_name;
    string alias;
public:
    a_type(string setname, string setalias)
    {
        display_name = setname;
        alias = setalias;
    };
    a_type()
    {
        string setname = "None";
        string setalias = "dummy";
    };
    static a_type GetNull()
    {
        a_type *res = new a_type("None", "dummy");
        return *res;
     };
     void setname(string setname) { display_name = setname; }
     string GetName() { return display_name; }
     void setalias(string setalias) { alias = setalias; }
     string GetAlias() { return alias; }
};

a_type cloth("None", "clothing");
a_type light_armour("Light Armour", "l_armour");
a_type medium_armour("Medium Armour", "m_armour");
a_type heavy_armour("Heavy Armour", "h_armour");

enum armour_canwear
{
    s_cloth = 0,
    s_light_armour,
    s_medium_armour,
    s_heavy_armour
};

class element
{
private:
    string display_name;
    string alias;
public:
    element(string setname, string setalias)
    {
        display_name = setname;
        alias = setalias;
    };
    element()
    {
        string setname = "Physical";
        string setalias = "none";
    };
    static element GetNull()
    {
        element *res = new element("Physical", "none");
        return *res;
     };
     void setname(string setname) { display_name = setname; }
     string GetName() { return display_name; }
     void setalias(string setalias) { alias = setalias; }
     string GetAlias() { return alias; }
};

element m_none("Physical", "none");
element m_fire("Igneous", "fire");
element m_water("Aquatic", "water");
element m_ice("Gelid", "ice");
element m_air("Tempestuous", "air");
element m_thunder("Thunderous", "thunder");
element m_light("Luminous", "light");
element m_dark("Caliginous", "dark");


class material
{
private:
    string display_name;
    string alias;
public:
    material(string setname, string setalias)
    {
        display_name = setname;
        alias = setalias;
    };
    material()
    {
        string setname = "None";
        string setalias = "none";
    };
    static material GetNull()
    {
        material *res = new material("None", "none");
        return *res;
     };
     void setname(string setname) { display_name = setname; }
     string GetName() { return display_name; }
     void setalias(string setalias) { alias = setalias; }
     string GetAlias() { return alias; }
};
material a_none("None", "none");
material a_wood("Wooden", "wood");
material a_iron("Iron", "iron");
material a_steel("Steel", "steel");
material a_dwarven("Dwarven", "dwarven");
material a_leather("Leather", "leather");

#endif
