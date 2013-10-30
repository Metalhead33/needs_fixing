#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>
#include "STRUCTURE.h"
#include "Wtypes.h"
#include "WEAPON.h"
#include "Armour.h"
/*#include "Race.h"
#include "Classes.h"
#include "INVENTORY.H"
#include "CHARACTER.H"*/
using namespace std;

int main()
{
    string import1;
    int import2;
    int import3;
    int import4;
    int import5;
    string import6;
    string import7;
    string import8;
    string import9;
       ifstream inf("Sample.dat");
    if (!inf)
    {
        // Print an error and exit
        cerr << "Uh oh, Sample.dat could not be opened for reading!" << endl;
        exit(1);
    };
wpn newweapon;
getline(inf, import1);
newweapon.w_set_name(import1);
inf >> import2;
newweapon.w_set_min(import2);
inf >> import3;
newweapon.w_set_max(import3);
inf >> import4;
newweapon.w_set_cond(import4);
inf >> import5;
newweapon.w_set_cost(import5);
inf >> import6;
newweapon.w_set_mat(import6);
inf >> import7;
newweapon.w_set_elem(import7);
inf >> import8;
newweapon.w_set_type(import8);
inf >> import9;
newweapon.w_set_kind(import9);
cout << "Name: " << newweapon.GetW_display_name() << endl;
cout << "Cost: " << newweapon.GetW_cost() << " golds" << endl;
cout << "Condition: " << newweapon.GetW_cond() << "%" << endl;
cout << "Material: " << newweapon.w_mat->GetName() << endl;
cout << "Weapon Type: " << newweapon.w_kind->GetName() << endl;
cout << "Damage: " << newweapon.GetW_minatk() << "-" << newweapon.GetW_maxatk() << endl;
cout << "Damage Type: " << newweapon.w_elem->GetName() << ", " << newweapon.w_usage->GetName() << "\n" << endl;
inf.close();
inf.open("Sample2.dat");
wpn newweapon2;
getline(inf, import1);
newweapon2.w_set_name(import1);
inf >> import2;
newweapon2.w_set_min(import2);
inf >> import3;
newweapon2.w_set_max(import3);
inf >> import4;
newweapon2.w_set_cond(import4);
inf >> import5;
newweapon2.w_set_cost(import5);
inf >> import6;
newweapon2.w_set_mat(import6);
inf >> import7;
newweapon2.w_set_elem(import7);
inf >> import8;
newweapon2.w_set_type(import8);
inf >> import9;
newweapon2.w_set_kind(import9);
cout << "Name: " << newweapon2.GetW_display_name() << endl;
cout << "Cost: " << newweapon2.GetW_cost() << " golds" << endl;
cout << "Condition: " << newweapon2.GetW_cond() << "%" << endl;
cout << "Material: " << newweapon2.w_mat->GetName() << endl;
cout << "Weapon Type: " << newweapon2.w_kind->GetName() << endl;
cout << "Damage: " << newweapon2.GetW_minatk() << "-" << newweapon2.GetW_maxatk() << endl;
cout << "Damage Type: " << newweapon2.w_elem->GetName() << ", " << newweapon.w_usage->GetName() << "\n" << endl;
    return 0;
};
