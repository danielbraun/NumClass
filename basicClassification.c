#include "NumClass.h"

int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * i;
    }
    return res;
}

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

int isStrong(int n) {
    int sum = 0, original = n;
    while (n > 0) {
        sum += factorial(n % 10);
        n = n / 10;
    }
    return sum == original;
}
