#include<stdio.h>

int main(){
    int physics,chemistry,maths;
    int total;
    printf("enter marks of physics\n");
    scanf("%d", &physics);
    printf("enter marks of chemistry\n");
    scanf("%d", &chemistry);
    printf("enter marks of maths\n");
    scanf("%d", &maths);
    total = (physics + chemistry + maths)/3;
    if ((total>40) || physics>33 || chemistry>33 || maths>33)
    {
        printf("your percentage is %f\n and you are Pass ", total);
    }
    else
    {
        printf("your percentage is %f\n and you are fail", total);
    }
    
    return 0;
}