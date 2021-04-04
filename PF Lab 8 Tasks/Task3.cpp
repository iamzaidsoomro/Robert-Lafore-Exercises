/*
==============================================================================================================
  Name: Task 3 Lab 8: Sum & Product of last 2 elements
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro 20SW003
  Date: 21/3/2021
  About program: This task was assigned by Sir Sajjad Ali. This program will display the second last element 
  of the array and will calculate the sum and product of last two elements.
==============================================================================================================
*/

#include <iostream>
using namespace std;
int array[]={5,10,15,20,25}; // Array containing 5 elements
int size = 5; // Variable hold the max number of elements in the array
inline int sum(int arr[]); // sum() function declaration
inline int product(int arr[]); // product() function declaration
int main(){
	cout << array[size-2] << endl // second last element printed
		 << "Sum of last two elements = " << sum(array) << endl // Sum of last two elements printed
		 << "Product of last two elements = " << product(array) << endl;  // product of last two elements printed
	return 0;
} // main() function ends
inline int sum(int arr[]){ // sum() function definition
	return arr[size-1] + arr[size-2]; // sum of last two elements returned
} // sum() definition ends
inline int product(int arr[]){ // product() function definition
	return arr[size-1] * arr[size-2]; // product of last two elements returned
} // product() definition ends

