#ifndef MIDDLE_H_INCLUDED
#define MIDDLE_H_INCLUDED

#include <iostream>

using namespace std;

void itc_num_print(int number);
int itc_len_num(long long number);
int itc_sum_num(long long number);
long long itc_multi_num(long long number);
int itc_max_num(long long number);
int itc_min_num(long long number);
int itc_rev_num(long long number);
int itc_null_count(long long number);
bool itc_mirror_num(long long number);
int itc_mirror_count(long long number);
int itc_second_max_num(long long number);
int itc_second_simple_max_num(long long number);
long long itc_bin_num(long long number);
long long itc_oct_num(long long number);
long long itc_rev_bin_num(long long number);
long long itc_rev_oct_num(long long number);

long long itc_covert_num(long long number, int ss);
long long itc_rev_covert_num(long long number, int ss);

long long itc_abs(long long num);
int itc_length(long long num, int del);
long long itc_revnbr(long long num);
double itc_pow(double n, int i);

#endif // MIDDLE_H_INCLUDED
