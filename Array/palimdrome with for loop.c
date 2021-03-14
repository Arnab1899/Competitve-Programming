#include<stdio.h>
#include<string.h>

int main()

{
    char arr[80],arr2[80];
    int i,j,l;

    {
        scanf("%s",arr);
    }

    l= strlen(arr);

    for(i=0; j=l-1; i<l; i++; j--)
    {
        arr2[i] = arr[j];
    }

    arr2[i] = '\0'

   {
    printf("%s\n",arr2);
   }

    if (0 == strcmp(arr,arr2)
        {
            printf("%s Is a Palindrome Word\n",arr);
        }

        else
            {
                printf("%s Is Not a Palindrome Number.\n",arr);
            }

            return 0;
}

