/*
1. Populate an array with integer values.
2. Call ReverseArray to dynamically create a reversed copy of the array.
3. Display the original array.
4. Display the reversed array.
5. Deallocate the dynamically allocated array using delete[].
*/

//int* ReverseArray(const int arr[], int size);
void print(const int arr[], int size);

#include <iostream>
using namespace std;

int main()
{
	//Declares a variable that sets the capacity of the array
	int capacity;
	cout << "Enter the size of the array: ";
	cin >> capacity;

	//Declares(int*) a pointer called arr to an int array of integers that has a dynamic capacity of the value entered by the user
	//This makes the array reusable after delete[], and so the capacity can be dynamically set based on the user's input
	int* arr = new int[capacity];

	//
	for (int i = 0; i < capacity; i++)
	{
		cout << "Enter element " << i + 1 << ": ";
		cin >> arr[i];
	}
	cout << endl;
	print(arr, capacity);
}

//ReverseArray dynamically allocates an array, copies the contents of the original array in reverse order, and returns a pointer to the new array.
/*int* ReverseArray(const int arr[], int size)
{
	cout << "reverseArray";
}*/

//print displays the contents of an array.
void print(const int arr[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
