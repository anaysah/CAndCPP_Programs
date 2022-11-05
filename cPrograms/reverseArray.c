#include <stdio.h>
#include <stdlib.h>

//reverse if array 
// list[r] = list[size-r] // swap forward no with backward no's

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int temp;
    for (int r=0;r<(num/2);++r){
        temp = arr[r];
        arr[r]=arr[num-r-1];
        arr[num-r-1]=temp;
    }
    

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
