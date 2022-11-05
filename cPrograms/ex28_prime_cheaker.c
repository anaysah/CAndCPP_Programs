#include <stdio.h>

int main(){
    int n,count=0;
    printf("enter your no: ");
    scanf("%d",&n);
    for(int i=1;(n/2)>=i;++i){
        if ((n%i)==0){
            count+=1;
        }
    }
    if (count>1 || n==1){
        printf("the no is not a prime");
    }
    else{
        printf("the no is prime");
    }
    
}


//int main(){
//     int n,count=0;
//     printf("enter your no: ");
//     scanf("%d",&n);
//     for(int i=1;(n/2)>=i;++i){
//         if ((n%i)==0){
//             count+=1;
//         }else if (count>1){
// 			printf("the no is not a prime");
// 			break;
// 		}
//     }
//     if  ( !(count>1 || n==1) ){
//         printf("the no is prime");
//     }    
// }

int main(){
//     int n,con=1;
//     printf("enter your no: ");
//     scanf("%d",&n);
//     for(int i=2;(n/2)>=i;++i){
//         if ((n%i)==0){
//             printf("the no is not a prime");
// 			con = 0;
// 			break;
// 			}
//     }
//     if  ( con ){
//         printf("the no is prime");
//     };
// }

#include <stdio.h>

int main(){
    int n;
    printf("enter your no: ");
    scanf("%d",&n);
    for(int i=2;(n/2)>=i;++i){
        if ((n%i)==0){
            printf("the no is not a prime");
			return 0;
			}
    }
    printf("the no is prime");
	return 0;
}