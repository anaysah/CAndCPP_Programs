#include <stdio.h>
#include <math.h>
// #include <ctype.h>
  
int main(){
    double num;
    printf("enter the no: ");
    scanf("%lf",&num);
    if (num>0){
        printf("the no is positive");
    }
    else if (num<0){
        printf("the no is negative");
    }else{
        printf("the no is 0");
    }
    
}
