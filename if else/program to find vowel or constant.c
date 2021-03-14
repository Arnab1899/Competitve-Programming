#include<stdio.h>
int main()
{
    char x;

    printf("Enter Your Word: ");
    scanf("%c",&x);

    if(x == 'A' || x == 'a' || x == 'E' || x == 'e' || x == 'I' || x == 'i' || x == 'O' || x == 'o' || x == 'U' || x == 'u')
    {
        printf("Vowel\n");
    }

    else
    {
        printf("Constant\n");
    }

    return 0;

}
