#include <stdio.h> 
#include <math.h>
#include "advancedClassificationLoop.h"

int isArmstrong(int i){
    int j=i;
    int sum=0;
    int exponent = 0;
    while(j<=0){
     j=j/10;
     j=j%10;
     exponent ++;
    }
    while(j<=0){
     j=j/10;
     j=j%10;
    sum=sum+pow(j,exponent); 
    }
    if(sum==i){
       } return 1;
    return 0; } 

    int isPalindrome(int p){
    int r=p;
    int polirev= 0;
    int rest;
    
    while (r != 0) {
        rest = r % 10;
        polirev = polirev * 10 + rest;
        r /= 10;
    }
    if (polirev == p){
        return 1;}

    return 0;
    }
