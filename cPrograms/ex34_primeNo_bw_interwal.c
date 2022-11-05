#include <stdio.h>

void display(int a, int b);
int primeNo(int n);

int main(){
   int a,b;
   printf("enter no with spaace: ");
   scanf("%d %d",&a,&b);
   display(a, b);
}

void display(int a, int b){
    for(int i=a;i<=b;++i){
        int prime=primeNo(i);
        if (prime){
            printf("%d\n",prime);
        }
    }
}
int primeNo(int n){
    int count=0;
    for(int i=1;(int)(n/2)>=i;++i){
        if ((n%i)==0){
            count+=1;
        }
    }
    if (count>1)return 0;
    else return n;

};
