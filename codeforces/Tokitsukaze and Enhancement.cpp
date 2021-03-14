#include<bits/stdc++.h>
using namespace std;

int main ()
{
    unsigned long long input;

    cin >> input ;

    if(input%4==0)
    {
        cout << 1 << " A" << endl;
    }
    else if (input%4==1)
    {
        cout << 0 << " A" << endl;
    }
    else if (input%4==2)
    {
        cout << 1 << " B" << endl;
    }
    else if (input%4==3)
    {
        cout << 2 << " A" << endl;
    }

    return 0;
}
