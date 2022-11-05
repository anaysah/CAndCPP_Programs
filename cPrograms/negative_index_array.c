#include <stdio.h>

int main(){
	char list[]="ajay";
	int length = sizeof(list)-1;
	printf("the length of list is: %d\n",length);
	printf("the char at index -1 is: '%c'",list[length-1]);
	return 0;	
}