#include <stdio.h>

int factorial(int n);

int main(){
    int fac = factorial(5);
    printf("%d",fac);
}

int factorial(int n){
    if (n!=1){
        return (n*factorial(n-1));
    }
    else return 1;
}

