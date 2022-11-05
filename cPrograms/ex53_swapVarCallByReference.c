#include <stdio.h>
#include <math.h>

//Swap Numbers in Cyclic Order Using Call by Reference

void swapVar(int *pt1,int *pt2,int *pt3);

int main(){
	int a=1,b=2,c=3;
	swapVar(&a,  &b, &c);
	printf("%d %d %d",a,b,c);
	
}

void swapVar(int *pt1,int *pt2,int *pt3){
	int temp=*pt1;
	*pt1=*pt2;
	*pt2=*pt3;
	*pt3=temp;

}
