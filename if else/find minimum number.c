#include<stdio.h>
int main()

{

    int a,b,c,d;

    printf("Enter Your Four Number:");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a<b && a<c && a<d)
    {
        printf("%d is minimum number.\n",a);
    }

    else if(b<a && b<c && b<d)
    {
        printf("%d is minimun number,\n",b);
    }
    else if(c<a && c<b && c<d)
    {
        printf("%d is minimum number.\n",c);
    }
    else
    {
       printf("%d is minimum number.\n",d);
    }

    return 0;
}
