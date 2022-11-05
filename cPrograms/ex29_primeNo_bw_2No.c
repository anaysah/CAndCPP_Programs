#include <stdio.h>

int main(){
    int f,s,count=0;
    printf("enter your no: ");
    // getdata:
    scanf("%d %d",&f,&s);
    // if (!(f>s)){
    //     goto getdata;
    // }
    // printf("yes");
    int i;
    while(f<=s){
    for(i=1;(int)(f/2)>=i;++i){
        if ((f%i)==0){
            count+=1;
        }
    }
    // printf("%d\n",count);
    if (count==1){
        printf("%d\n",f);
    }
    f+=1;
    count=0;
    }
    
}

