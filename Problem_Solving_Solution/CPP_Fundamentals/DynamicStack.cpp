#include <iostream>

class DynamicStack {
private:
	int* arr;
	int top;
	int capacity;

	//function to double the capacity when full
	void resize() {
		capacity *= 2;
		int* newArr = new int[capacity];
		for (int i = 0; i <= top; i++) {
			newArr[i] = arr[i];
		}
		delete[] arr;
		arr = newArr;
		std::cout << "Stack capacity increased to: " << capacity << std::endl;
	}

public:
	DynamicStack(int size = 2) {
		capacity = size;
		arr = new int[capacity];
		top = -1;
	}

	void push(int val) {
		if (top == capacity - 1) {
			resize();
		}
		arr[++top] = val;
	}

	void pop() {
		if (top == -1) {
			std::cout << "Stack underflolw!" << std::endl;
			return;
		}
		top--;
	}

	int peek() {
		return (top != 1) ? arr[top] : -1;
	}

	~DynamicStack() { delete[] arr; }
};

int main() {
	DynamicStack myStack(2);

	std::cout << "--- Testing Push & Dynamic Resizing ---" << std::endl;
	myStack.push(10);
	myStack.push(20);
	// Should trigger resize
	myStack.push(30); 
	myStack.push(40);

	std::cout << "Top element is: " << myStack.peek() << std::endl;
	std::cout << "--- Testing Pop ---" << std::endl;
	std::cout << "Removing top..." << std::endl;
	myStack.pop();
	std::cout << "New top element: " << myStack.peek() << std::endl;

	myStack.pop();
	myStack.pop();
	myStack.pop();

	std::cout << "\nAttempting pop from empty stack: " << std::endl;
	myStack.pop();

	return 0;
}