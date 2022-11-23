#include "NumClass.h"
#include <math.h>

int isArmstrong(int n) {
    int sum = 0,
        original = n,
        digits = ((int) log10(n)) + 1;

    while (n > 0) {
        sum += pow(n % 10, digits);
        n = n / 10;
    }
    return original == sum;
}

int isPalindrome(int n) {
    int remainder, temp = n, sum = 0;

    while (temp > 0) {
        remainder = temp % 10;
        sum = (sum * 10) + remainder;
        temp = temp / 10;
    }

    return sum == n;
};
