#include<stdio.h>

int main(){
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    if((n%2==0 || n%3==0 || n%7==0 || n%5==0 || n%11==0)) 
    {
        printf("it is not a prime no\n");
    }else
    {
        printf("it is a prime no\n");
    }
    
    return 0;
}