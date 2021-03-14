#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a,b;
    int x,y;

    cin >> a;

    while(a==1)
    {
        for (int i=0; i<=b; i++)
        {
            cin >> x >> y;
            int sum = 0 ;

            if(x%2==0)
                x=x+1;
            for(int j=x; j<=y; j=j+2)
            sum = sum+j;

                cout << "Case" << i << sum;
        }
    }

    return (0);
}
