
#include <stdio.h>
#include "NumClass.h"

int power(int base, int exponent) {
    if (exponent == 0) {return 1;}
    
    else {
        int result = 1;
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        return result;
    }
}

int isArmstrongHelper(int x, int original, int counter, int arm) {
    if (x == 0) {
        return (arm == original) ? 1 : 0;
    } else {
        int sum = x % 10;
        return isArmstrongHelper(x / 10, original, counter, arm + power(sum, counter));
    }
}

int isArmstrong(int x) {
    int y = x;
    int counter = 0;

    while (y >= 1) {
        y /= 10;
        counter++;
    }

    return isArmstrongHelper(x, x, counter, 0);
}
int powerOf10(int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= 10;
    }
    return result;
}

int isPalindromeHelper(int p, int z, int counter) {
    if (counter <= 1) {
        return 1;
    } else {
        int h = p % 10;
        int b = (z / powerOf10(counter - 1)) % 10;

        if (h != b) {
            return 0;
        }

        return isPalindromeHelper(p / 10, z / 10, counter - 2);
    }
}



int isPalindrome(int x) {
    int counter = 0;
    int y = x;
    int z = x;

    while (y >= 1) {
        y /= 10;
        counter++;
    }

    return isPalindromeHelper(z, z, counter);
}