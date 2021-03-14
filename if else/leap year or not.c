#include<stdio.h>
int main()

{
    int year;

    printf("Enter Your Year Number:");
    scanf("%d",&year);

    if((year%4 == 0) && (year%100 != 0) || (year%400 == 0))
    {
        printf("LEAP YEAR\n");
    }
    else
    {
        printf("NOT A LEAP YEAR\n");
    }

    return 0;
}
