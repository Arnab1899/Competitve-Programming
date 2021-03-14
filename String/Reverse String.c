#include<stdio.h>
int main()

{
    char arr[5];
    int i;

    printf("Enter The String: ");

    for(i=0; i<5; i++)
    {
        scanf("%c",&arr[i]);
    }

    printf("Reverse String Is: ");

    for(i=5-1; i>=0; i--)
    {
        printf("%c",arr[i]);
    }


    return 0;
}
