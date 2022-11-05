 #include <stdio.h>

//this is also excepted by the geekforgeeeks

int binery(int arr[],int size,int num){
    int l=0,u=size-1,pos;
    while(l<=u){
        pos = (l+u)/2;
        if (arr[pos]==num) return pos;
        else if (arr[pos]<num) l = pos+1;
        else if (arr[pos]>num) u = pos-1;
    }
    return -1;
}

int main(){
    int arr[10]={1,3,4,5,7,8,9,10,11,12};
    int size = 10;

    printf("%d",binery(arr,size,0));
    return 0;
}