#include <stdio.h>

int main(){
	int list[8] = {4,1,7,9,2,3,0,7},r;
	int length = sizeof(list)/sizeof(list[0]);
	for(int i=1;i<length;++i){
		int temp = list[i];
		for(r=i-1;r!=-1;r-=1){
			if (temp<list[r]){
				list[r+1]=list[r];
				list[r]=temp;
			}else{
				break;
			}
		}
	}
	for (int z=0;z<length;z++){
		printf("%d,",list[z]);
	}
	// // int i=9;
	// for(int i=10;i==5;i-=1){
	// 	printf("no\n");
	// }
	// printf("%d",i);
}
