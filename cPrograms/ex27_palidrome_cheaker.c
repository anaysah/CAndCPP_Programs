#include <stdio.h>

int main(){
    int n,rev=0;
    int temp=n;
    printf("enter your no: ");
    scanf("%d",&n);
    for(int i =0;n!=0;++i){
        rev = (rev*10)+n%10;
        n=n/10;
    }
    if (temp==rev)
        printf("the no is palidrome");
    else 
        printf("the no is not a palidrome");
    
}

