#include <iostream>
using namespace std;

class institute{
public:
   institute(){
      cout<<"no data entered"<<endl;
   }
   institute(string name, string hod, string city, int pin){
      cout<<"institute Name: "<<name<<endl
          <<"HOD name: "<<hod<<endl
          <<"City: "<<city<<endl
          <<"Pincode: "<<pin<<endl;
   }
   institute(string name, string hod){
      cout<<"institute Name: "<<name<<endl
          <<"HOD name: "<<hod<<endl;
   }
};

int main() {
   institute i1;
   institute i2("AIT DSEU","XYZ","Delhi",10011);
   institute i3("AIT DSEU","XYZ");
   return 0;
}
