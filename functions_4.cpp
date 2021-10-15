#include "middle.h"

long long itc_rev_bin_num(long long number)
{
    number = itc_abs(number);
    if (itc_length(number, 10) > 19 || itc_max_num(number) > 1)
        return -1;
    int result = 0;
    int i = 0;
    while (number != 0)
    {
        result += (number % 10) * itc_pow(2, i);
        number /= 10;
        i++;
    }
    return result;
}

long long itc_rev_oct_num(long long number)
{
    number = itc_abs(number);
    if (itc_length(number, 10) > 17 || itc_max_num(number) > 7)
        return -1;
    long long result = 0;
    int i = 0;
    while (number != 0)
    {
        result += (number % 10) * itc_pow(8, i);
        number /= 10;
        i++;
    }
    return result;
}

long long itc_covert_num(long long number, int ss)
{
    number = itc_abs(number);
    int amount = itc_length(number, ss);
    if (amount > 18)
        return -1;
    long long result = 0;
    while (number != 0)
    {
        result += (number % ss);
        if (number / ss != 0)
            result *= 10;
        number /= ss;
    }
    result = itc_revnbr(result);
    while (itc_length(result, 10) != amount)
        result *= 10;
    return result;
}

long long itc_rev_covert_num(long long number, int ss)
{
    number = itc_abs(number);
    if (itc_length(number, 10) > 18 || itc_max_num(number) > ss - 1)
        return -1;
    long long result = 0;
    int i = 0;
    while (number != 0)
    {
        result += (number % 10) * itc_pow(ss, i);
        number /= 10;
        i++;
    }
    return result;
}
