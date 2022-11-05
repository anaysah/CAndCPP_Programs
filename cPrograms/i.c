#include <stdio.h>

int noOfdigits(){
    int x;
    printf("enter no: ");
    scanf("%d",&x);
    if(x<0 || x>999){
        printf("pls enter bw 0 and 999\n");
        return 0;
    }
    int count=0;
    while(x!=0){
        x = x/10;
        count+=1;
    }
    return count;
}

int main(){
	int n1 = noOfdigits();
    printf("%d\n",n1);
    int n2 = noOfdigits();
    printf("%d\n",n2);
	return 0;
}