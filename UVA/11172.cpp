#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int input;
    int one,two;

    cin >> input;

    for(int i=0; i<input; i++)
    {
        cin >> one >> two;

        if(one<two)
        {
            cout << "<" << endl;
        }
        else if (one>two)
        {
            cout << ">" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }

        return 0;
}
