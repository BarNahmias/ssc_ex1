#include <stdio.h>
#include <math.h>
#include "NumClass.h"


int main(){

    int a = 0,b = 0;
    scanf("%d",&a);
    scanf("%d",&b);

    printf("The Armstrong numbers are:");
    for(int i=a; i<=b;i++){
        if(isArmstrong(i)==1){
            printf(" ");
           printf("%d",i);
            
        }
    }
    printf("The Palindromes are:");
    for(int i=a; i<=b;i++){
        if(isPalindrome(i)==1){
           printf(" ");
           printf("%d",i);
        }
    }
    printf("The Prime numbers are:");
    for(int i=a; i<=b;i++){
        if(isPrime(i)==1){
            printf(" ");
           printf("%d",i);
        }
    }
    printf("The Strong numbers are:");
    for(int i=a; i<=b;i++){
        if(isStrong(i)==1){
           printf(" ");
           printf("%d",i );
           
        }
    }
return 0;
}
