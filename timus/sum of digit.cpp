#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int num;

    cin >> num ;

    while(num--)
    {
        int loop;
        int sum = 0;

        cin >> loop;

        while(loop!= 0)
    {
        sum = sum + loop % 10;
        loop = loop/10;
    }

    cout << sum << endl;
    }

    return 0;
}
