#include <iostream>
#include <vector>
#include <algorithm> // For std::sort (used for comparison)

static int binarySearch(const std::vector<int>& arr, int target) {
	int left = 0;
	int right = arr.size() - 1;

	while (left <= right) {
		// Calculate the middle index to avoid potential overflow for large indices
		int mid = left + (right - left) / 2;

		//Element found
		if (arr[mid] == target) {
			return mid;
		}

		// If target is greater, ignore the left half
		if (arr[mid] < target) {
			left = mid + 1;
		}

		// If target is smaller, ignore the right half
		else {
			right = mid - 1;
		}
	}

	// Element was not found
	return -1;
}

int main() {
	std::vector<int> data = { 10, 22, 35, 47, 50, 63, 75, 88, 99 };
	int target = 63;

	int result = binarySearch(data, target);

	if (result != -1) {
		std::cout << "Element fount at index: " << result << std::endl;
	}
	else {
		std::cout << "Element  does not exist in the vector." << std::endl;
	}

	return 0;
}