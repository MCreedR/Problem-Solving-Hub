using System;
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;
using System.Text;

namespace CSharp_Logic.DataStructures
{
    public class DynamicStack<T>
    {
        private T[] _items;
        private int _top;

        public DynamicStack(int initialCapacity = 2)
        {
            _items = new T[initialCapacity];
            _top = -1;
        }

        public void Push(T item)
        {
            if (_top == _items.Length - 1)
            {
                Array.Resize(ref _items, _items.Length * 2);
                Console.WriteLine("Stack capacity doubled to " + _items.Length);
            }
            _items[++_top] = item;
        }

        public T Pop()
        {
            if (_top == -1)
            {
                throw new InvalidOperationException("Stack is empty.");
            }

            return _items[_top--];
        }

        public T Peek()
        {
            if (_top == -1) throw new InvalidOperationException("Stack is empty.");
            return _items[_top];
        }

        public bool IsEmpty => _top == -1;
        public int Count => _top + 1;
    }
}
