#include <stdio.h>
#include <stdlib.h>

int main()
{

    int userSelection;
    float firstNumber;
    float secondNumber;

    printf("Pick a function via the corresponding NUMBER:\n1 - Addition\n");        // User prompt. //
    scanf("%d", &userSelection);        // User input. //

    switch (userSelection)      // Picking a function. //
    {

        case 1:     // Addition. //
            printf("\n\nPick a NUMBER.\n");     // User prompt. //
            scanf("%f", &firstNumber);      // User input. //

            printf("\n\nPick a second NUMBER to add to the first.\n");      // User prompt. //
            scanf("%f", &secondNumber);     // User input. //

            printf("\n\n%f + %f = %f\n\n", firstNumber, secondNumber, (firstNumber + secondNumber));
            break;

        default:
            printf("Selection has failed.\n\n");        // Error message. //
            break;

    }

    return 0;
}
