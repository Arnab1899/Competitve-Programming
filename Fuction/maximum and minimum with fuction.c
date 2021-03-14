#include<stdio.h>

int max(int num1, int num2);
int min(int mun1, int num2);

int max(int num1, int num2)
{
    return (num1>num2) ? num1 : num2;
}

int min (int num1, int num2)
{
    return (num1<num2) ? num1 : num2;
}


int main ()
{
    int num1,num2;
    int maximum,minimum;

    scanf("%d %d",&num1,&num2);

    maximum = max(num1, num2);
    minimum = min(num1,num2);

    printf("Maximum = %d\nMinimum = %d\n",maximum,minimum);

    return 0;

}
