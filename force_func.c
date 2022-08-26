#include<stdio.h>

float force(float mass);

int main(){
    float m;
    printf("Enter the mass value in kgs: \n");
    scanf("%f", &m);
    printf("The value of the force in newton is %.2f", force(m));    
    return 0;
}

float force(float mass){
    float result = mass * 9.8;
    return result;

}