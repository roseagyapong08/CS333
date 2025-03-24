/**
 * Built-in Binary search (Extension suggestion 4)
 *
 * Rose Frimpomaa Agyapong
 * 
 */

using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        // Example 1: Using Array.BinarySearch
        int[] numbersArray = { 1, 3, 5, 7, 9, 11, 13 };
        // Binary search for element 7
        int arrayIndex = Array.BinarySearch(numbersArray, 7);

        if (arrayIndex >= 0)
        {
            Console.WriteLine($"Element 7 found in array at index: {arrayIndex}");
        }
        else
        {
            Console.WriteLine("Element 7 not found in array.");
        }

        // Example 2: Using List<T>.BinarySearch
        List<int> numbersList = new List<int> { 1, 3, 5, 7, 9, 11, 13 };
        // Binary search for element 9
        int listIndex = numbersList.BinarySearch(9);

        if (listIndex >= 0)
        {
            Console.WriteLine($"Element 9 found in list at index: {listIndex}");
        }
        else
        {
            Console.WriteLine("Element 9 not found in list.");
        }
    }
}
