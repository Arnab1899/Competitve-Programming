#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int num;

    cin >> num;

    while (num--)
    {
        int num_two, rev =0, rem;
        cin >> num_two;

    while(num_two!=0)
    {
        rem = num_two%10;
        rev = rev*10+rem;
        num_two/=10;
    }

    cout << rev << endl;
    }

    return 0;
}

