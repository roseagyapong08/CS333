/** 
 * Rose Frimpomaa Agyapong
 * 
 */
 
using System;

class Program
{
    static void Main(string[] args)
    {
        // Assign named functions to variables
        Func<int, int, int> addFunction = Add;
        Func<int, int, int> multiplyFunction = Multiply;

        // Pass the function as an argument and execute it
        Console.WriteLine($"Add: {ExecuteOperation(addFunction, 5, 3)}");
        Console.WriteLine($"Multiply: {ExecuteOperation(multiplyFunction, 5, 3)}");

        // Anonymous function using regular method
        Func<int, int, int> subtractFunction = Subtract;
        Console.WriteLine($"Subtract: {ExecuteOperation(subtractFunction, 5, 3)}");
    }

    // Named function for addition
    static int Add(int x, int y)
    {
        return x + y;
    }

    // Named function for multiplication
    static int Multiply(int x, int y)
    {
        return x * y;
    }

    // Another named function for subtraction
    static int Subtract(int x, int y)
    {
        return x - y;
    }

    // Function that takes a function as a parameter and executes it
    static int ExecuteOperation(Func<int, int, int> operation, int a, int b)
    {
        return operation(a, b);
    }
}
