#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
void printMenu();
bool getNumbers(double *a, double *b);

// Addition function
double add(double a, double b)
{
    return a + b;
}

// Subtraction function
double subtract(double a, double b)
{
    return a - b;
}

// Multiplication function
double multiply(double a, double b)
{
    return a * b;
}

// Division function
double divide(double a, double b)
{
    return a / b;
}

// Function to print the menu
void printMenu()
{
    printf("\nCalculator Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");
    printf("Enter your choice (1-5): ");
}

// Function to get two numbers from the user
bool getNumbers(double *a, double *b)
{
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", a, b) != 2)
    {
        printf("Invalid input. Please enter two numbers.\n");
        while (getchar() != '\n')
            ; // Clear input buffer
        return false;
    }
    return true;
}

// Main function
int main()
{
    // Array of function pointers
    double (*operations[])(double, double) = {add, subtract, multiply, divide};
    // user choice of operation
    int choice;
    // variables to store the operands and result
    double num1, num2, result;

    while (1)
    { // function to print menu
        printMenu();

        // Get user's choice
        if (scanf("%d", &choice) != 1 || choice < 1 || choice > 5)
        {
            printf("Invalid input. Please enter a number between 1 and 5.\n");
            while (getchar() != '\n')
                ; // Clear input buffer
            continue;
        }

        // Exit condition
        if (choice == 5)
        {
            printf("Thank you for using the calculator. Goodbye!\n");
            break;
        }

        // Get operands
        if (!getNumbers(&num1, &num2))
        {
            continue;
        }

        // Perform calculation using function pointer
        if (choice == 4 && num2 == 0)
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        else
        {
            result = operations[choice - 1](num1, num2);
            printf("Result: %.2f\n", result);
        }
    }

    return 0;
}
