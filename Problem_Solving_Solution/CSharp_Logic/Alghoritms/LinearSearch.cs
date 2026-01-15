using System;
using System.Collections.Generic;
using System.Text;

namespace CSharp_Logic.Alghoritms
{
    public class LinearSearch
    {
        // Method to find an element in an array
        // Returns the index of the element if found, otherwise returns -1
        public static int Search(int[] arr, int target)
        {
            // Iterate thruogh the entire array element by element
            for(int i = 0; i < arr.Length; i++)
            {
                // If the current element matches the target, returns it's position
                if (arr[i] == target)
                {
                    return i;
                }
            }

            // If the loop finishes without finding the target
            return -1;
        }
    }
}
