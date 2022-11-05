#include <iostream>
using namespace std;

class Number{
private:
	int value;
public:
	Number(){
		value = 0;
	}
	void displayValue(){
		cout<<"the value is :"<<value<<endl;
	}
	friend void changeValue(Number &obj,int value);
};

void changeValue(Number &obj,int value){
	obj.value = value;
}

int main(){
	Number n1;
	n1.displayValue();
	changeValue(n1,10);
	n1.displayValue();
	return 0;
}