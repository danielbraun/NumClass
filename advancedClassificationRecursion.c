#include "NumClass.h"
#include <math.h>
#include <stdio.h>
#include "utils.h"

int armstrong(int n, int digits) {
    if (n > 0)
        return pow(n % 10, digits) + armstrong(n / 10, digits);
    else
        return 0;
}

int isArmstrong(n) {
    return n == armstrong(n, digits(n));
}

int isPalindrome(n) {
    int exp = (int) pow(10, digits(n) - 1); // eg. 23233 -> 10000
    if (n < 10)
        return 1;
    else
        return ((n % 10) == n / exp) && isPalindrome(n % exp / 10);
}

/*
int main() {
    // printf("%d\n", isArmstrong(407));
    // printf("%d\n", isArmstrong(406));
    printf("%d\n", isPalindrome(5));
    printf("%d\n", isPalindrome(11));
    printf("%d\n", isPalindrome(4447444));
    printf("%d\n", isPalindrome(736357));
    printf("%d\n", isPalindrome(736352));
    printf("%d\n", isPalindrome(73352));
    printf("%d\n", isPalindrome(1234321));
    printf("%d\n", isPalindrome(12344321));

}
*/
