#include <iostream>
using namespace std;
#define large(a,b,c) largestOfThree(a,b,c)

inline int largestOfThree(int a,int b,int c){
    return (a>b && a>c)? a: ((b>c && b>a)? b: c);
}
  
int main(){
    int a,b,c;
    cout<<"Enter first no: ";
    cin>>a;
    cout<<"Enter second no: ";
    cin>>b;
    cout<<"Enter the third no: ";
    cin>>c;
    cout<<"The largest value is: "<<large(a,b,c)<<endl;
    return 0;
}
