#include <stdio.h>

int SumOfNaturalNo(int n);

int main(){
    int sum,n;
    printf("enter the no: ");
    scanf("%d",&n);
    sum = SumOfNaturalNo(n);
    printf("%d",sum);
}
int add;
int SumOfNaturalNo(int n){
    add+=n;
    n-=1;
    if (n!=0){
        SumOfNaturalNo(n);
    }
    return add;
}

