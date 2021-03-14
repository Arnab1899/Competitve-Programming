#include<stdio.h>
int main()

{
    int a,b;

    printf("Enter Your Number:");
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        printf("%d is a maximum number",a);
    }

    if(b>a)
    {
        printf("%d is maximum number",b);
    }
    if(a==b)
    {
        printf("Both are equal");
    }



    return 0;
}
