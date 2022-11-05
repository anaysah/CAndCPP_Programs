#include <stdio.h>
#include <complex.h>


int main(){
	int arr[8] ={2,4,5,1,8,9,0,7};
	int size = 8,i,j,temp;

	for(i=0;i<size;i++){
		temp = arr[i];
		for(j=i-1;j>=0 && temp<arr[j];j--){
			arr[j+1]=arr[j];
			// else break;
		}
		arr[j+1]=temp;
	}

	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	return 0;   
}