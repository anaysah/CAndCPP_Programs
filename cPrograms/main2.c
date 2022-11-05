#include <stdio.h>

int sum(int a[],int size);

int main(){
	int size=5;
	int ar[size]={1,2,3,4,5};
	printf("%d\n",sum(ar,5));
	for (int i=0;i<size;i++){
		printf("%d ",ar[i]);
	}
    return 0;
}

int sum(int a[],int size){
	int sum=0;
	for (int i=0;i<size;i++){
		sum+=a[i];
	}
	return sum;
}