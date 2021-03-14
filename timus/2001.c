#include<stdio.h>
int main ()
{
    int a1,b1,a2,b2,a3,b3;
    int x,y;

    scanf("%d %d %d %d %d %d",&a1,&b1,&a2,&b2,&a3,&b3);

    x = a1-a3;
    y = b1-b2;

    {
        printf("%d %d",x,y);
    }

    return 0;


}
