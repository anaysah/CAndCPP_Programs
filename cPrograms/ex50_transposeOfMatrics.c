#include <stdio.h>
#include <math.h>

//this program is for transpose of matrics

int main(){
    int f[3][3]={{1,2,3},{4,5,6},{1,2,3}};
    int size = sizeof(f)/sizeof(f[0]);
    int trans[size][size];
    for (int r=0;r<size;++r){
        for(int c=0;c<size;++c){
            trans[c][r]=f[r][c];
        }
    }

    for (int r=0;r<size;++r){
        for(int c=0;c<size;++c){
            printf("%d ",trans[r][c]);
        }
        printf("\n");
    }
    
}

