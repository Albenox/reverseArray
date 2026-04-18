/*
1. Populate an array with integer values.
2. Call ReverseArray to dynamically create a reversed copy of the array.
3. Display the original array.
4. Display the reversed array.
5. Deallocate the dynamically allocated array using delete[].
*/

int* ReverseArray(const int arr[], int size);
void print(const int arr[], int size);

//Libraries and namespace std for convinience
#include <iostream>
using namespace std;

int main()
{
	//Declares a variable that sets the capacity of the array
	int capacity;
	cout << "Enter the size of the array: ";
	cin >> capacity;

	//Declares(int*) a pointer called arr that is set to an int array of integers that has a dynamic capacity of the value entered by the user
	//This makes the array reusable after delete[], and so the capacity can be dynamically set based on the user's input
	int* arr = new int[capacity];

	//A for loop that runs through the array until the capacity is reached by prompting the user for an integer
	for (int i = 0; i < capacity; i++)
	{
		cout << "Enter integer " << i + 1 << ": ";
		cin >> arr[i];
	}
	
	//We are returning reversed, which is just the address to the array new int[size] made in the function, which technically means we are not sending the array back to main, but just the address so it can be found in the memory
	int* reversedArr = ReverseArray(arr, capacity);
	
	//Prints both the original and reversed arrays
	cout << endl << "The original array is: ";
	print(arr, capacity);
	cout << endl << "The reversed array is: ";
	print(reversedArr, capacity);

	return 0;
}

//ReverseArray dynamically allocates an array, copies the contents of the original array in reverse order, and returns a pointer to the new array.
int* ReverseArray(const int arr[], int size)
{
	//Declares(int*) a pointer called arr that is set to an int array of integers that has a dynamic capacity of the value entered by the user
	//This makes the array reusable after delete[], and so the capacity can be dynamically set based on the user's input
	int* reversed = new int[size];

	//For loop that runs through the array a number of times equal to the size of the array
	for (int i = 0; i < size; i++)
	{
		//Sets the value of the current index of the reversed array to the end of the original array, with i increasing each loop, causing the loop to move backwards through the original array
		reversed[i] = arr[size - 1 - i];
	}

	//Returns the ADDRESS of the reversed array to bypass C++ not normally allowing arrays to be returned between functions
	return reversed;
}

//print displays the contents of an array.
void print(const int arr[], int size)
{
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
