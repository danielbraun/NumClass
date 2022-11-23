#include "NumClass.h"
#include <math.h>

int armstrong(int n, int digits) {
    return (n > 0) ? pow(n % 10, digits) + armstrong(n / 10, digits) : 0;
}

int isArmstrong(int n) {
    return n == armstrong(n, ((int)log10(n)) + 1);
}

int reverseNumber(int n) {
    return (n < 10) ? n : (n % 10) * pow(10, (int)log10(n)) + reverseNumber(n/10);
}

int isPalindrome(int n) {
    return n == reverseNumber(n);
}
