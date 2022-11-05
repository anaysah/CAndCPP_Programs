#include <stdio.h>

int main();

int main(){
	char a='o';
	switch (a){
		case 'a':
		case 'i':
		case 'e':
		case 'u':
		case 'o':
		printf("yes");
		break;
		default:
		printf("no");
	}
}


// char st[]="aeiou";
// 	for (int i=0;st[i]!='\0';++i){
// 		if ((char)st[i]==a){
// 			printf("yes");
// 			return 0;
// 		}
// 	}
// 	printf("no");
// 	return 0;