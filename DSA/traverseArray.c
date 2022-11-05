#include <stdio.h>

void traversArray(int arr[],int size){
    printf("The elements are: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int size;
    printf("Please Enter size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Please Enter element line by line:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    traversArray(arr,size);
    return 0;
}
