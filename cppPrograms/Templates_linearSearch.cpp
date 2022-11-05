// Overload ++ when used as prefix

#include <iostream>
using namespace std;

template <typename T>
int linearSearch(T arr[],int size,T data){
    for(int i=0;i<size;i++){
        if(arr[i]==data) return i;
    }
    return -1;
}

int main() {
    int arr[5] = {4,1,6,2,8};
    printf("the element found at %d\n",linearSearch<int>(arr,5,6));

    float arr1[5] = {4.2,1.6,6.1,2.6,8.2};
    printf("the element found at %d",linearSearch<float>(arr1,5,6.1));
    return 0;
}