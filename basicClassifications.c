#include <stdio.h>
#include "NumClass.h"

int isPrime(int x){

if(x == 1){return 1;}
if(x<1){return 0;}

for (int i = 2; i < x; i++){if(x%i == 0){return 0;}}

return 1;
}

int isStrong(int x) {
    int original = x;
    int sum = 0;

    while (x >= 1) {
        int rightDigit = x % 10;
        int factorial = 1;

        for (int i = 1; i <= rightDigit; i++) {
            factorial = factorial * i;
        }

        sum += factorial;

        if (sum > original) {
            return 0;
        }

        x /= 10;
    }

    return (sum == original) ? 1 : 0;
}