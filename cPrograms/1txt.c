topic operator:====
ek toh hota hai operand
ek hota hai operator

2+4
ismei 2 aur 4 operand hai
ismei + hai operator

ab hamare pass c mei kafi tarh ke operator hote hai
Arithmetic operators
Assignment operators
Comparison operators
Logical operators
Bitwise operators

Arithmetic operators+=========+++++++++
+	Addition	Adds together two values	x + y	
-	Subtraction	Subtracts one value from another	x - y	
*	Multiplication	Multiplies two values	x * y	
/	Division	Divides one value by another	x / y	
%	Modulus	Returns the division remainder	x % y	
++	Increment	Increases the value of a variable by 1	++x	
--	Decrement	Decreases the value of a variable by 1	--x

topic Modulas==========
13%2=1 ye operator remider deta hai

topic division opertor 
13/2 = 6
13/2 = 6.5
int/int = int
int/float = float
float/int = float

topic Increment operator ++
a++; //a = a+1
there are two types 
post and preincrement

post a++
example
#include <stdio.h>

int main() {
    int a = 2;
    float b = 13;
	printf("the value of a is %d\n",a++); //now a =3 after printin 2
    printf("the value of a is %d",++a);   //pahale plus kiya aur fir print kiya
	return 0;
    // a ++
    // ++ a
}

#include <stdio.h>

int main() {
    int a = 2;
    a++; //a=3
	printf("the value of a is %d\n",a++); //a==4
    printf("the value of a is %d\n",++a);  //a=5
    --a; //a=4
    printf("%d",a);
	return 0;
}

Assignment operators
jab bhi hame koi varibale mei data store karna ho toh ham isse use karte hai
= equal to hota hai ye

"+=" operator
example:==========
#include <stdio.h>

int main() {
    int a = 3;
    a = a+2; //a= 3+2=5
    a+=2; // ye same ya a = a+2 ke
    printf("%d",a); //out put a = 7
	return 0;
}

Comparison Operators
jab bhi hame koi camparisoin karna hota hai tab ham ye use karte hai
