#include <stdio.h>

int power(int x, int y);

int main(){
	int n=13,sum=0,count=0,r;
	while (n!=0){
		r = (r*10)+(n%10);
		n=n/10;
		count++;
	}
	while(r!=0){
		sum+=power((r%10), count);
		n = (n*10)+(r%10);
		r=r/10;
	}
	if (sum==n){
		printf("yes");
	}
}

int power(int x, int y){
      if(y == 0)
        return 1;
     return (x * power(x,y-1) );
    }