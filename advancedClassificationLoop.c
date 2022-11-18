#include <stdio.h>
#include <math.h>
#include "utils.h"
#include "NumClass.h"

int isArmstrong(n) {
    int sum = 0;
    for (int i = 0; i < digits(n); i++)
    {
        sum += pow(nthdig(n, i), digits(n));
    }
    return sum == n;
}

int isPalindrome(n) {
    int remainder, temp = n, sum = 0;

    while (temp > 0)
    {
        remainder = temp % 10;
        sum = (sum * 10) + remainder;
        temp = temp / 10;
    }

    return sum == n;
};
