#include <stdio.h>

void travers(int arr[10][10],int r,int c){
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void upper(int arr[10][10],int r, int c){
    for(int i = 0;i<r;i++){
        for(int j = 0;j<i;j++){
            arr[i][j] = 0;
        }
    }   
}

void lower(int arr[10][10],int r, int c){
    for(int i = 0;i<r;i++){
        for(int j = i+1;j<c;j++){
            arr[i][j] = 0;
        }
    }   
}

void middle(int arr[10][10],int r, int c){
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if (i!=j && j!=(i-1) && j!=(i+1)) arr[i][j] = 0;
        }
    }   
}

int main(){
    int matrix[10][10] = {{1,4,2},{4,9,1},{1,3,7}};
    int r = 3,c =3;

    printf("Before:\n");
    travers(matrix,3,3);

    printf("lower:\n");
    lower(matrix,3,3);
    travers(matrix,3,3);
    
    int matrix1[10][10] = {{1,4,2},{4,9,1},{1,3,7}};
    printf("upper:\n");
    upper(matrix1,3,3);
    travers(matrix1,3,3);
    
    int matrix2[10][10] = {{1,4,2},{4,9,1},{1,3,7}};
    printf("tridiagonal:\n");
    middle(matrix2,3,3);
    travers(matrix2,3,3);

    return 0;
}