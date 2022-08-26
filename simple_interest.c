#include<stdio.h>
//This is simple interest calculation program.
int main(){
    int principal, rate, time;
    printf("Principal: ");
    scanf("%d", &principal);
    printf("Rate of Interest: ");
    scanf("%d", &rate);
    printf("Years: ");
    scanf("%d", &time);

    int si = (principal*rate*time)/100;
    printf("Simple Interest is %d\n", si);

    printf("Total ammount you will pay %d", principal+si);

    return 0;
}