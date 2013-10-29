#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>
#include "STRUCTURE.h"
#include "Wtypes.h"
#include "WEAPON.h"
#include "Armour.h"
#include "Race.h"
#include "INVENTORY.H"
#include "CHARACTER.H"
using namespace std;

int main()
{
    string import1;
    int import2;
    int import3;
    int import4;
    int import5;
    material import6;
    element import7;
       ifstream inf("Sample.dat");
    if (!inf)
    {
        // Print an error and exit
        cerr << "Uh oh, Sample.dat could not be opened for reading!" << endl;
        exit(1);
    };
inf >> import1;
inf >> import2;
inf >> import3;
inf >> import4;
inf >> import5;
inf >> import6;
inf >> import7;
wpn newweapon(import1, import2, import3, import4, import5, import6, import7);
cout << newweapon.GetW_display_name() << endl;
    return 0;
};
