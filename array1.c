#include <stdio.h>
#include <stdlib.h>

// function to calculate sum of array elements
long long int findSumArray(int arr[], int arraySize)
{
    // declaring and initializing sum with initial value zero
    long long int sum = 0;
    // looping through the entire array to find sum
    for (int i = 0; i < arraySize; i++)
    {
        sum += arr[i];
    }
    // return the computed value
    return sum;
}

float findAverage(long long int arraySum, int arraySize)
{ // explicit typecasting so that result remains in float
    return (float)arraySum / arraySize;
}

int main()
{
    // variable declaration for array size
    int arraySize;

    printf("Enter size of array ");
    // taking user input for arraySize
    scanf("%d", &arraySize);

    // handling invalid input
    if (arraySize <= 0)
    {
        printf("Invalid input. Please enter a positive integer.");
        return 1;
    }

    // dynamically allocating memory for the array
    int *array = malloc(sizeof(int) * arraySize);

    if (array == NULL)
    {
        // if control enters here this means no space available to run program
        return 1;
    }

    // taking user input
    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter value of element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    /*calculating sum of array elements
    took long long int to avoid integer overflow in case
    of large input values*/
    long long int arraySum = findSumArray(array, arraySize);

    // printing sum
    printf("The sum of array elements is: %lld\n", arraySum);

    // deallocating the dynamically alocated space(purpose of array is fullfilled)
    free(array);

    /*calculating average of array elements
    took long long int to avoid integer overflow in case
    of large input values*/
    float arrayAverage = findAverage(arraySum, arraySize);

    // rounding off result to 2 decimal places for better readability
    printf("The average of array elements is: %.2f\n", arrayAverage);

    return 0;
}