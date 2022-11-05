#include <stdio.h>
#include <math.h>

int decimal(int n);
int reverse(int n);
int po(int base,int power);

int main(){
    int D,n;
    printf("enter the no: ");
    scanf("%d",&n);
    D = decimal(n);
    printf("%d",D);
}

int D=0;
int power =0;
int decimal(int n){
    D += (n%10)*pow(2,power);
    n = n/10;
    power+=1;
    if (n!=0) decimal(n);
    return D;
}


