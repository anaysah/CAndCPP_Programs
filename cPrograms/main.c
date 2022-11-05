#include <conio.h>
#include <stdio.h>
void main() 
{
	clrscr();
	int a, b, c;
	printf("Enter two numbers");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c) {
		printf("The largest number is % d", a);}
    else if (b > a && b > a) {
		printf("The largest number is % d", b);}
    else {
		printf("The largest number is % d", c);}
	getch();
}