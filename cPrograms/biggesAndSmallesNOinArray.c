#include <stdio.h>
#include <string.h>

int main(){
    int size =5;
	int ar[size] = {4,6,7,3,2};
    int big=0,small=ar[0];
    for (int r=0;r<size;r++){
        if (ar[r]>big) big = ar[r];
        else if (ar[r]<small) small = ar[r];
    }
    printf("%d %d",big,small);

}
