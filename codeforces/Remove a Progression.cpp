#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    int random_number,real_number;

    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin  >> random_number >> real_number;

        random_number = 0;

        long long ans = real_number*2;

        cout << ans << endl;
    }

    return 0;
}
