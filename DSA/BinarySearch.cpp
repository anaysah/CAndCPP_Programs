#include <iostream>

int binarySearch(int arr[],int size,int num){
	int start=0,pos,last = size;
	do{
		pos = (start+last)/2;
		if (start==pos) return size;
		if (arr[pos]>num) last = pos;
		else if(arr[pos]<num) start = pos;
		std::cout<<"start:"<<start<<" last:"<<last<<std::endl;
		std::cout<<"pos: "<<pos<<std::endl<<std::endl;
	}while(arr[pos]!=num);
	return pos;
}

int main(){
	int size = 10;
	int arr[size] = {1,2,4,5,6,8,9,10,11,13,16,19,20};
	std::cout<<binarySearch(arr,size,12);
	return 0;
}
