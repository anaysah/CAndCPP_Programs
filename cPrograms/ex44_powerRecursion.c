#include <stdio.h>
#include <math.h>

int power(int b,int p);

int main(){
    int p = power(2,0); 
    printf("ans is %d:",p);
}

int ans=1;
int power(int b,int p){
    if (p!=0){
        p-=1;
        ans*=b;
        power(b,p);
    }
    return ans;
}


