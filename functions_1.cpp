#include "middle.h"

void itc_num_print(int number)
{
    cout << number << endl;
}

int itc_len_num(long long number)
{
    int i = 0;
    if (number == 0)
        i = 1;
    else
    {
        while (number != 0)
        {
            number /= 10;
            i++;
        }
    }
    return i;
}

int itc_sum_num(long long number)
{
    number = itc_abs(number);
    int result = 0;
    while (number != 0)
    {
        result += number % 10;
        number /= 10;
    }
    return result;
}

long long itc_multi_num(long long number)
{
    number = itc_abs(number);
    long long result = 1;
    if (number == 0)
        result *= 0;
    else
    {
        while (number != 0)
        {
            int a = number % 10;
            result *= a;
            number /= 10;
        }
    }
    return result;
}

int itc_max_num(long long number)
{
    number = itc_abs(number);
    int maxNum = number % 10;
    while (number != 0)
    {
        int a = number % 10;
        if (a > maxNum)
            maxNum = a;
        number /= 10;
    }
    return maxNum;
}
