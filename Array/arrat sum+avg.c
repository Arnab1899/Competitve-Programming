#include<stdio.h>
int main()

{
    float arr[10],avg,sum=0;
    int i;

    for(i=0; i<10; i++)
    {
        scanf("%f",&arr[i]);
        sum=sum+arr[i];
    }

    {
        printf("Simulation= %.2f\n",sum);
    }

    avg=sum/10;

    {
        printf("Average = %.2f",avg);
    }

    return 0;

}
