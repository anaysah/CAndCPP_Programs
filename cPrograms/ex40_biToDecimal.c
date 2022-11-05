#include <stdio.h>

int binary(int n);
int reverse(int n);

int main(){
    int bi,n;
    printf("enter the no: ");
    scanf("%d",&n);
    bi = binary(n);
    printf("%d",bi);
}

int bi=1;
int binary(int n){
    bi = bi*10+n%2;
    n = n/2;
    if (n!=0) binary(n);
    int revers = reverse(bi);
    return (revers/10);
    // return revers;
}

int reverse(int n){
    int r=0;
    for (int i=0;n>0;++i){
        r=(r*10)+(n%10); 
        n=n/10;
    }
    return r;
}

