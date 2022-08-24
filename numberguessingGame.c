#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num, guess, nguesses=0;
    srand(time(0));
    num = rand()%100 + 1;
    do
    {
        printf("guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess>num)
        {
            printf("lower number please\n");
        }
        else if(guess<num)
        {
            printf("higher number please\n");
        }
        else{
            printf("you guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess!=num);
    
    return 0;
}