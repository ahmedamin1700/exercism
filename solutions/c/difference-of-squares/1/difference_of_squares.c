#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number)
{
    int total = 0;
    for (unsigned int i = 1; i <= number; i++)
    {
        total += i * i;
    }
    return total;
}

unsigned int square_of_sum(unsigned int number)
{
    int total = 0;
    for (unsigned int i = 1; i <= number; i++)
    {
        total += i;
    }
    return total * total;
}
unsigned int difference_of_squares(unsigned int number)
{
    return sum_of_squares(number) - square_of_sum(number);
}
