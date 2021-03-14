#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int number;

    cin >> number;

    for(int i=0; i<number; i++)
    {
        if(i%2==0)
        {
            cout << "I love" << endl;
            else {
                cout << "I hate" << endl;
            }
            if (i == number -1)
            {
                cout << "it" << endl;
                else {
                    cout << "that" << endl;
                }
            }
        }
    }

    return 0;
}
