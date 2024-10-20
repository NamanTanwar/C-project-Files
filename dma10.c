#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototype for calculating the sum of elements in each row
void calculateRowSums(int **array, int rows, int cols);

// Main function
int main()
{
    int rows, cols;
    int **array; // Pointer to hold the address of dynamically allocated 2D array

    // Seed the random number generator
    srand(time(NULL));

    // Prompt user for the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Dynamically allocate memory for a 2D array (array of pointers)
    array = (int **)malloc(rows * sizeof(int *));
    if (array == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    // Dynamically allocate memory for each row
    for (int i = 0; i < rows; i++)
    {
        array[i] = (int *)malloc(cols * sizeof(int));
        if (array[i] == NULL)
        {
            printf("Memory allocation failed for row %d!\n", i);
            return 1; // Exit if memory allocation fails
        }
    }

    // Populate the 2D array with random values and display the array
    printf("\nPopulated 2D Array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 100; // Random values between 0 and 99
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    // Call function to calculate and display the sum of elements in each row
    calculateRowSums(array, rows, cols);

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; i++)
    {
        free(array[i]); // Free memory allocated for each row
    }
    free(array); // Free the array of pointers

    return 0;
}

// Function to calculate and display the sum of elements in each row
void calculateRowSums(int **array, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        int sum = 0; // Initialize sum for the current row
        for (int j = 0; j < cols; j++)
        {
            sum += array[i][j]; // Add each element of the row to sum
        }
        printf("Sum of elements in row %d = %d\n", i, sum);
    }
}
