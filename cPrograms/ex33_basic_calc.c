#include <stdio.h>

int main(){
    char o ;
    double f,s;
    printf("enter the no's: ");
    scanf("%lf %lf",&f,&s);
    printf("enter the operator: ");
    scanf(" %c",&o);
    // printf("the o is %c\n",o);
    switch(o){
        case '+':
        printf("the addition is %lf\n",f+s);break;
        case '-':
        printf("the subtraction is %lf\n",f-s);break;
        case '*':
        printf("the multiplication is %lf\n",f*s);break;
        case '/':
        printf("the division is %lf\n",f/s);break;
        default:
        printf("pls enter right operator");

    }
}

