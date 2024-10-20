#include <stdio.h>

// Function to convert the integer part of a decimal number to binary
void decimalToBinary(int num)
{
    // Base case: if the number is greater than 1, continue recursion
    if (num > 1)
    {
        decimalToBinary(num / 2);
    }
    // Print the least significant bit
    printf("%d", num % 2);
}

// Function to convert the fractional part of a decimal number to binary
void fractionToBinary(double fraction, int precision)
{
    printf("."); // Print decimal point
                 // Convert fraction to binary up to the specified precision
    for (int i = 0; i < precision; i++)
    {
        fraction *= 2;
        int bit = (int)fraction;
        printf("%d", bit);
        fraction -= bit;
    }
}

int main()
{

    double inputNumber;
    int precision; // Number of decimal places for the fractional part

    // Get the decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%lf", &inputNumber);

    // Get the desired precision for the fractional part
    printf("Enter a precision value: ");
    scanf("%d", &precision);

    // Separate the integer and fractional parts
    int integerPart = (int)inputNumber;
    double fractionalPart = inputNumber - integerPart;

    // Print the binary equivalent
    printf("Binary equivalent: ");

    // Handle the integer part
    if (integerPart == 0)
    {
        printf("0");
    }
    else
    {
        decimalToBinary(integerPart);
    }

    // Handle the fractional part (if it exists)
    if (fractionalPart > 0)
    {
        fractionToBinary(fractionalPart, precision);
    }

    printf("\n");

    return 0;
}