#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n , total = 0;
    int x,y,z;

    cin >> n;

    for (int i=0; i<n; i++)

    {
        cin >> x >> y >> z;

        if (x+y+z >1)
        {
            total++;
        }
    }

    cout << total << endl;

    return 0;
}
