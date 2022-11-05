#include <stdio.h>

int main(){
    int base,power;
    printf("enter your no: ");
    scanf("%d %d",&base,&power);
    int ans = base;
    for (int i=1;i<power;++i){
        ans*=base;
    }
    printf("%d",ans);
}

