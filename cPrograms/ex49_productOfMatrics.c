#include <stdio.h>
#include <math.h>

//this program is for multiplication on matrics

int main(){
    int f[3][3]={{1,2,3},{4,5,6},{1,2,3}};
    int s[3][3]={{3,2,1},{4,5,6},{3,2,1}};
    int size = sizeof(f)/sizeof(f[0]);
    int mul[size][size];

    int sum=0;
    // int count =0;
    for(int term=0;term<size;term++){
        for (int r=0; r<size;++r){
            for(int c=0;c<size;++c){
                sum+=f[r][c]*s[c][term];
            }
            mul[r][term]=sum;
            sum=0;
        }

    }
    
    for(int r=0;r<size;++r){
        for(int c=0;c<size;++c){
            printf("%d  ",mul[r][c]);
        }
        printf("\n");
    }

}

