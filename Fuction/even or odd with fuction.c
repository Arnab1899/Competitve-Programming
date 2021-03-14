#include<stdio.h>

int country(int num)
{
    return !(num % 2);
}

int main ()
{
    int num;

    scanf("%d",&num);

    if(country(num))
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}
