#include <stdio.h>

// Function prototypes
void performBitwiseAND(int a, int b);
void performBitwiseOR(int a, int b);
void performBitwiseXOR(int a, int b);
void performLeftShift(int a, int shift);
void performRightShift(int a, int shift);

// Function to perform bitwise AND
void performBitwiseAND(int a, int b)
{
    int result = a & b;
    printf("\nBitwise AND of %d & %d = %d\n", a, b, result);
}

// Function to perform bitwise OR
void performBitwiseOR(int a, int b)
{
    int result = a | b;
    printf("Bitwise OR of %d | %d = %d\n", a, b, result);
}

// Function to perform bitwise XOR
void performBitwiseXOR(int a, int b)
{
    int result = a ^ b;
    printf("Bitwise XOR of %d ^ %d = %d\n", a, b, result);
}

// Function to perform left shift operation
void performLeftShift(int a, int shift)
{
    int result = a << shift;
    printf("\nLeft Shift: %d << %d = %d\n", a, shift, result);
}

// Function to perform right shift operation
void performRightShift(int a, int shift)
{
    int result = a >> shift;
    printf("Right Shift: %d >> %d = %d\n", a, shift, result);
}

// Main function
int main()
{
    int num1, num2, shift;

    // Prompt user to enter two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Perform and display the results of various bitwise operations
    performBitwiseAND(num1, num2);
    performBitwiseOR(num1, num2);
    performBitwiseXOR(num1, num2);

    // Prompt user to enter shift value for left and right shift
    printf("\nEnter the number of positions to shift: ");
    scanf("%d", &shift);

    performLeftShift(num1, shift);
    performRightShift(num1, shift);

    return 0;
}
