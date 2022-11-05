#include <stdio.h>

int main(){
    int f=0,s=1,no;
    printf("enter the no: ");
    scanf("%d",&no);
    int sum;
    printf("%d\n%d\n",f,s);
    for(int i=0;i<=no;++i){
        sum=f+s;
        f=s;
        s=sum;
        printf("%d\n",sum);
    } 
}

