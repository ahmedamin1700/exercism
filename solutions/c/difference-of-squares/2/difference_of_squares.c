#include "difference_of_squares.h"
#include <stdlib.h>

unsigned int sum_of_squares(unsigned int number)
{
    unsigned int total = 0;
    for (unsigned int i = 1; i <= number; i++) {
        total += i * i;
    }
    return total;
}

unsigned int square_of_sum(unsigned int number)
{
    unsigned int total = 0;
    for (unsigned int i = 1; i <= number; i++) {
        total += i;
    }
    return total * total;
}

unsigned int difference_of_squares(unsigned int number)
{
    unsigned int s1 = sum_of_squares(number);
    unsigned int s2 = square_of_sum(number);
    return abs((int)s2 - (int)s1);
}
