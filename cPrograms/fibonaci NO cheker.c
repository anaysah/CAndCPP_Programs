#include <stdio.h>

int main(){
	int n1=0,n2=1,sum=0,n=233;
	while (sum<n){
		sum = n1+n2;
		n1 = n2;
		n2 = sum;
	}
	if (sum==n){
		printf("yes");
	}
}
