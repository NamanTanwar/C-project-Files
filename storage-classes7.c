#include <stdio.h>

// Declared an extern variable (global scope)
extern int externVar = 10;

// Function declarations
void autoStorageClassDemo();
void registerStorageClassDemo();
void staticStorageClassDemo();
void externStorageClassDemo();

// Function demonstrating the auto storage class working
void autoStorageClassDemo()
{
    // Auto variables are local to the block and their lifetime is limited to that block.
    auto int autoVar = 5; // auto is the default storage class for local variables

    printf("Inside autoStorageClassDemo:\n");
    printf("autoVar = %d (Scope: local to this function, Lifetime: this function call)\n\n", autoVar);
}

// Function demonstrating the register storage class
void registerStorageClassDemo()
{
    // Register variables are stored in CPU registers for quick access (if possible depends on the compiler and available memory).
    // They have local scope and function-level lifetime like auto variables.
    register int regVar = 20;

    printf("Inside registerStorageClassDemo:\n");
    printf("regVar = %d (Scope: local to this function, Lifetime: this function call, Stored in CPU register if possible)\n\n", regVar);
}

// Function demonstrating the static storage class
void staticStorageClassDemo()
{
    // Static variables retain their value between function calls, but their scope is local to the function.
    static int staticVar = 30; // Static variable, initialized only once

    printf("Inside staticStorageClassDemo:\n");
    printf("staticVar = %d (Scope: local to this function, Lifetime: entire program execution)\n", staticVar);

    staticVar++; // Modify static variable to demonstrate persistence across function calls
    printf("staticVar after increment = %d (Value persists across function calls)\n\n", staticVar);
}

// Function demonstrating the extern storage class
void externStorageClassDemo()
{
    // Extern variables are declared globally and can be accessed across different files/functions.
    // Here, externVar is defined outside the function scope but can be used inside this function.
    printf("Inside externStorageClassDemo:\n");
    printf("externVar = %d (Scope: global, Lifetime: entire program execution)\n\n", externVar);

    externVar += 5; // Modify the global extern variable
}

int main()
{
    printf("Demonstrating different storage classes in C:\n\n");

    // Demonstrating auto storage class
    autoStorageClassDemo();

    // Demonstrating register storage class
    registerStorageClassDemo();

    // Demonstrating static storage class
    staticStorageClassDemo();

    printf("Calling the function with static variable again:\n\n");
    // Call again to show the effect of static variables across function calls
    staticStorageClassDemo();

    // Demonstrating extern storage class
    externStorageClassDemo();

    return 0;
}
