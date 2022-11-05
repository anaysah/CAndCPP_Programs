#include <iostream>
using namespace std;


int main(){
	const int a = 7;      
	int b = 8;
	int * const ptr = &a; // constant pointer
	const int * ptr = &a; //pointer to constant varibale
	// *ptr = 9;
	ptr = &b;
	cout<<*ptr;
	return 0;
    
}