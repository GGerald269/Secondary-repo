#include <stdio.h>
#include <stdbool.h>

int main(){



    // printf("Hello, world!");
    // printf("Who are you?");

    // int numbers;//initialization variables
    // printf("Please enter any number");
    // scanf("%d",numbers);
    
    
    // //loop for number incrementation
    // for (int i=0; i <= numbers; i++)
    // {
    //     printf("%d",i);
    // }


    /*Division algorithm
    For a positive integer "a" and "d" which is any integer 
    there is a reminder r such that "0 < r < d" 
      a = dq + r 
    There anove is a verbal description of the algorithm*/

    int userInput;
    int quotient;
    int primeNumber = 50;
    do //do while loop to insure correct input is entered
    {
        printf("\nEnter any positive integer:");
        scanf("%d",&userInput);

        if (userInput <= 0)
        {
            printf("Invalid input");
            printf("Please enter a positive integer\n");
        }
        
    } while ( userInput <= 0 || userInput >= 50);

    //Boolean to check if the input is prime
    int isPrime = true;
    
    //For a number that is prime it has multiples of 1 and itself 
    //And also 
    for (int u = 2 ; u <= primeNumber ; u++)
    {
        for (int i = u; i > 1; i--)
        {
            if (u % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
   

   //Condition to assign the quotient to the prime number
    if (isPrime)
        quotient = primeNumber;
    else
        printf("It is not a prime number no possible output\n");


    //initialzing the remainder and divisor to display to the screen
    int reminder = userInput % quotient;
    int divisor = (userInput - reminder)/quotient;

    printf("%d = ( %d x %d ) + %d\n",userInput,divisor,quotient,reminder);
}
