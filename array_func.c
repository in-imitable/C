#include<stdio.h>

void printArray(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d \n", i+1, *(ptr+i));
    }
    
}

int main(){
    int arr[] = {546,84,5,48,564,5,44,5,84};
    printArray(arr, 9);
    return 0;
}