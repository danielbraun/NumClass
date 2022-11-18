#include <stdio.h>
#include "utils.h"

int isPrime(int n) {
    if (n == 0 || n == 1)
        return 1;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isStrong(int x) {
    int sum = 0;
    for (int i = 0; i < digits(x); i++) {
        sum += factorial(nthdig(x, i));
    }
    return sum == x;
}
