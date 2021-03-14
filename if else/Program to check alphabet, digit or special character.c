#include<stdio.h>
int main()

{
    int x;

    printf("Enter Anything:");
    scanf("%c",&x);

    if((x >= 'a' && x <='z') || (x >= 'A' && x <= 'Z'))
    {
        printf("'%c'is an alphabet",x);
    }

    else if("x >= '0' && x <= '9'")
    {
        printf("'%c' is a digit",x);
    }

    else
    {
        printf("This is a special character",x);
    }

    return 0;
}
