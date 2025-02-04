#include <iostream>

using namespace std;

void SelectionSort(int arr[], int num) {
	for (int i = 0; i < num - 1 ; i++) {	// traversing entire array
		int MinIndex = i;	// min element index

		for (int j = i + 1; j < num; j++) {	// next ellement of array to check
			if (arr[j] < arr[MinIndex]) {	
				//Note:	// for ascending order ---> arr[j] > arr[j + 1]

				MinIndex = j;
			}
		}
		swap(arr[i], arr[MinIndex]);	// swap the ellements if arr[j] < arr[MinIndex]
										// or swap the ellements (only when the Note is used)  if  arr[j] > arr[MinIndex]		
	}
}

void CoutArr(int arr[], int num) {
	for (int i = 0; i < num; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	cout << "Insert the amount of numbers of ellements for sorting: " << endl;
	int num;
	cin >> num;
	cout << "Insert ellements for sorting: " << endl;
	int *arr = new int[num];	// dynamic array for cin ellements
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	cout << endl;

	cout << "Entered digits for sorting: " << endl;
	CoutArr(arr, num);	// call function to show all of the inserted ellements for sorting
	cout << endl;

	SelectionSort(arr, num);	// call function to make selections

	cout << "Sorted array: " << endl; 
	CoutArr(arr, num);	// call function of sorted array 
	cout << endl;

	delete[] arr;	// delete the dynamic array

	return 0;
}