#include <stdio.h>

int main(){
    int f,s;
    printf("enter both no with space: ");
    scanf("%d %d",&f,&s);
    int divisor=2;
    int lcm=1;
    while (f!=1 || s!=1){
        if (f%divisor==0 || s%divisor==0){
            lcm*=divisor;
            printf("lcm %d\n",lcm);
            if (f%divisor==0)f=f/divisor;
            if (s%divisor==0)s=s/divisor;
            printf("%d %d\n",f,s);
        }
        else{
            divisor+=1;
            printf("divisor %d\n",divisor);
        }
    }
    printf("lcm is: %d",lcm);
    
}

