#include<stdio.h>

double cube (double num)
{
    return (num*num*num);
}

int main ()
{
    int num;
    double c;

    scanf("%d",&num);

    c = cube(num);

    printf("cube of %d is %.1f",num,c);

    return 0;

}

