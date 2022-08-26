#include<stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter Num1: ");
    scanf("%d", &a);
    printf("Enter Num2: ");
    scanf("%d", &b);
    printf("Enter Num3: ");
    scanf("%d", &c);
    printf("Enter Num4: ");
    scanf("%d", &d);

    if (a>b && a>c && a>c){
        printf("%d is greater", a);
    }

    if (b>a && b>c && b>d){
        printf("%d is greater", b);
    }

    if (c>a && c>b && c>d){
        printf("%d is greater", c);
    }

    if (d>a && d>b && d>c){
        printf("%d is greater", d);
    }    
    
    return 0;
}