#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /// Get size of grid
    int height, row, column, space;
    do
    {
        height = get_int("height size: ");
    }
    while (height < 1 || height > 8);

    // Print the grid
    for (row = 0; row < height; row++)
    {
        // for (int column = 0; column < height; column++)
        // {
        //     printf("C");
        // }
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("  ");
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}
