#include <stdio.h>

struct adress
{
    int houseNO;
    int GaliNo;
};

int sum(struct adress a){
    int c = a.houseNO+a.GaliNo;
    return c;
}

int  main() {
    struct adress ajay;
    ajay.houseNO =2;
    ajay.GaliNo = 2;
    printf("%d" , sum(ajay));
}