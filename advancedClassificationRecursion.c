#include <stdio.h> 
#include <math.h>
#include "advancedClassificationRecursion.h"




int exponen(int i){
    int exponent = 0;
    int j=i;
    while(j!=0){
      j=j/10;
     exponent= exponent +1;
    }return exponent;}


int isArmstrongRec(int a, int b){
        if(a==0){
            return 0;
        }
         if(a>0){
         return (pow(a%10,b) + isArmstrongRec(a/10,b));}
         }
         
         

int isArmstrong(int a){
    int exponent = exponen(a);
     int ans=isArmstrongRec(a, exponent);
     if(ans==a){
         return 1;
     }
    return 0;
    }


int reversePalindrome(int num)
{
    int digit = (int) log10(num);
    if(num == 0)
        return 0;
    return ((num%10 * pow(10, digit)) + reversePalindrome(num/10));
}


int isPalindrome(int p){
    int ans =reversePalindrome(p);
    if(ans==p){
        return 1;
    }return 0;

}




