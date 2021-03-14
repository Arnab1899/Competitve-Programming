#include<bits/stdc++.h>
using namespace std;

int main ()
{
    char str[1001];

    while(gets(str))
    {
        int out = 0 ,text = 0;

        for (int i=0; i<str[i]; i++)
        {
            if(str[i] >= 'a' && str[i] <='z' || str[i] >='A' && str[i] <='Z')
                out = 1;
        else
        {
            text += out ;
            out = 0;
        }

        }
        text +=out;
        cout << text << endl;
    }

    return 0;

}
