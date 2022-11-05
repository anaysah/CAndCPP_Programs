#include <stdio.h>
#include <ctype.h>
  
int main(){
    int f,s,t;
    scanf("%d %d %d",&f,&s,&t);
    
    if (f>=s && f>=t){
        printf("%d",f);
    }
    else if (s>=f && s>=t){
        printf("%d",s);
    }
    else{
        printf("%d",t);
    }
    
    }
