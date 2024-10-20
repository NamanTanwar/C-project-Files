#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function prototype to reverse a single string
void reverseString(char *str);

// Function to reverse a single string in place
void reverseString(char *str)
{
    int length = strlen(str); // Find the length of the string
    int start = 0, end = length - 1;
    char temp;

    // Reverse the string by swapping characters from both ends
    while (start < end)
    {
        // Swap the characters at 'start' and 'end'
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move the indices toward the center
        start++;
        end--;
    }
}

int main()
{
    // Array of pointers to strings (copy of modifiable strings)
    char *originalStrings[] = {
        "To err is human",
        "But to really mess things up",
        "One needs to know C!"};

    int n = sizeof(originalStrings) / sizeof(originalStrings[0]); // Calculate the number of strings

    // Allocate dynamic memory for each string so that it can be modified
    char **s = (char **)malloc(n * sizeof(char *)); // Array of string pointers
    if (s == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // Exit on failure
    }

    // Dynamically copy each string to a modifiable memory block
    for (int i = 0; i < n; i++)
    {
        s[i] = (char *)malloc((strlen(originalStrings[i]) + 1) * sizeof(char)); // Allocate space for each string
        if (s[i] == NULL)
        {
            printf("Memory allocation failed for string %d!\n", i);
            return 1; // Exit if memory allocation fails
        }
        strcpy(s[i], originalStrings[i]); // Copy the original string
    }

    printf("Original Strings:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", s[i]); // Display the original strings
    }

    // Reverse each string in the array
    printf("\nReversed Strings:\n");
    for (int i = 0; i < n; i++)
    {
        reverseString(s[i]);  // Reverse the current string
        printf("%s\n", s[i]); // Print the reversed string
    }

    // Free allocated memory
    for (int i = 0; i < n; i++)
    {
        free(s[i]); // Free each string
    }
    free(s); // Free the array of pointers

    return 0;
}
