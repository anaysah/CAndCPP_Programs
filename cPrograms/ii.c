#include <stdio.h>

void game(){
    int x,y;
    printf("enter no x: ");
    scanf("%d",&x);
    printf("enter no y: ");
    scanf("%d",&y);

    if (x+y>=9) printf("Win");
    else printf("Lose");
}

int main(){
	game();
	return 0;
}