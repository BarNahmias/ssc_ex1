#include <stdio.h> 
#include <math.h>
#include "NumClass.h"



 int factorial(int f){
        int fact=1;
        while(f!=0){
            fact=fact*f;
            f--;
        }
    return fact;}
    
int isPrime(int p){
if(p==1){
    return 1;
}
    int counter = 0;
    for(int i=p;i>=1;i--){
        if(p%i==0){
            counter++;
        }
    }
       if(counter==2){
        return 1;}
     return 0; 
    }
 

 
  int isStrong(int s){
    int strong = 0;
    int k=s;  
    int r;  
    while(k!=0)  
    {  
        r=k%10;  
        int f=factorial(r);  
        k=k/10;  
        strong=strong+f;}
     if(strong==s){
         return 1;
     } return 0;

    }