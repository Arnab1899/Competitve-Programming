#include<stdio.h>
#include<string.h>

int main ()
{
    int line,len ;
    char str[1000];

    while (gets(str))
    {
        len  = strlen(str);

        for(int i=0; i<len; i++)
        {
            printf("%c",str[i]-7);
            //printf("\n");
        }
        printf("\n");
    }
}
