#include <iostream>

using namespace std;

class bankAccount{
	string Name;
	int accNo;
	string type;
	int balance;
public:
	void init(string n, int no, string type, int b);
	void deposit(int a);
	void withdraw(int a);
	void showBalance() {cout<<"balance: "<<balance<<endl;};
	void displayData();
};

void bankAccount::init(string n, int no, string t, int b){
	Name = n;accNo=no,type=t;balance=b;
}

void bankAccount::deposit(int a){
	cout<<"\ndeposited: "<<a<<endl;
	balance+=a;
}

void bankAccount::withdraw(int a){
	showBalance();
	if (balance-a>=0) {
		balance-=a;
		cout<<"\nwithdrawn: "<<a<<endl;
	}
	else cout<<"\nBalance is insufficient"<<endl;
}

void bankAccount::displayData(){
	cout<<"\nName:"<<Name<<endl
		<<"Account No:"<<accNo<<endl
		<<"Type:"<<type<<endl;
		showBalance();
}

main(){
	bankAccount b1;
	b1.init("ajay",345,"saving",200);
	b1.displayData();
	b1.deposit(100);
	b1.withdraw(300);
	b1.showBalance();
	b1.displayData();
	return 0;
}