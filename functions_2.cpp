#include "middle.h"

int itc_min_num(long long number)
{
    number = itc_abs(number);
    int minNum = number % 10;
    while (number != 0)
    {
        int a = number % 10;
        if (a < minNum)
            minNum = a;
        number /= 10;
    }
    return minNum;
}

int itc_rev_num(long long number)
{
    return itc_len_num(itc_revnbr(number));
}

int itc_null_count(long long number)
{
    number = itc_abs(number);
    int nullCount = 0;
    if (number == 0)
    {
        nullCount = 1;
    }
    else
    {
        while (number != 0)
        {
            int a = number % 10;
            if (a == 0)
                nullCount++;
            number /= 10;
        }
    }
    return nullCount;
}

bool itc_mirror_num(long long number)
{
    return number == itc_revnbr(number);
}

int itc_mirror_count(long long number)
{
    int amount = 0;
    for (long long i = 1; i <= number; i++)
    {
        if (itc_mirror_num(i))
            amount++;
    }
    return amount;
}
