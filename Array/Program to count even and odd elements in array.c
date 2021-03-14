#include <stdio.h>

int main()

{
    int arr[10];
    int i, even, odd;


    printf("Enter %d elements in array: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    even = 0;
    odd  = 0;

    for(i=0; i<10; i++)
    {

        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);

    return 0;
}
