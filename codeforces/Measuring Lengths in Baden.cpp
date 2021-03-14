#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int cm;

    int feet,inch;

    cin >> cm;

    inch = cm/3;
    cm = cm%3;

    if (cm==2)
    {
        inch++;
    }
    feet = inch/12;
    inch = inch%12;

    cout << feet << inch <<endl;

    return 0;


}
