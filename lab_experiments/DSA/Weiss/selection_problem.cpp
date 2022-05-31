#include <iostream>

using namespace std;


// Declarations of the functions created in this file
int selection_problem_O_NLogN(int *, int, int);  // The method to find the kth Largest in O(N Log( N ))
int * quickSort(int *, int);  // The method to sort in descending order in O( N Log( N ) )

void print_array(int * arr, int N) {

	std::cout << "[";	
	

	for (int i=0; i<N; i++) {  std::cout << " " << arr[i];  } std::cout << " ]" << std::endl;
	
}

int selection_problem_O_NLogN(int * arr, int N, int k) {

	/*
	 * Sort the array in **Descending order**
	 * And then access the element at the kth location (k < N)
	 * Where N is the array size
	 */


	// First copying the array in O( N )
	int temp_arr[N];

	for (int i=0; i<N; i++) {

		temp_arr[i] = arr[i];

	}	
	
	quickSort(temp_arr, N);

	
	// std::cout << "The sorted list is: "; print_array(temp_arr, N);
	
	return temp_arr[k - 1];
}


int * quickSort(int * arr, int N) {

	std::cout << "The list to sort next: "; print_array(arr, N);

	// Writing the base case, for this recursive function
	if (N <= 1) {
	
		return arr;
	
	}

	// Picking the pivot to find its sorted location
	int pivot = 0;
	int pivot_element = arr[pivot];

	int i=1; int j=N-1;

	while (i < j) {

		while (arr[i] > pivot_element && i < N-1) {

			i++;

		}

		while (arr[j] < pivot_element && j > 1) {

			j--;

		}

		if (i < j) {
			
			// Doing the Swap
			int temp_val = arr[i];  // A temporary val

			arr[i] = arr[j];
			arr[j] = temp_val;

		}

	}
	
	if (pivot_element < arr[j]) {

		// Swaping the pivot to its sorted location
		int temp_val = arr[j];

		arr[j] = pivot_element;
		arr[pivot] = temp_val;
	}

	// Now joining the partitions
	int * left_arr = arr;
	int left_N = j;

	int * right_arr = &arr[j + 1];
	int right_N = N - j - 1;

	quickSort(left_arr, left_N);
	quickSort(right_arr, right_N);
	

	return arr;

}


int main() {
	int N;  // The size of the array
	std::cout << "Please enter the size of the array: "; std::cin >> N; std::cout << std::endl;  // Taking input for the Size
	
	int * arr = new int[N];  // Declaring the arr pointer to a array in the heap
	
	std::cout << "Please enter the values of the Array: " << std::endl;
	for (int i=0; i<N; i++) {
		
		// Taking inputs
		std::cin >> arr[i];
	}
	
	std::cout << "Printing the array out: [";
	for (int i=0; i<N; i++) {  std::cout << " " << arr[i];  }  std::cout << " ]" << std::endl;
	
	int k;	// The kth largest element
	std::cout << "Enter 'k', to find the kth **Largest** element in the array: "; std::cin >> k; std::cout << std::endl;  // Taking the input for 'k';
	
	int answer = selection_problem_O_NLogN(arr, N, k);
	std::cout << answer << " is the kth Largest element!"; std::cout << std::endl;

	std::cout << "Printing the sorted array: "; print_array(quickSort(arr, 5), 5);

	delete []arr;
	return EXIT_SUCCESS;
}

