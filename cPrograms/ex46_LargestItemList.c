#include <stdio.h>


int main(){
    int list[]={2,4,5,1,8,9};
    int size = sizeof(list)/sizeof(list[0]);

    for (int i=0;i<size;++i){
        if (list[0]<list[i]){
            list[0]=list[i];
        }
    }
    printf("%d",list[0]);
    
}


