#include <stdio.h>
#include "NumClass.h"
int main(){


int number1 = 0;
int number2 = 0;


scanf("%d" "%d", &number1 ,&number2);




printf("The Armstrong numbers are:");
for(int i= number1; i<=number2;i++){
    if(isArmstrong(i)){printf(" %d",i);}
    }
    printf("\n");

    printf("The Palindromes are:");
for(int i= number1; i<=number2;i++){
    if(isPalindrome(i)){printf(" %d",i);}
  }
printf("\n");


    printf("The Prime numbers are:");
for(int i= number1; i<=number2;i++){
    if(isPrime(i)){printf(" %d",i);}
    }
    printf("\n");
    
    printf("The Strong numbers are:");
for(int i= number1; i<=number2;i++){
    if(isStrong(i)){printf(" %d",i);}
   }
    printf("\n");





return 0;
}