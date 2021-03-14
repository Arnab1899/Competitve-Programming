#include <stdio.h>

int main()
{
    char str[100];
    int i, j;

    printf("Enter any string: ");
    gets(str);

    i = 0;
    j = 1;


    while(str[i] != '\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            j++;
        }

        i++;
    }

    printf("Total number of words = %d",j);

    return 0;
}
