#include <stdio.h>
#include <math.h>

int SoNN(int n);

int main(){
    int p = SoNN(3); 
    printf("ans is %d:",p);
}

int SoNN(int n){
    if (n!=0){
        return (n+SoNN(n-1));
    }
    else return 0;
}


