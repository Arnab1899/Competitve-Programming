#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int velocity,acceleration;

    while (cin >> velocity >> acceleration)
    {
        int time = 2*(velocity*acceleration);
        cout << time << endl;
    }

    return 0;
}
