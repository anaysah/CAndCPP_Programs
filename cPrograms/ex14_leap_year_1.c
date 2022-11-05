#include <stdio.h>
#include <math.h>
// #include <ctype.h>
  
int main(){
    int year;
    printf("enter the year: ");
    scanf("%d",&year);
    if (year%4==0 && !year%100==0 && year%400){
        printf("year is a leap year");
    }else{
        printf("year is not a leap year");}
    }
