#include <stdio.h>

//by using array
//avg of all items of a list

int main(){
    int list[]={2,2};
    int size = sizeof(list)/sizeof(list[0]);

    for (int i=1;i<size;++i){
        list[0]+=list[i];
    }
    list[0] = list[0]/size;
    printf("%d",list[0]);
    
}


