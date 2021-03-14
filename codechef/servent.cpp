#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    int N;

    cin >> T;

    //for( int i=1; i<T; i--)
    while (T--)
    {
        cin >> N;

        if(N<10)
        {
            cout << "What an obedient servant you are!" << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
