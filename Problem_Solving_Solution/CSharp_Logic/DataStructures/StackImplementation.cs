using System;
using System.Collections.Generic; // Required for using collections like Stack
using System.Text;

namespace CSharp_Logic.DataStructures
{
    public class StackImplementation
    {
        public static void DemoStack()
        {
            // Creating a stack of strings
            Stack<string> history = new Stack<string>();

            // Adding elements (Push)
            history.Push("HomePage"); // First in
            history.Push("ProfilePage");
            history.Push("SettingsPage"); // Last in

            Console.WriteLine($"Current page (Top): {history.Peek()}"); // Peek shows the top eithout removing

            // Removing elements (Pop)
            string lastAction = history.Pop(); // Removes SettingsPage
            Console.WriteLine($"Action undone: {lastAction}");

            Console.WriteLine($"New current page: {history.Peek()}");
        }
    }
}
