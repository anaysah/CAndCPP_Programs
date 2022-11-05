#include <iostream>
#include <math.h>
// #include <cstdarg>
using namespace std;

class interest{
public:
	float P,R;
	int T;
	void setData(double, double,int);
	float simpleInterest(){return ((P*R*T)/100);}
	double compoundInterest(){
		double ci = P*(pow((1+(R/100)),T));
		return ci;
	}
};

void interest::setData(double p,double r,int t){
	P = p;
	R = r;
	T = t;
}

main(){
	interest i1;
	i1.setData(2000,2,2);
	cout<<"simpleInterest:"<<i1.simpleInterest()<<endl;        //member accessing opertor
	cout<<"compoundInterest:"<<i1.compoundInterest()<<endl;    //member accessing opertor

	interest i2;
	interest * pt_i2=&i2;                    //pointer to object
	float interest::*pt_P=&interest::P;      //pointer to class member
	float interest::*pt_R=&interest::R;      //pointer to class member
	int interest::*pt_T=&interest::T;       //pointer to class member
	i2.*pt_P = 2000;                         //access of object member
	i2.*pt_R= 2;                            //access of object member
	i2.*pt_T= 2;                            //access of object member
	
	cout<<endl<<"compoundInterest:"<<pt_i2->compoundInterest()<<endl;   //access of funtion with pointer to object
	cout<<"simpleInterest:"<<pt_i2->simpleInterest()<<endl;             //access of funtion with pointer to object

	return 0;
}