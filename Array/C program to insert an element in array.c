#include <stdio.h>
int main()
{
    int arr[5];
    int i, num, pos;

    printf("Enter elements in array : ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert : ");
    scanf("%d", &num);

    printf("Enter the element position : ");
    scanf("%d", &pos);


    if(pos > arr[5]+1 || pos <= 0)
    {
        printf("Invalid position.");
    }
    else
    {

        for(i=5; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }

        arr[pos-1] = num;
        arr[5]++;


        printf("Array elements after insertion : ");
        for(i=0; i<5; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}
