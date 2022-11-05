#include <stdio.h>
#include <math.h>

//this program is for addition of matrics

int main(){
    int fMatrics[3][3]={{2,3,4},{1,6,9},{1,2,3}};
    int sMatrics[3][3]={{14,3,4},{10,2,6},{11,12,33}};
    int size = sizeof(fMatrics)/sizeof(fMatrics[0]);
    for(int r=0;r<size;++r){
        for(int c=0;c<size;++c){
            fMatrics[r][c]+=sMatrics[r][c];
        }
    }
    for(int r=0;r<size;++r){
        for(int c=0;c<size;++c){
            printf("%d  ",fMatrics[r][c]);
        }
        printf("\n");
    }

}

