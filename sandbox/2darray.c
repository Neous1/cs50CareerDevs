#include<stdio.h>

int arr[4][4];
int main(void){
    for(int i =0; i < 3; i++){
        for( int j = 0; j< 3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}