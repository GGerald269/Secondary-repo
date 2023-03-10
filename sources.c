#include <stdio.h>
int main(){

    printf("Hello, world!");
    printf("Who are you?");

    int numbers;//initialization variables
    printf("Please enter any number");
    scanf("%d",numbers);

    //loop for number incrementation
    for (int i=0; i <= numbers; i++)
    {
        printf("%d",i);
    }
}
