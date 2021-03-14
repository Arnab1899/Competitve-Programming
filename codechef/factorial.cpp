#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,t;
    unsigned long long fact  = 1;

    cin >> n ;

    for(int i=0; i<=n; ++i)
        while(++i)
    {
        cin >> t;
        {
            if(t > 0)
            {
                fact *=1;
            }
        }
    }

    cout << fact << endl;

    return 0;

}
