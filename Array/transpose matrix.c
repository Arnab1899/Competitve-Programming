#include <stdio.h>

int main()
{
    int A[3][3];
    int B[3][3];

    int row, col;

    printf("Enter elements in matrix of size: \n", A[3][3],B[3][3]);
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {

            B[col][row] = A[row][col];
        }
    }

    printf("Transpose of matrix: \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d \t", B[row][col]);
        }

        printf("\n");
    }

    return 0;
}


