/** 
 * Rose Frimpomaa Agyapong
 * 
 */
 
using System;

class Program
{
    // Aggregate type: a struct that represents a Point
    struct Point
    {
        public int X;
        public int Y;
        public Point(int x, int y)
        {
            X = x;
            Y = y;
        }

        // Method to display the Point
        public void DisplayPoint()
        {
            Console.WriteLine($"Point({X}, {Y})");
        }
    }

    // Aggregate type: a class representing a Person
    class Person
    {
        public string Name { get; set; }
        public int Age { get; set; }

        public Person(string name, int age)
        {
            Name = name;
            Age = age;
        }

        // Method to display Person's info
        public void DisplayInfo()
        {
            Console.WriteLine($"Name: {Name}, Age: {Age}");
        }
    }

    static void Main(string[] args)
    {
        // Demonstrating built-in types and basic operators

        // Integers
        int a = 10;
        int b = 3;
        Console.WriteLine($"Integer Addition (a + b): {a + b}"); // Result: 13
        Console.WriteLine($"Integer Division (a / b): {a / b}"); // Result: 3 (integer division)
        Console.WriteLine($"Modulo (a % b): {a % b}");           // Result: 1

        // Floating point numbers
        double x = 10.5;
        double y = 2.5;
        Console.WriteLine($"Double Addition (x + y): {x + y}"); // Result: 13.0
        Console.WriteLine($"Double Division (x / y): {x / y}"); // Result: 4.2

        // Characters
        char letter = 'A';
        Console.WriteLine($"Character: {letter}");

        // Boolean values
        bool isTrue = true;
        Console.WriteLine($"Boolean: {isTrue}");

        // Strings
        string greeting = "Hello";
        string name = "World";
        Console.WriteLine($"String Concatenation: {greeting + " " + name}");

        // Aggregate type: struct (Point)
        Point p1 = new Point(5, 7);
        p1.DisplayPoint();

        // Aggregate type: class (Person)
        Person person = new Person("Alice", 25);
        person.DisplayInfo();

        // Demonstrating type conversion
        double result = (double)a / b;  // Explicit casting from int to double
        Console.WriteLine($"Explicit casting (a / b): {result}"); // Result: 3.33333

        // Operator precedence: Demonstrating how different operators work together
        int precedenceResult = (a + b) * 2 - 1;
        Console.WriteLine($"Operator precedence ((a + b) * 2 - 1): {precedenceResult}"); // Result: 25
    }
}
