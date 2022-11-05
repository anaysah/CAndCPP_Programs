#include <stdio.h>
// #include <math.h>
// #include <ctype.h>
  
int main(){
    int no;
    printf("enter no: ");
    scanf("%d",&no);
    int sum=0;
    for(int i=0;i<=no;++i){
        sum = sum+i;
    }
    printf("the no is %d",sum);
}
