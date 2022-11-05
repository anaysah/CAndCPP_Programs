#include <stdio.h>
#include <math.h>

int power(int b,int p);

int main(){
    int p = power(2,3); 
    printf("ans is %d:",p);
}

int power(int b,int p){
    if (p!=0){
        return (b*power(b,p-1));
    }
    else return 1;
}


