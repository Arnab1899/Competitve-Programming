#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;

    int choco,men;

    cin >> t;

    //for(int i=0; i<t; i++)
    while(t--)
    {
        cin >> choco >> men ;

        if(men%choco == 0)

            cout << "Yes" << endl;
        else

            cout << "No" << endl;

    }

    return 0;
}
