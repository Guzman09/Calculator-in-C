#include <stdio.h>


main()
{
    char letter;
    float num1, num2;
    printf("What operations do you want to do?\n\tA) Addition\n\tB) Subtraction\n\tC) Multiplication\n\tC) Division\n");
    printf("*JUST TYPE THE LETTER YOU WANT*\n");
    scanf(" %c", &letter);

    //First directions to enter the input
    printf("Please enter a number:");
    scanf(" %f", &num1);
    printf("Please enter second number:");
    scanf(" %f", &num2);


    //First operation: Addition
    if (letter == 'A' || letter == 'a')
        printf("The sum of %.2f and %.2f is %.2f", num1, num2, num1 + num2);
    //Second operation: Subtraction
    else if (letter == 'B' || letter == 'b')
        printf("The difference of %.2f and %.2f is %.2f", num1, num2, num1 - num2);
    //Third operation: Multiplication
    else if (letter == 'C' || letter == 'c')
        printf("The product of %.2f and %.2f is %.2f", num1, num2, num1 * num2);
    //Fourth operation: Division
    else if (letter == 'D' || letter == 'd')
        printf("The quotient of %.2f and %.2f is %.2f", num1, num2, num1 / num2);
    else
        printf("You entered an invalid character.");

    return 0;
}
