#include<stdio.h>
int main ()
{
    float c,f;
    printf("Enter Your Temp:");
    scanf("%f",&f);

    c=(f-32)*5/9;
    {
        printf("%.2f",c);
    }
    return 0;
}
