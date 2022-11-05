#include <stdio.h>
  
int main(){
    int f=4 , s =5;
    f = f-s;
    s = f+s;
    f = s-f;
    printf("f is %d and s is %d",f,s);
    
}