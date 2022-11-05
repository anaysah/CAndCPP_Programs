#include <iostream>
#include <cstdarg>
using namespace std;


void travers(int count,...){
	va_list list;
	va_start(list,count);
	for(int i =1;i <count;i++){
		cout<<va_arg(list,int)<<" ";
	}
	va_end(list);
}

main(){
	travers(6,5,7,8,9,0);
	return 0;
    
}