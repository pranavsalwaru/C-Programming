#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num;
    srand(time(0));// requires time.h
    num = rand()%100 + 1;//genrates num form 1 to 100 also this func rand requires stdlib
    printf("the num is %d", num);
    return 0;
}