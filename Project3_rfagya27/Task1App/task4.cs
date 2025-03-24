/** 
 * Rose Frimpomaa Agyapong
 * 
 */
 
using System;

class Program
{
    static void Main(string[] args)
    {
        int number = 10;
        
        // if-else
        Console.WriteLine(number > 5 ? "Greater than 5" : "5 or less");

        // switch
        switch (number)
        {
            case 1: Console.WriteLine("Number is 1"); break;
            case 10: Console.WriteLine("Number is 10"); break;
            default: Console.WriteLine("Number is something else"); break;
        }

        // while loop
        int counter = 0;
        while (counter < 3) Console.WriteLine($"While loop: {counter++}");

        // do-while loop
        counter = 0;
        do Console.WriteLine($"Do-while loop: {counter++}"); while (counter < 3);

        // for loop
        for (int i = 0; i < 3; i++) Console.WriteLine($"For loop: {i}");

        // foreach loop
        foreach (string fruit in new string[] { "Apple", "Banana", "Cherry" }) Console.WriteLine($"Foreach: {fruit}");

        // break and continue
        for (int i = 0; i < 5; i++)
        {
            if (i == 3) { Console.WriteLine("Break at 3"); break; }
            if (i == 2) { Console.WriteLine("Continue at 2"); continue; }
            Console.WriteLine($"Iteration: {i}");
        }

        // goto statement
        Console.WriteLine("Goto demo:"); goto Label1;
        Console.WriteLine("This will be skipped");
        Label1: Console.WriteLine("Jumped to Label1");
    }
}
