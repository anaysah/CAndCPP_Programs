#include <stdio.h>
#include <ctype.h>
  
int main(){
    char c ;
    printf("enter your character: ");
    scanf("%c",&c);

    int lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    int uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // printf("the lower is %d",lowercase_vowel);


    if (!isalpha(c)){
        printf("pls enter a correct alphabet");
    }
    else if (lowercase_vowel==1 || uppercase_vowel==1){
        printf("the char is vowel");
    }else{
        printf("the char is constant");
    }
    
    }
