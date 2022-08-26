#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
    char str2[50];
    printf("Enter a string: \n");
    gets(str1);
    printf("Enter a substring: \n");
    gets(str2);
    // printf("%s", str);
    int a = strlen(str1);
    int b = strlen(str2);
    printf("%d", a);
    printf("%d", b);
    // puts(strlen(str1));
    // for(int i=0; i<sizeof(str1); i++){
    //     int k = i;
    //     for(int j=0; j<=(l-1); j++)
    // }
    return 0;
}