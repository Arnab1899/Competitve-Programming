#include<stdio.h>
int main()

{

    int arr[5];
    int i, sum=0;


    printf("Enter elements in the array: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(i=0; i<5; i++)
    {
        sum = sum + arr[i];
    }


    printf("Sum of all elements of array = %d", sum);


    return 0;
}
