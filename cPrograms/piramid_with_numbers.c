#include <stdio.h>

int main(){
	int row=4,count=0;
	for (int r = 1; r <= row; ++r)
	{
		for (int c = 1; c<row+r; ++c)
		{
			if (c<=row-r){
				printf("  ");
			}
			else if (c<=row){
				count++;
				printf(" %d",count );
			}
			else{
				count--;
				printf(" %d",count);
			}
		}
		count=0;
		printf("\n");
	}
	return 0;
}