/**
 * Extension 2
 *
 * Rose Frimpomaa Agyapong
 * 
 */

// Auto-implemented properties simplify the declaration of properties.
// Custom get and set accessors allow you to add logic to property access.
using System;

class Person
{
    // Auto-implemented property
    public string Name { get; set; }

    // Property with logic in the get and set accessors
    private int age;
    public int Age
    {
        get { return age; }
        set
        {
            if (value >= 0)
            {
                age = value;
            }
            else
            {
                Console.WriteLine("Age cannot be negative.");
            }
        }
    }
}

class Program
{
    static void Main()
    {
        Person person = new Person();
        
        // Using auto-implemented property
        person.Name = "Alice";
        Console.WriteLine($"Name: {person.Name}");

        // Using property with custom logic
        person.Age = 25;   // Valid
        Console.WriteLine($"Age: {person.Age}");
        
        person.Age = -5;   // Invalid, triggers custom logic
    }
}
