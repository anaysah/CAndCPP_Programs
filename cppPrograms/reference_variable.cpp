#include <iostream>
#include <string.h>
using namespace std;


int main(){
	int a = 8;
	int c =0;
	int &b = a;
	b = 9;
	b = c;
	cout<<"a:"<<a;
	return 0;
    
}