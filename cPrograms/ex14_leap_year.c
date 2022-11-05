#include <stdio.h>
#include <math.h>
// #include <ctype.h>
  
int main(){
    int year;
    printf("enter the year: ");
    scanf("%d",&year);
    if (year%4==0){
        if (year%100==0){
            if (year%400){
                printf("it is a leap year");
            }else {
                printf("it is not a leap year");
            }
        }
        else {
            printf("it is a leap year");
        }
    }
    else{
        printf("year is not a leap year");
    }
    }
