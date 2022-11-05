#include <iostream>
using namespace std;


class S{
	public:
	int x;

	void setx(int i){
		x = i;
	}
	void display(){
		cout<<x<<endl;
	}
};

int main(){
	S s1;
	int S::*ptr = &S::x;
	S *s1ptr = &s1;
	cout<<ptr<<endl;
	s1.*ptr = 9;
	// cout<<s1.display()<<endl;
	s1.display();
	s1ptr->*ptr=20;
	s1.display();
	cout<<s1ptr->*ptr;

	return 0;
    
}