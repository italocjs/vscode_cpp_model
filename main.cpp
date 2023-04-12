// #include <iostream>
// using namespace std;

// int main()
// {
//     //printf("uai");
//     cout << "subcsdri";
//     return 0;
// }

#include <iostream>
#include "classe.h"

using namespace std;
MPA_LIB lib;

int main()
{
   // if (lib.GPS.something() == true)
   // {
     //   cout << "GPS_SOMETHING TRUE" << endl;
   // }
    int batura;
    float cachaca;
    int x = lib.a;
    cout << "lib.a= " << x << endl;
    lib.Virloc.CT.addValue(10, 5);
    lib.Virloc.CT.addValue(10, 5);
    char virloc_id[5];
    lib.Virloc.ID.getValue(virloc_id);
    cout << "VALOR DO CT = " << virloc_id << endl;
     string fname,lname;
     cout<<"Enter your first name: ";
     cin>>fname;
    // cout<<"Enter your last name: ";
    // cin>>lname;
    // cout<<"Your full name is "<<fname<<" "<<lname;
    return 0;
}