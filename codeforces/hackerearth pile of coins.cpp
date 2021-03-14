#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int p,q;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> p >> q;
        {
            if(p%2==0 || q%2==0)
            {
                cout << "Ashish" << endl;
            }
            else
            {
                cout << "Jeel" << endl;
            }
        }
    }

    return 0;
}
