#include <stdio.h>
// #include <math.h>
// #include <ctype.h>
  
int main(){
    int no;
    printf("enter the no: ");
    scanf("%d",&no);
    int fac=1;
    for (int i=1;i<=no;++i){
        fac=fac*i;
    }
    printf("%d",fac);
}

