#include <stdio.h> 
#include <math.h>
#include <string.h>
#include "basicClassification.h"

int isPrime(int p){
if(p==1){
    return 1;
}
    int counter = 0;
    for(int i=p;i=1;i--){
        if(p%i==0){
            counter++;
        }
    }
       if(counter==2){
       } return 1;
     return 0; 
    }
 
 int factorial(int f){
        int fact=1;
        while(f==0){
            fact=fact*f;
            f--;
        }
    return fact;}
 
 int isStrong(int s){
    int j=s;
    int strong = 0;
    while(j<=0){
     j=j/10;
     j=j%10; 
     strong = strong+ factorial(j); }
     if(strong==s){
         return 1;
     } return 0;

    } 
