#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>
#include <D:\Program Files\Lua\5.1\include\lua.hpp>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "direct.h"
#include "STRUCTURE.h"
#include "Wtypes.h"
#include "WEAPON.h"
#include "Armour.h"
#include "Race.h"
#include "Classes.h"
#include "INVENTORY.H"
#include "CHARACTER.H"
using namespace std;

lua_State* L;


int main()
{
std::map <string,wpn> weapon;
  ifstream fin;
  string dir, filepath;
    string import1;
    int import2;
    int import3;
    int import4;
    int import5;
    string import6;
    string import7;
    string import8;
    string import9;
  DIR *dp;
  struct dirent *dirp;
  struct stat filestat;

  cout << "dir to get files of: " << flush;
  getline( cin, dir );  // gets everything the user ENTERs

  dp = opendir( dir.c_str() );
  if (dp == NULL)
    {
    cout << "Error(" << errno << ") opening " << dir << endl;
    return errno;
    }

  while ((dirp = readdir( dp )))
    {
    filepath = dir + "/" + dirp->d_name;

    // If the file is a directory (or is in some way invalid) we'll skip it
    if (stat( filepath.c_str(), &filestat )) continue;
    if (S_ISDIR( filestat.st_mode ))         continue;

    // Endeavor to read a single number from the file and display it
    fin.open( filepath.c_str() );
getline(fin, import1);
weapon[filepath].w_set_name(import1);
fin >> import2;
weapon[filepath].w_set_min(import2);
fin >> import3;
weapon[filepath].w_set_max(import3);
fin >> import4;
weapon[filepath].w_set_cond(import4);
fin >> import5;
weapon[filepath].w_set_cost(import5);
fin >> import6;
weapon[filepath].w_set_mat(import6);
fin >> import7;
weapon[filepath].w_set_elem(import7);
fin >> import8;
weapon[filepath].w_set_type(import8);
fin >> import9;
weapon[filepath].w_set_kind(import9);
cout << filepath << endl;
cout << "Name: " << weapon[filepath].GetW_display_name() << endl;
cout << "Cost: " << weapon[filepath].GetW_cost() << " golds" << endl;
cout << "Condition: " << weapon[filepath].GetW_cond() << "%" << endl;
cout << "Material: " << weapon[filepath].w_mat->GetName() << endl;
cout << "Weapon Type: " << weapon[filepath].w_kind->GetName() << endl;
cout << "Damage: " << weapon[filepath].GetW_minatk() << "-" << weapon[filepath].GetW_maxatk() << endl;
cout << "Damage Type: " << weapon[filepath].w_elem->GetName() << ", " << weapon[filepath].w_usage->GetName() << "\n" << endl;
printf("");
printf("");
    fin.close();
    }

  closedir( dp );
    return 0;
};
