#include<stdio.h>
#include<string.h>

int main ()
{
    char write[1000];

    scanf("%c",&write);

    int len  = strlen(write);
    int sum  = 0;

    while(len--)
    {
        sum += ((char)write[len]-96);
    }

    printf("%d\n",sum);



return 0;
}
