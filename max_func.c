#include<stdio.h>

int max(int a, int b){
    return a > b ? a : b;
}

int main(){
    int a, b;
    printf("Enter 2 values: ");
    scanf("%d %d", &a, &b);
    int c = max(a, b);
    printf("%d", c);

    return 0;
}