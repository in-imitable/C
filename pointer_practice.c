#include<stdio.h>

void changeValue(int *i);

int main(){
    int a = 85;
    changeValue(&a);
    return 0;
}

void changeValue(int *i){
    printf("%d", 10 * (*i));
}