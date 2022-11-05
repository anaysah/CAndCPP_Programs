#include <iostream>
// #include <cstdarg>
using namespace std;

class item{
	static int count;
	int code;
public:
	void insertCode(int z){
		code = z;
		count++;
	}
	void display() {cout<<"Code:"<<code<<endl;}
	static void disCount(){cout<<"count is:"<<count<<endl;}
};

int item::count=2;

main(){
	item i1,i2,i3;
	i1.insertCode(9);
	i2.insertCode(10);
	i3.insertCode(10);

	i2.display();
	item::disCount();
	return 0;
    
}