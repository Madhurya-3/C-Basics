#include <stdio.h>

int main() 
{
    int n = 5; // Size of the spiral pattern
    int matrix[n][n]; // Matrix to store the spiral pattern
    int value = 1; // Value to be filled in the matrix
    int rowStart = 0, rowEnd = n - 1, colStart = 0, colEnd = n - 1;

    while (rowStart <= rowEnd && colStart <= colEnd) 
        { // Fill the top row
        for (int i = colStart; i <= colEnd; ++i)
        {
            matrix[rowStart][i] = value++;
        }
        rowStart++;

        // Fill the right column
        for (int i = rowStart; i <= rowEnd; ++i)
        {
            matrix[i][colEnd] = value++;
        }
        colEnd--;

        // Fill the bottom row
        if (rowStart <= rowEnd) 
        {
            for (int i = colEnd; i >= colStart; --i) 
            {
                matrix[rowEnd][i] = value++;
            }
            rowEnd--;
        }

        // Fill the left column
        if (colStart <= colEnd)
        {
            for (int i = rowEnd; i >= rowStart; --i)
            {
                matrix[i][colStart] = value++;
            }
            colStart++;
        }
    }

    // Print the spiral pattern
    printf("Spiral pattern:\n");
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/*
Spiral pattern:
 1  2  3  4  5 
16 17 18 19  6 
15 24 25 20  7 
14 23 22 21  8 
13 12 11 10  9 
*/
