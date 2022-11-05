#include <stdio.h>

int main(){
    int n,r=0;
    printf("enter your no: ");
    scanf("%d",&n);
    for (int i=0;n>0;++i){
        r=(r*10)+(n%10); 
        n=n/10;
    }
    printf("%d",r);
}

