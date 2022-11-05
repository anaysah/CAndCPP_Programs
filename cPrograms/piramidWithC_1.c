#include <stdio.h>

int main(){
	int row=5;
	for (int r=1;r<=row;r++){
		for (int c = 1; c <= (row+r-1); ++c){
			if (row-r<c) printf("*");
			else printf(" ");
		}
		printf("\n");
	}

};




