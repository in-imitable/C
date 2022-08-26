#include<stdio.h>

int main(){
    int a, *b;
    a = 4;
    b = &a;
    printf("Value of a is %d\n", a);
    printf("Address of a is %u\n", &a);
    printf("Address of b is %u\n", &b);
    printf("Address of a point to b is %d\n", b);
    return 0;
}