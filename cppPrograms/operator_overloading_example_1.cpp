#include <iostream>
using namespace std;

class net{
    int a,b;
    public:
    net(){}
    net(int a, int b){
        this->a = a;this->b=b;
    }
    net operator-(){
        return net(-a,-b);
    }
    void display(){
        cout<<"a:"<<a<<" b:"<<b<<endl;
    }
    friend void operator-(int,net &);
    friend void operator-(net &,int);
    friend void operator>>(istream , net);
};

void operator-(net &a,int i){
    a.a = a.a-i;
}
void operator-(int i,net &a){
    a.a = a.a-i;
}

void operator>>(istream a, net n){
    a>>n.a;
}

int main(){
    net a1(3,4);
    net a2 = -a1;
    a2.display();
    a2 = a2.operator-();
    a2.display();
    2-a2;
    a2.display();
    return 0;
}