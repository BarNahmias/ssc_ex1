#include <stdio.h>
//#include "advancedClassificationRecursion.h"
//#include "advancedClassificationLoop.h"
//#include "basicClassification.h"
#include "NumClass.h"

int main(){
    
    int a = 0,b = 0;
    scanf("%d %d ",&a,&b);

    printf("The Armstrong numbers are: ");
    for(int i=a; i<=b;i++){
        if(isArmstrong(i)==1){
           printf("%d",i);
        }
    }
    printf("The Palindromes are: ");
    for(int i=a; i<=b;i++){
        if(isPalindrome(i)==1){
           printf("%d",i);
        }
    }
    printf("The Prime numbers are: ");
    for(int i=a; i<=b;i++){
        if(isPrime(i)==1){
           printf("%d",i);
        }
    }
    printf("The Strong numbers are: ");
    for(int i=a; i<=b;i++){
        if(isStrong(i)==1){
           printf("%d",i );
        }
    }

}
