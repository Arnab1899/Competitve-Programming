#include<stdio.h>
#include<string.h>

int main ()
{
    char arry [1000];
    scanf("%s", &arry);
       if ( arry[0] >= 97 && arry[0]<=122)
       {
           arry[0]=arry[0]-32;
       }
     printf("%s",arry);

     return 0;
}
