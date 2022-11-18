#include "utils.h"

int digits(n) {
    int res = 1;
    while (n /= 10) res++;
    return res;
}

int nthdig(int number, int position) {
    while (position--)
        number /= 10;
    return number % 10;
}

int factorial(n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * i;
    }
    return res;
}
