/**
 * Extension 4
 *
 * Rose Frimpomaa Agyapong
 * 
 */


// Extension Suggestion 7

// In C#, functions are not treated as basic data types, 
//but they can be assigned to variables and passed around using delegates or the Func delegate type. 
// This allows a variable to hold references to functions, 
//but C# does not natively treat functions themselves as a primitive data type.

using System;

class Program
{
    static void Main()
    {
        // Assign a function to a variable using Func<int, int, int>
        Func<int, int, int> operation = Add;

        // Call the function through the variable
        int result = operation(10, 5);
        Console.WriteLine($"Add result: {result}");

        // Reassign another function to the same variable
        operation = Multiply;
        result = operation(10, 5);
        Console.WriteLine($"Multiply result: {result}");
    }

    // A function that adds two numbers
    static int Add(int x, int y)
    {
        return x + y;
    }

    // A function that multiplies two numbers
    static int Multiply(int x, int y)
    {
        return x * y;
    }
}
