#include <stdio.h>

int main()
{
    int arr[5];
    int i, j = 0;


    printf("Enter elements in array : ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(i=0; i<5; i++)
    {

        if(arr[i] < 0)
        {
            j++;
        }
    }

    printf("\nTotal negative elements in array = %d", j);

    return 0;
}


