#include<stdio.h>

int main(){
    int arr[4];
    int *ptr;
    // ptr = &arr[0];
    ptr = arr;
 
    for(int i = 0; i < 4; i++){
        printf("Value %d: ", i+1);
        scanf("%d", ptr);
        ptr++;
    }
    for(int i = 0; i < 4; i++){
        printf("%dst Value is %d with address %d\n", i+1, arr[i], &arr[i]); 
    }

    return 0;
}