#include<bits/stdc++.h>
using namespace std;

int main ()
{
    unsigned long long x,y;

    while(cin >> x >> y)
    {
        if (x<y)
        {
            cout << y-x << endl;
        }
        else
        {
            cout << x-y << endl;
        }
    }

    return 0;
}
