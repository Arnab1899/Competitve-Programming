#include<stdio.h>
int main()


{
    char a;

    printf("Enter Your Alphabet:");
    scanf("%c",&a);

    if(a>='a' && a<='z' || a>='A' && a<='Z')
    {
        printf("Its a alphabet.\n");
    }
    else
    {
        printf("This is not a alphabet.\n");
    }

    return 0;
}
