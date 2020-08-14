#include <stdio.h>
#include <stdlib.h>
/*
    Hi, this algorithm is a simple algorithm which
    creates (2n+1)x(2n+1) tables that contains numbers
    from 1 to (2n+1)^2.
    The numbers are in a special order where the sum of the numbers
    on each row and each column and the main diagonals are equal.
*/

// Creating the map
void create(int max, int table[max][max])
{
    int k, x = max / 2, y = 0;
    for (k = 1; k <= max * max; k++)
    {
        if(x >= max && y < 0)
        {
            y+=2;
            x--;
        }
        else if (x >= max)
        {
            x = 0;
        }
        else if (y < 0)
        {
            y = max - 1;
        }
        if (table[y][x] != 0)
        {
            k--;
            y+=2;
            x--;
            continue;
        }
        table[y][x] = k;
        x++;
        y--;
    }
}

// A function for getting a number digits
int digits(int number)
{
    int ans = 0;
    while(number != 0)
    {
        ans++;
        number /= 10;
    }
    return ans;
}

// Printing the map
void print(int max, int table[max][max])
{
    int i, j;
    int max_digits = digits(max * max);
    for ( i = 0; i < max; i++)
    {
        printf("    ");
        for (j = 0; j < max; j++)
        {
            int bound = max_digits - digits(table[i][j]), k;
            for(k = 0; k < bound; k++)
                printf("0");
            printf("%d  ", table[i][j]);
        }
        printf("\n");
    }
}

void reset(int max, int table[max][max])
{
    int i, j;
    for ( i = 0; i < max; i++)
    {
        for (j = 0; j < max; j++)
            table[i][j] = 0;
    }
}

long getTheSum(int max, int table[max][max])
{
    long ans = 0;
    int i;
    for (i = 0; i < max; i++)
        ans += table[0][i];
    return ans;
}

// The program starts
int main()
{
    int max = 5; // Enter an even number to work correctly
    int array[max][max];
    reset(max, array);
    create(max, array);
    print(max, array);
    printf("\n  Sum is : %ld", getTheSum(max, array));
    return 0;
}
