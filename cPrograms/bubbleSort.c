#include <stdio.h>


int main(){
    int list[] ={4,2,1,8,10,9,7};
    
    int size = sizeof(list)/sizeof(list[0]);

    int count=1;
    int temp;
    while (count!=0){
        count=0;
        for (int i=0;i!=size-1;++i){
            if (list[i]>list[i+1]){
                temp=list[i+1];
                list[i+1]=list[i];
                list[i]=temp;
                count+=1;
            }

        }
    }
    for (int z = 0; z < size; z++) {     
        printf("%d ", list[z]);     
    }     
    
}


