#include "grains.h"

uint64_t square(uint8_t index)
{
    return pow(2, index - 1);
}

uint64_t total()
{
    uint64_t total = 0;
    for (int i = 1; i <= 64; i++)
    {
        total += pow(2, i - 1);
    }

    return total;
}