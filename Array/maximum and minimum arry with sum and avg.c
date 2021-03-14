#include<stdio.h>
int main ()
{
    int arry[10];
    int i,sum,max,min;
    float avg;

    printf("Enter The Elements: ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&arry[i]);
    }

    max = arry[0];
    min = arry[0];

    for(i=1; i<10; i++)
    {
        if(arry[i]>max)
        {
            max = arry[i];
        }
    }
    if(arry[i] < min)
    {
        min = arry[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    sum = 0;
    sum=sum+arry[i];

    {
        printf("Simulation= %.2f\n",sum);
    }

    avg=sum/10;

    {
        printf("Average = %.2f",avg);
    }

    return 0;
}
