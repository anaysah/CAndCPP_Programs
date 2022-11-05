#include <stdio.h>
#include <math.h>

//access elements of array with pointers

int main(){
	int data[]={2,4,7,1};
	int index ;
	scanf("%d",&index);
	printf("%d",*(data+index));
}

