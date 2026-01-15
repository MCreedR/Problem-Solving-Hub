#include <iostream> // Includes the standard input-output stream library
#include <vector> // Includes the vector container from the Standdard Template Library (STL)

// Function to perform Bubble Sort on a vector of integers
// Uses a reffernce (&) to madify original vector without making a copy
void bubbleSort(std::vector<int>& arr) {
	int n = arr.size(); // get the number of elements in the vector

	// External loop: controls the number of passes through the vector
	for (int i = 0; i < n - 1; i++) {

		// Internal loop: compares adjacent elements
		// The limit 'n - i - 1' optimisez the code by skipping already sorted elements
		for (int j = 0; j < n - i - 1; j++) {

			// If the current element is greater than the next one, swap them
			if (arr[j] > arr[j + 1]) {

				// Temporary variable to hold the value during the swap process
				int temp = arr[j];

				// Move the smaller value to the left
				arr[j] = arr[j + 1];

				// Move the larger value(from temp) to teh right
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {

	// Initialize a vector with unsorted integer data
	std::vector<int> data = { 64, 34, 25, 12, 22, 11, 90 };

	// Print the vector before sorting
	std::cout << "Original array: ";

	// Range-based for loop to iterate through each element 'x' in 'data'
	for (int x : data) std::cout << x << " ";
	
	// Call the bubbleSort function to organize the data
	bubbleSort(data);

	// Print the vector after sorting is complete
	std::cout << "\nSorted array: ";
	for (int x : data) std::cout << x << " ";

	return 0; // Return 0 to indicate the program executed succesfully
}