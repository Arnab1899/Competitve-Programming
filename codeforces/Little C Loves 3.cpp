#include<bits/stdc++.h>
using namespace std;

int main ()
{
   int num;

   while (cin >> num)
   {
       if(num%3==0 || num%3==1)
       {
           cout << 1 << " " << 1 << " " << num-2 << endl;
       }
       else
       {
           cout << 1 << " " << 2 << " " << num-3 << endl;
    }
   }

   return 0;
}
