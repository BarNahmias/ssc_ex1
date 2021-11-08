#include <stdio.h> 
#include <math.h>
#include "NumClass.h"

int exponen(int i){
    int exponent = 0;
    int j=i;
    while(j!=0){
      j=j/10;
     exponent= exponent +1;
    }return exponent;}



int isArmstrong(int i){
    int exponent = exponen(i);
    int e;
    int j=i;
    int sum=0;
    while(j!=0){
     e=j%10;
     sum=sum+pow(e,exponent); 
     j=j/10;
     if(sum==i){
      return 1; }
    } 
    return 0; }  


    int isPalindrome(int p){
    int r=p;
    int polirev= 0;
    int rest;
    
    while (r != 0) {
        rest = r % 10;
        polirev = polirev * 10 + rest;
        r = r/10;
    }
    if (polirev == p){
        return 1;}

    return 0;
    }
