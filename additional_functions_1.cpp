#include "middle.h"

long long itc_abs(long long a)
{
    if (a < 0)
        a *= -1;
    return a;
}

int itc_length(long long num, int del)
{
    int i = 0;
    if (num == 0)
        i = 1;
    else
    {
        while (num != 0)
        {
            num /= del;
            i++;
        }
    }
    return i;
}

long long itc_revnbr(long long num)
{
    long long result = 0;
    bool isNegative = false;
    if (num < 0)
    {
        isNegative = true;
        num = itc_abs(num);
    }
    while (num != 0)
    {
        result += num % 10;
        if (num / 10 != 0)
            result *= 10;
        num /= 10;
    }
    if (isNegative)
        result *= -1;
    return result;
}

double itc_pow(double n, int i)
{
    if (i < 0)
    {
        n = 1 / n;
        return n * itc_pow(n, itc_abs(i) - 1);
    }
    else if (i == 0)
    {
        return 1;
    }
    else
    {
        return n * itc_pow(n, i - 1);
    }
}

