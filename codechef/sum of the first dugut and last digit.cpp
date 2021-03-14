#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int num;
    int last,first;
    int sum = 0;
    int t;

    cin >> t;

    for(int i =0; i>=10; i++)
    {
        cin >> num;

        first = num;
        num= num%10;

        num = num/10;
    }
    first = num;

    sum = first + last;

    cout << sum << endl;


   return 0;
}
