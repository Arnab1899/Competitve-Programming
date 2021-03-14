#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;

    cin >> n;

    if(n%4==0)
    {
        int in = n+1;
        cout << in << endl;
    }

    else
    {
        int out = n-1;
        cout << out << endl;
    }

    return 0;
}
