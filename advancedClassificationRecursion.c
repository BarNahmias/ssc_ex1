#include <stdio.h> 
#include <math.h>
#include "advancedClassificationRecursion.h"



int isArmstrong(int a){
    int exponent = 0;
    int j=a;
    while(j<=0){
     j=j/10;
     j=j%10;
     exponent ++;}
return isArmstrongRec( a, exponent);
}

int isArmstrongRec(int a, int b){
         if(a>0)
         return (pow(a%10,b) + isArmstrong(a/10));
     }
     

int isPalindrome(int p){
    int num = 0;
    int j=p;
    while(j<=0){
     j=j/10;
     j=j%10;
    num ++;}

    int ans =isPalindromeRec(p,num);
    if(ans==p){
        return 1;
    }return 0;

}

int isPalindromeRec(int p ,int n){
    if (n == 0)
        return p;
    p= (p * 10) + (n % 10);
    return isPalindromeRec(p ,n / 10);
}


