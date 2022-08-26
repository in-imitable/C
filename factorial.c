#include<stdio.h>

int main(){
    int i=1, n, factorial=1;
    printf("Enter value: ");
    scanf("%d", &n);

    // for(i=1; i<=n; i++){
    //     factorial *= i;
    // }

    // while (i<=n)
    // {
    //     factorial *= i;
    //     i++;
    // }
    
    do
    {
        factorial *= i;
        i++;
    } while (i<=n);
    

    printf("The factorial of %d is %d", n, factorial);
    return 0;
}