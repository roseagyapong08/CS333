/**
 * Extension 5
 *
 * Rose Frimpomaa Agyapong
 * 
 */


// Variable Lifetime in C# (Extesnion suggestion 8)

using System;

class Program
{
    static int staticCounter = 0;  // Static variable: lives for the program’s lifetime

    int instanceCounter = 0;       // Instance variable: lives for the object’s lifetime

    void IncrementCounters()
    {
        int localCounter = 0;      // Local variable: lives until the method finishes
        localCounter++;
        instanceCounter++;
        staticCounter++;

        Console.WriteLine($"Local Counter: {localCounter}");
        Console.WriteLine($"Instance Counter: {instanceCounter}");
        Console.WriteLine($"Static Counter: {staticCounter}");
    }

    static void Main()
    {
        Program p1 = new Program();
        Program p2 = new Program();

        // First instance
        Console.WriteLine("First instance:");
        p1.IncrementCounters();
        p1.IncrementCounters();

        // Second instance
        Console.WriteLine("\nSecond instance:");
        p2.IncrementCounters();
    }
}
