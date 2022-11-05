#include <iostream>

using namespace std;

class ComplexN{
private:
	int real;
	float image;
public:
	ComplexN(int r,float img){
		real = r;
		image = img;
	}
	int getReal(){
		return real;
	}
	float getImage() {return image;}
	void displayNo(){
		cout<<real<<" + "<<image<<"i"<<endl;
	}
};

ComplexN AddComplexN(ComplexN n1, ComplexN n2){
	ComplexN n3(n1.getReal()+n2.getReal(),n1.getImage()+n2.getImage());
	return n3;
}


int main(){
	ComplexN n1(4,5),n2(5,9); 
	// n1.displayNo();
	ComplexN n3 = AddComplexN(n1,n2);
	n3.displayNo();

	cout<<"printing the data of c3 by a pointer"<<endl;
	ComplexN *ptr1;
	ptr1 = &n3;
	ptr1->displayNo();

	ptr1 = &n2;
	ptr1->displayNo();

	cout<<ptr1;
	return 0;
}