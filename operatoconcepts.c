#include<stdio.h>

int main(){
    int a=5;
    printf("the value of ++a is %d\n", a+=10);
    printf("the value of a is %d\n", a);
    return 0;
}
// i++ 1st print then icrement 
// ++i 1st increment then print
// +++ operator does not exist
// += is a compound operator
// i+=10--> increases value of i by 10