#include <iostream>

using namespace std;

class book{
private:
	string bookName;
	double price;
	int pages;
	string author;
	string genre;
public:
	//default constructor
	book(){
		cout<<"default constructor"<<endl;
	}

	//contsrutor with paramenter
	book(string bName,double p,int page, string a, string g){
		bookName = bName;
		price = p;
		pages = page;
		author=a;
		genre = g;
		cout<<"object created"<<endl;
	}
	//copy consturctor
	book(book &obj){
		bookName = obj.bookName;
		price = obj.price;
		pages = obj.pages;
		author=obj.author;
		genre = obj.genre;
	}
	//desturctor
	~book(){
		cout<<endl<<"the ojbect is distroyed"<<endl;
	}
	void displayData(){
		cout<<bookName<<endl;
		cout<<price<<endl;
		cout<<pages<<endl;
		cout<<author<<endl;
		cout<<genre<<endl;
	}
};

int main(){
	book maths;
	book history("let us c",99,100,"haswant khair","programming");
	history.displayData();
	cout<<endl;
	book c = history;
	c.displayData();

	return 0;
}