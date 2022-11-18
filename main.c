#include <stdio.h>
#include <stdlib.h>
#include "NumClass.h"

int main(int argc, char *argv[]) {
    int from = atoi(argv[1]);
    int to = atoi(argv[2]);
    printf("i\tprm?\tstrg?\tarm?\tpal?\n");
    for (int i = from; i <= to; i++) {
        printf("%d\t%d\t%d\t%d\t%d\n",
               i,
               isPrime(i),
               isStrong(i),
               isArmstrong(i),
               isPalindrome(i));
    }
    return 0;
}
