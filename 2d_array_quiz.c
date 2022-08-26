#include<stdio.h>

void display(int arr[x][y]){
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            arr[i][j] = i+j;
        }
        
    }
    
}

int main(){
    int arr[x][y];
    display(arr);

    printf("Enter the value for row %d and element %d: \n", i+1, j+1, ptr);
    scanf("%d", &arr[i][j]);

    return 0;
}