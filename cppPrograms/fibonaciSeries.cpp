#include <iostream>

using namespace std;

void fibonaci(int n,int a=0,int b=1){
	int sum=a+b;
	if (n>0){
		cout<<sum<<endl;
		fibonaci(n-1,b,sum);
	}
	return ;
}

int main()
{
	fibonaci(9);
	return 0;
}