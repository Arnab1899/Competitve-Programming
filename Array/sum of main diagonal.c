#include<stdio.h>
int main()
{
    int str[3][3];
    int row,col;
    int sum = 0;

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d",&str[row][col]);
        }
    }

for(row=0; row<3; row++)
{
    sum +=str[row][row];
}
printf("Sum of Diagonal Elements: %d",sum);

return 0;
}
