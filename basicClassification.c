#include <stdio.h>
#include "utils.h"

int isPrime(int n) {
    int i, flag = 0;
    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    return !flag;
}

int isStrong(int x) {
    int sum = 0;
    for (int i = 0; i < digits(x); i++)
    {
        sum += factorial(nthdig(x, i));
    }
    return sum == x;
}
