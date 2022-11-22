#include <stdio.h>
#include <stdlib.h>
#include "NumClass.h"

int main() {
    int from, to, i;
    fscanf(stdin,"%d %d", &from, &to);

    printf("The Armstrong numbers are:");
    for (i = from; i <= to; i++) if (isArmstrong(i)) printf(" %d", i);
    printf("\n");

    printf("The Palindromes are:");
    for (i = from; i <= to; i++) if (isPalindrome(i)) printf(" %d", i);
    printf("\n");

    printf("The Prime numbers are:");
    for (i = from; i <= to; i++) if (isPrime(i)) printf(" %d", i);
    printf("\n");

    printf("The Strong numbers are:");
    for (i = from; i <= to; i++) if (isStrong(i)) printf(" %d", i);
    printf("\n");

    return 0;
}
