#include<stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float)(*sum)/2;
}

int main(){
    int i, j, sum;
    float avg;
    i = 84;
    j = 54;

    sumAndAvg(i, j, &sum, &avg);
    printf("The sum is %d\n", sum);
    printf("The average is %f\n", avg);
    return 0;
}