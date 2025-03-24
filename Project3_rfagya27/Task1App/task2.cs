/** 
 * Rose Frimpomaa Agyapong
 * 
 */
 
using System;

class Program
{
    // Binary Search Method
    static int BinarySearch(int[] array, int target)
    {
        int left = 0;
        int right = array.Length - 1;

        while (left <= right)
        {
            // Calculate the middle index
            int mid = (left + right) / 2;

            // Check if the target is at the middle
            if (array[mid] == target)
            {
                return mid;  // Target found, return its index
            }
            else if (array[mid] < target)
            {
                // If target is greater, ignore the left half
                left = mid + 1;
            }
            else
            {
                // If target is smaller, ignore the right half
                right = mid - 1;
            }
        }

        // Target not found
        return -1;
    }

    static void Main()
    {
        // Example sorted array
        int[] numbers =  { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };

        // Target to search for
        int target = 12;

        // Calling the binary search method
        int index = BinarySearch(numbers, target);

        // Display the result
        if (index != -1)
        {
            Console.WriteLine("Target " + target + " found at index " + index);
        }
        else
        {
            Console.WriteLine("Target " + target + " found at index " + index);
        }
    }
}
