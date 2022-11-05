#include <stdio.h>

int main(){
    int no;
    printf("enter the no: ");
    scanf("%d",&no);
    for (int i=1;i<=10;++i){
        printf("%d\n",i*no);
    }
}

