#include<bits/stdc++.h>
using namespace std;

int main ()
{
   char a;
   int testcase;

   cin >> testcase;

   for(int i=0; i<testcase; i++)
   {
       cin >> a;

       if(a=='B' || a=='b')
       cout << "BattleShip" << endl;

       else if (a=='C' || a=='c')
       cout << "Cruiser" << endl;

       else if(a=='D' || a=='d')
       cout << "Destroyer" << endl;

       else if (a=='F' || a=='f')
       cout << "Frigate" << endl;
   }
   return 0;

}
