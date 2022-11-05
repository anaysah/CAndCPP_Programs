#include <stdio.h>
#include <math.h>
// #include <ctype.h>
  
int main(){
    double a,b,c,root;
    scanf("%lf %lf %lf",&a,&b,&c);

    double d = sqrt((b*b)-(4*a*c));
    if (d>=0){
        root = (-b+d)/2*a;
        printf("the root is %lf",root);
    }
    else if (d<0){
        printf("root are imaganari");
    }
    }
