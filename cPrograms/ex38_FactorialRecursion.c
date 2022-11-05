#include <stdio.h>

int factorial(int n);

int main(){
    int fac,n;
    printf("enter the no: ");
    scanf("%d",&n);
    fac = factorial(n);
    printf("%d",fac);
}
int mul=1;
int factorial(int n){
    mul*=n;
    n-=1;
    if (n!=1){
        factorial(n);
    }
    return mul;
}

