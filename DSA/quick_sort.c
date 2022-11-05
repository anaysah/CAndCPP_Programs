#include <stdio.h>

void swap(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}

int partition(int arr[],int l,int u){
	int i=l,j,pivot=arr[u-1];
	for(j=l;j<u;j++){
		if(pivot>=arr[j]){
			swap(&arr[j],&arr[i]);
			i++;
		}
	}	
	return i-1;
}

void quickSort(int arr[], int low, int high){
    if (low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi);
        quickSort(arr, pi + 1, high);
    }
}

int main(){
	int arr[7] ={130,17,4,10,8,100,90};
	int size = 7,i=0,j,temp,pivot=arr[size-1];

	quickSort(arr,0,size);

	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}

	return 0;
    
}