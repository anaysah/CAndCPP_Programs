#include <stdio.h>
#define sizeofArr(x) (sizeof(x)/sizeof(x[0]))

int main(){
    int f[2][2]={{2,5},{1,-3}};
    int s[2][2]={{4,-2},{3,2}};
    int sizef = sizeofArr(f);
    int sizefc=sizeofArr(f[0]);
    int sizes = sizeofArr(s[0]);
    int mul[sizef][sizes]; 

    int sum=0;
    for(int term=0;term<sizes;term++){
        for (int r=0; r<sizef;++r){
            for(int c=0;c<sizefc;++c){
                sum+=f[r][c]*s[c][term];
            }
            mul[r][term]=sum;
            sum=0;
        }

    }

    printf("the product of matrics is \n");
    for(int r=0;r<sizef;++r){
        for(int c=0;c<sizes;++c){
            printf("%d  ",mul[r][c]);
        }
        printf("\n");
    }

}

