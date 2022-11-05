#include <iostream>
using namespace std;

class a{
    int x = 7;
public:
    void display() {printf("this is a\n");}
};

class b{
public:
    void display() {printf("this is b");}
};

class c: public b, public a{
public:
    void display() {
        a::display();
    }

};

int main(){
    c obj;
    obj.display();
    return 0;
}