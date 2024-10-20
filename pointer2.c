#include <stdio.h>

// Shifting values circular
void circularShift(int *a, int *b, int *c)
{

    int temp = *c;
    // shifting values
    *c = *b;
    *b = *a;
    *a = temp;
}

// function to print values
void printValues(int a, int b, int c)
{
    printf("Value of first variable: %d\n", a);
    printf("Value of second variable: %d\n", b);
    printf("Value of third variable: %d\n", c);
}

int main()
{ // declaring variable to store values
    int a, b, c;

    // taking user input for three variables
    printf("Enter value of first variable: ");
    scanf("%d", &a);
    printf("Enter value of second variable: ");
    scanf("%d", &b);
    printf("Enter value of third variable: ");
    scanf("%d", &c);

    printf("Before circular shift\n");
    // printing variables values
    printValues(a, b, c);

    // shifting values circularly
    circularShift(&a, &b, &c);

    printf("After circular shift\n");
    // printing variables values
    printValues(a, b, c);

    return 0;
}