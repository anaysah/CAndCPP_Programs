#include <stdio.h>
#include <complex.h>


int main(){
	int arr[8] ={2,4,5,1,8,9,0,7};
	int size = 8,i,j,temp,pos;

	for(i=0;i<size;i++){
		pos = i;
		for(j=i+1;j<size;j++){
			if(arr[pos]>arr[j]){
				pos = j;
			}
		}
		temp = arr[i];
		arr[i]=arr[pos];
		arr[pos]=temp;
	}

	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	return 0;
    
}