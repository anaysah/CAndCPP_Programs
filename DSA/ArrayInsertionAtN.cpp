#include <iostream>

using namespace std;

int main()
{
	int arr[7] = {2,5,6,1,8,'\0'};
	int n=2,num=10,temp,i;
	for(i=n+1;;i++){
		temp = arr[i];
		arr[i] = arr[n];
		arr[n]=temp;
		if(arr[i]=='\0'){
			arr[n] =num;
			break;
		}
	}

	for(i=0;i!=7;i++){
		cout<<arr[i]<<endl;
	}

	return 0;
}