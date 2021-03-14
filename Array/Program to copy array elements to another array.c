#include <stdio.h>
int main()

{
    int main[5], copy[5];
    int i;

    printf("Enter elements of source array : ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &main[i]);
    }


    for(i=0; i<5; i++)
    {
        copy[i] = main[i];
    }


    printf("\nCopy Of Array 1 : ");
    for(i=0; i<5; i++)
    {
        printf("%d\t", main[i]);
    }


    printf("\nCopy Of Array 2 : ");
    for(i=0; i<5; i++)
    {
        printf("%d\t", copy[i]);
    }

    return 0;
}
