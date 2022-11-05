#include <stdio.h>

int main(){
    int f,s;
    printf("enter both no with space: ");
    scanf("%d %d",&f,&s);
    int divisor=2;
    int hcf=1;
    while (!(divisor>f || divisor>s)){
        if (f%divisor==0 && s%divisor==0){
            hcf*=divisor;
            f=f/divisor;
            s=s/divisor;
        }
        else{
            divisor+=1;
        }
    }
    printf("HCF is: %d",hcf);
    
}