/**
 * Rules for identifier naming, variable declarations and identifier scoping.
 *
 
 * Rose Frimpomaa Agyapong
 * 
 */

using System;

class Program
{   
    // A global variable. This is accessible throughout the entire program
    static int globalVar = 100; // camelCase for variables
    const double PI = 3.1415; // PascalCase for constants
    int _privateVariable = 30; // underscore prefix for private variables
    int MyVariable = 40; // PascalCase for class-level variables

    static void Main()
    {
        // Local variable declared inside the Main method
        int localVar = 7;
        Console.WriteLine("Global variable: " + globalVar);
        Console.WriteLine("Local Variable: " + localVar);

        // Accessing a local variable from another method
        int localFromMethod = LocalScopeMethod();

        // Shadowing: Local variable with the same name as a global variable
        // int globalVar = 200;  // This local variable shadows the globalVar
        Console.WriteLine("Shadowed Global Variable (inside Main): " + globalVar);

        Console.WriteLine("Local Variable (from LocalScopeMethod): " + localFromMethod);

        // Demonstrating block scope
        if (localVar > 5)
        {
            int blockVar = 50;  // Block-scoped variable
            Console.WriteLine("Block Variable: " + blockVar);
        }

        // Uncommenting the following line will cause an error
        // Console.WriteLine(blockVar);  // blockVar is not accessible outside the if block

        // Calling another method
        AnotherMethod();

    }

    // A method with its own local scope
    static int LocalScopeMethod()
    {
        int localMethodVar = 20;  // Local variable specific to this method
        Console.WriteLine("Local Variable (inside LocalScopeMethod): " + localMethodVar);

        // Access to the global variable inside this method
        Console.WriteLine("Accessing Global Variable from LocalScopeMethod: " + globalVar);

        return localMethodVar;
    }

    // Another method to show how variables behave in different scopes
    static void AnotherMethod()
    {
        // This method does not have access to localVar or blockVar from Main method
        Console.WriteLine("Global Variable (inside AnotherMethod): " + globalVar);

        // Uncommenting the following line will cause an error
        // Console.WriteLine(localVar);  // localVar is not accessible here
    }
}