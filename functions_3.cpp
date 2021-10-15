#include "middle.h"

int itc_second_max_num(long long number)
{
    number = itc_abs(number);
    if (number < 10)
        return -1;
    int max1 = itc_max_num(number);
    int max2 = 0;
    int i = 1;
    while (number % 10 != max1)
        i *= 10;
    number -= max1 * i;
    max2 = itc_max_num(number);
    return max2;
}

int itc_second_simple_max_num(long long number)
{
    number = itc_abs(number);
    if (number < 10)
        return -1;
    int max1 = itc_max_num(number);
    int max2 = itc_second_max_num(number);
    if (max1 == max2)
        return -1;
    return max2;
}

long long itc_bin_num(long long number)
{
    number = itc_abs(number);
    int amount = itc_length(number, 2);
    if (amount > 19)
        return -1;
    else
    {
        long long result = 0;
        while (number != 0)
        {
            result += number % 2;
            if (number / 2 != 0)
                result *= 10;
            number /= 2;
        }
        result = itc_revnbr(result);
        while (itc_length(result, 10) != amount)
            result *= 10;
        return result;
    }
}

long long itc_oct_num(long long number)
{
    number = itc_abs(number);
    int amount = itc_length(number, 8);
    if (amount > 18)
        return -1;
    else
    {
        long long result = 0;
        while (number != 0)
        {
            result += number % 8;
            if (number / 8 != 0)
                result *= 10;
            number /= 8;
        }
        result = itc_revnbr(result);
        while (itc_length(result, 10) != amount)
            result *= 10;
        return result;
    }
}
