#ifndef _WTYPES_INCLUDED_
#define _WTYPES_INCLUDED_
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>
class w_type
{private:
    string display_name;
public:
    w_type(string setname)
    {
        display_name = setname;
    }
    w_type()
    {
        string setname = "None";
    }
    static w_type GetNull()
    {
        w_type *res = new w_type("None");
        return *res;
     };
};
w_type blunt("Blunt");
w_type ranged("Ranged");
w_type piercing("Piercing");
w_type slashing("Slashing");

enum w_type2_setup
{
    s_crude = 1,
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

class w_type2
{
private:
    string display_name;
    w_type2_setup alias;
public:
    w_type2(string setname, w_type2_setup setalias)
    {
        display_name = setname;
        alias = setalias;
    };
    w_type2()
    {
        string setname = "None";
        w_type2_setup setalias = s_crude;
    };
    static w_type2 GetNull()
    {
        w_type2 *res = new w_type2("None", s_crude);
        return *res;
     };
};

w_type2 crude("Crude", s_crude);
w_type2 bow("Bow", s_bow);
w_type2 crossbow("Crossbow", s_crossbow);
w_type2 short_blade("Short Blade", s_short_blade);
w_type2 long_blade("Long Blade", s_long_blade);
w_type2 axe("Axe", s_axe);
w_type2 halberd("Battle Axe", s_halberd);
w_type2 hammer("Hammer", s_hammer);
w_type2 spear("Polearm", s_spear);
w_type2 special("Special", s_special);

enum a_type
{
    t_none = 1,
    cloth,
    light_armour,
    medium_armour,
    heavy_armour
};

enum element
{
    m_none,
    m_fire,
    m_water,
    m_ice,
    m_air,
    m_thunder,
    m_earth,
    m_light,
    m_dark
};

istream& operator>> ( istream& in, element& x )
{
int val;
if ( in>> val ) {
switch ( val ) {
case m_none: case m_fire: case m_water: case m_ice: case m_air: case m_thunder: case m_earth: case m_light: case m_dark:
x = element(val); break;}
}};


enum material
{
    a_none,
    a_wood,
    a_iron,
    a_steel,
    a_dwarven,
    a_leather
};

istream& operator>> ( istream& in, material& x )
{
int val;
if ( in>> val ) {
switch ( val ) {
case a_none: case a_wood: case a_steel: case a_dwarven: case a_leather:
x = material(val); break;}
}};


#endif
