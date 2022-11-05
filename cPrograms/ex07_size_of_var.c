#include <stdio.h>
  
int main(){
    int inttype;
    float floattype;
    double doubletype;
    char chartype;

    printf("the size of int is %lu bytes\n",sizeof(inttype));
    printf("the size of float is %lu bytes\n",sizeof(floattype));
    printf("the size of double is %lu bytes\n",sizeof(doubletype));
    printf("the size of char is %lu bytes\n",sizeof(chartype));
    return 0;
    
}