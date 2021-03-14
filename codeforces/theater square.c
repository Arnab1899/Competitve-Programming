#include<stdio.h>
int main ()
{
    long long int a,b,c;
    long long int m,n;

    scanf("%I64d %I64d %I64d ",&a,&b,&c);

    if(a%c == 0)
    {
        m = (a/c);
    }
    else if(a%c != 0)
    {
        m = (a/c)+1;
    }
    if(b%c == 0)
    {
        n  = (b/c);
    }
    else if(b%c != 0)
    {
        n = (b/c)+1;
    }

    {
        printf("%I64d",m*n);
    }
}
