using System;
using System.Collections.Generic;
using System.Text;

namespace CSharp_Logic.Alghoritms
{
    public class QueueImplementation
    {
        public static void Run()
        {
            // We use the buitl-in Queue class from System.Collections.Generic
            Queue<string> superMarketQueue = new Queue<string>();

            // Enqueue - Adding elements to the end
            superMarketQueue.Enqueue("Jhon");
            superMarketQueue.Enqueue("Alice");
            superMarketQueue.Enqueue("Bob");

            Console.WriteLine("Initial queue count: " + superMarketQueue.Count );

            // Peek - Look at the person in front without removing them
            Console.WriteLine("Person in front: " + superMarketQueue.Peek());

            // Dequeue - Remove the person from the front
            string removedperson = superMarketQueue.Dequeue();
            Console.WriteLine($"Served: {removedperson}. Remaining: {superMarketQueue.Count}");

            //Iterating through the queue
            Console.WriteLine("Remaining people in queue:");
            foreach(var person in superMarketQueue)
            {
                Console.WriteLine("- " + person);
            }
        }
    }
}
