#include <iostream>
#include <string.h>
using namespace std;


int main(){
	char str1[100];
	char str2[100];

	cin.getline(str1 , 100);
	cin.get(str2 , 100);

	cin.get(str2 , 100);
	cin.getline(str1 , 100);

	cout<< str1 << " "<<str2;
	return 0;
    
}