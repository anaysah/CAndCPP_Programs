#include <stdio.h>

int power(int x, int y);

int main(){
	printf("%d",power(3,2));
}

int power(int x, int y){
	if (y==0){
		return 1;
	}
	return (x *power(x,y-1));
}