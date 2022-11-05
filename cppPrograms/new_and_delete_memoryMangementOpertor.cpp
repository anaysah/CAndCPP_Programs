#include <iostream>
using namespace std;

int * pt = new int(9);


int main(){
	int * pt = new int(10);
	cout<<*pt<<endl;
	int * ptr = new int[10]{10,2,13,2};
	cout<<ptr[9];
	delete [] ptr;
	return 0;
    
}