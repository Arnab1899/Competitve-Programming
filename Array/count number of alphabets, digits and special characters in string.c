#include<stdio.h>
int main ()
{
    char str[100];
    int a=0,d=0,o=0;
    int i=0;

    printf("Enter String: ");
    gets(str);

    while (str[i]!='\0')
    {
        if(str[i] >='a' && str[i] <='z' || str[i] >='A' && str[i] <='Z')
        {
            a++;
        }
        else if(str[i] >='0' && str[i] <='9')
        {
            d++;
        }
        else
        {
            o++;
        }
        i++;
    }

    printf("Alphabets = %d\n",a);
    printf("Digits = %d\n",d);
    printf("Special characters = %d",o);

    return 0;
}
