#include <stdio.h>
#include <math.h>

//this program is for standard deviation

int main(){
    float list[]={4,5,10,8,2,4};
    int size = sizeof(list)/sizeof(list[0]);
    float avg;
    for (int i=0;i<size;++i){
        avg+=list[i];
    }
    avg/=size;

    printf("%f\n",avg);
    
    float varience;
    for (int i=0;i<size;++i){
        varience+=pow(list[i]-avg,2);
    }
    float SD=sqrt(varience/size);
    printf("%f",SD);

}

