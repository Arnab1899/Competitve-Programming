#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int room, one ,two;
    int fon = 0;

    cin >> room ;

    for (int i=0; i<room; i++)
    {
        cin >> one >> two;
        if((two-one)>=2)
        {
            //fon = 0;
            fon++;
        }
    }

    cout << fon << endl;

    return 0;
}
