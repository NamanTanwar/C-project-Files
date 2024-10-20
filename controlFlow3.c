#include <stdio.h>

// Function to calculate grade based on hardness, tensile strength and carbon content
int calculateGrade(int hardness, int tensileStrength, float carbonContent)
{
    // Flags to indicate which conditions are met
    int condition1 = hardness > 50;
    int condition2 = carbonContent < 0.7;
    int condition3 = tensileStrength > 5600;

    // Calculate grade based on the number of conditions met
    if (condition1 && condition2 && condition3)
    {
        return 10;
    }
    else if (condition1 && condition2)
    {
        return 9;
    }
    else if (condition2 && condition3)
    {
        return 8;
    }
    else if (condition1 && condition3)
    {
        return 7;
    }
    else if (condition1 || condition2 || condition3)
    {
        return 6;
    }
    else
    {
        return 5;
    }
}

int main()
{

    // declaring variable
    int hardness, tensileStrength, finalGrade;
    float carbonContent;

    // taking user input for harness tensile strength and carbon content
    printf("Enter the value of hardness: ");
    scanf("%d", &hardness);
    printf("Enter the value of tensile strength: ");
    scanf("%d", &tensileStrength);
    printf("Enter the value of carbonContent: ");
    scanf("%f", &carbonContent);

    // validating user input
    if (hardness < 0 || tensileStrength < 0 || carbonContent < 0)
    {
        printf("Invalid input");
        return 1;
    }

    // calling function to calculate final grade
    finalGrade = calculateGrade(hardness, tensileStrength, carbonContent);

    // printing final grade
    printf("The final grade according to the input parameters is: %d", finalGrade);

    return 0;
}