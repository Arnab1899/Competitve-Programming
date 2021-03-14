#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int a;

    while(a--)
    {
        int d;
        d = n/7;

        if(n%7 != 0) d++;

        cout << d << endl;

    }

    return 0;
}
