#include <stdio.h>

// int main(void)
// {
//     const int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }

///////////////////////////////////////////////////////////
// int main(void)
// {
//     int n = get_int("Size: ");
//     while ( n < 1)
//     {
//         n = get_int("Size: ");
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }

// ///////////////////////////////////////////////////////////
// int main(void)
// {
//     // Get size of grid
//     int n;
//     do
//     {
//         n = get_int("Size: ");
//     }
//     while (n < 1);

//     // Print the grid
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }

///////////////////////////////////////////////////////////
int get_size(void)
void print_grid(int size)
int main(void)
{
    // Get size of grid

    // Print the grid

}


int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}