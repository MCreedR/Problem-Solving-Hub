#include <iostream>
#include <stack> // Standard library stack container

int main() {
	std::stack<int> s; // Create a stack of integers

	// Push elements onto the stack
	s.push(10); // Adds 10 to the stack
	s.push(20); // Adds 20 to the stack

	std::cout << "Top element: " << s.top() << std::endl; // Outputs the top element (20)

	return 0;
}