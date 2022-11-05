#include <stdio.h>
#include <math.h>
#include <ctype.h>
  
int main(){
    char c;
    printf("enter the character: ");
    scanf("%c",&c);
    if (isalpha(c)){
        printf("the enter charater is alphabet");
    }
    else{
        printf("the enter charater is not a alphabet");
    }
}
