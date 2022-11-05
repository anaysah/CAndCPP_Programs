#include <stdio.h>

int main(){
	int a = 'A',row=5;
	for (int r = 0; r <= row; ++r)
	{
		for (int c = 0; c <= r; ++c)
		{
			printf(" %c",a+c);
		}
		printf("\n");
	}
	return 0;
}