#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void)
{
    int i = get_positive_int();
    
    for (int n = 1; n <= i; n++)
    {
        for (int j = i; j > n; j--)
        {
            putchar(' ');
        }
        for (int h = 0; h < n; h++)
        {
            // printf("h = %i, j = %i, i = %i", h, j, i);
            // printf("h = %i, j = %i", h, j);
            printf("#");
        }
        printf("\n");
    }
}

// Prompt user for positive integer
int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    return n;
}