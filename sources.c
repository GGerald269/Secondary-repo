#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

int main()
{

    // seed to generate random numbers is based of time
    srand(time(0));

    // declaration variables
    int userInput;
    int quotient;

    do // do while loop to insure correct input is entered
    {
        printf("\nEnter any positive integer:");
        scanf("%d", &userInput);

        if (userInput <= 0)
        {
            printf("Invalid input");
            printf("Please enter a positive integer\n");
        }

    } while (userInput <= 0 || userInput >= 50);

    // Boolean to check if the input is prime
    int isPrime = true;

    const int MIN = 2;
    const int MAX = userInput / 2;
    int primeNumber = (rand() % MAX) + MIN; // Generation of random numbers from 0 to the user's input

    while (primeNumber % 2 == 0 || primeNumber == 2)
    {
        printf("Checking for possible new random\n");
        primeNumber++;
    }

    // condition to check if random number is prime
    if (userInput / primeNumber != 0)
    {
        for (int i = primeNumber - 1; i > 1; i--)
        {
            printf("%d\n", i);
            if (primeNumber % i == 0)
                isPrime = false;
        }
    }
    else
    {
        printf("Sorry code crashed");
    }

    // For a number that is prime it has multiples of 1 and itself
    // And also
    // int remainder = userInput - (primeNumber * );
    if (isPrime)
    {
        int remainder = userInput % primeNumber;
        int divisor = (userInput - remainder) / primeNumber;
        printf("\nIt is prime\n");
        printf("%d = (%d x %d ) + %d\n", userInput, divisor, primeNumber, remainder);
    }

    else
    {
        printf("The program selection is not a prime\n");
        printf("Re-run the program\n");
    }
}