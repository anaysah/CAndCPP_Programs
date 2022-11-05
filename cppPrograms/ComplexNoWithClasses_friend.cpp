#include <iostream>
using namespace std;

class Complex{
    double r;
    double i;
public:
    Complex(){}
    Complex(double real,double img){
        r = real;
        i = img;
    }
    double getReal(){
        return r;
    }
    double getImage() {return i;}
    void displayNo(){
        cout<<r<<" + "<<i<<"i"<<endl;
    }
    friend Complex AddComplex(Complex n1, Complex n2);
    friend Complex SubtractComplex(Complex n1, Complex n2);
    friend Complex ProductComplex(Complex n1, Complex n2);
};

Complex AddComplex(Complex n1, Complex n2){
    Complex n3(n1.r+n2.r,n1.i+n2.i);
    return n3;
}

Complex SubtractComplex(Complex n1, Complex n2){
    Complex n3(n1.r-n2.r,n1.i-n2.i);
    return n3;
}


Complex ProductComplex(Complex n1, Complex n2){
    Complex n3(n1.r*n2.r-n1.i*n2.i,n1.i*n2.r+n1.r*n2.i);
    return n3;
}

int main(){
    double r1,i1,r2,i2;
    cout<<"Enter the real of first No: ";
    cin>>r1;
    cout<<"Enter the image of first No: ";
    cin>>i1;
    cout<<"Enter the real of second No: ";
    cin>>r2;
    cout<<"Enter the image of second No: ";
    cin>>i2;
    Complex n1(r1,i1),n2(r2,i2);

    cout<<"addition"<<endl;
    AddComplex(n1,n2).displayNo();
    cout<<"subtract"<<endl;
    SubtractComplex(n1,n2).displayNo();
    cout<<"product"<<endl;
    ProductComplex(n1,n2).displayNo();

    return 0;
}