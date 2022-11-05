#include <stdio.h>

int primeNo(int n);

int main(){
   int a,prime1,prime2;
   printf("enter no with spaace: ");
   scanf("%d",&a);
   for (int i=2;(int)a/2>=i;++i){
       prime1=primeNo(i);
       prime2=primeNo(a-i);
       if (prime1 && prime2 && prime1+prime2==a){
           printf("yes %d %d\n",prime1,prime2);
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


