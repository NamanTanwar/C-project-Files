#include <stdio.h>

int main()
{
    int intValue;
    float floatValue;
    char charValue;

    // Input: Asking user to enter values of different types
    printf("Enter an integer value: ");
    scanf("%d", &intValue);

    printf("Enter a float value: ");
    scanf("%f", &floatValue);

    printf("Enter a character: ");
    scanf(" %c", &charValue); // Notice the space before %c to handle newline issue

    // Display original values
    printf("\nOriginal values:\n");
    printf("Integer: %d\n", intValue);
    printf("Float: %f\n", floatValue);
    printf("Character: %c\n", charValue);

    // Type conversions and displaying the converted values
    printf("\nConverted values:\n");

    // Converting int to float and char
    printf("Integer to float: %f\n", (float)intValue);
    printf("Integer to character: %c\n", (char)intValue);

    // Converting float to int and char
    printf("Float to integer: %d\n", (int)floatValue);
    printf("Float to character: %c\n", (char)floatValue);

    // Converting char to int and float
    printf("Character to integer: %d\n", (int)charValue);
    printf("Character to float: %f\n", (float)charValue);

    return 0;
}
