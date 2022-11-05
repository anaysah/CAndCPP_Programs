#include <stdio.h>

int HCF(int f,int s);

int main(){
    int fac,f,s;
    printf("enter the no: ");
    scanf("%d %d",&f,&s);
    fac = HCF(f,s);
    printf("%d",fac);
}

int hcf=1;
int divisor=2;
int HCF(int f,int s){
    if (f%divisor==0 && s%divisor==0){
            hcf*=divisor;
            f=f/divisor;
            s=s/divisor;
            }
    else{
            divisor+=1;
    }
    if(!(divisor>f || divisor>s)){
            HCF(f,s);
    }
    return hcf;

}

