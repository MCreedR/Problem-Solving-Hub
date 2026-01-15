using System;
using CSharp_Logic.Alghoritms; // Import the namespace where the algoritm lives

int[] numbers = { 5, 10, 15, 20, 25}; // Sample array to search within
int target = 7; // Element to search for

int result  = LinearSearch.Search(numbers, target); // Call the search method

if ( result != -1)
{
    Console.WriteLine($"Element found at index: {result}");
}
else
{
       Console.WriteLine("Element not found in the array.");
}