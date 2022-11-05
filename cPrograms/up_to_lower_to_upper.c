#include <stdio.h>

char to_upper(char ch);
char to_lower(char ch);

int main(){
	printf("%c",to_lower('Z'));
}

char to_upper(char ch){
	int d;
	if (ch>=97 && ch<=122){
		d = ch-32;
	}
	return d;
}

char to_lower(char ch){
	int d;
	if (ch>=65 && ch<=90){
		d = ch+32;
	}
	return d;
}