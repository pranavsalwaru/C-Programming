#include<stdio.h>

int main(){
    int a;
    printf("enter the value of a\n");
    scanf("%d", &a);
    while(a>10 && a<20){
    printf("%d\n",a);
    ++a;
    }
    
        return 0;
}