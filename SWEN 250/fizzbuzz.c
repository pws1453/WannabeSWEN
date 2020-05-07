#include <stdio.h>
#include <string.h>

int main(){
    int i = 1;
    while (i <= 100)
    {
        if (i % 5 ==0)
        {
            printf("Fizz");
        }
        if (i % 7 ==0){
            printf("Buzz");
        }
        if (i % 7 != 0 && i % 5 !=0){
            printf("%d",i);
        }
        printf("\n");
        i++;
    }
}