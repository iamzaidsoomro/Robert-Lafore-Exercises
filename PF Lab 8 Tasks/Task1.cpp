/*
==============================================================================================================
  Name: Task 1 Lab 8: Sum of Array Members
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro 20SW003
  Date: 21/3/2021
  About program: This task was assigned by Sir Sajjad Ali. This program will calculate the sum of the array 
  elements.
==============================================================================================================
*/

#include <iostream>
using namespace std;
const int size = 5; // Max number of elements in array
int array[] = {0}; // Array will contain 5 integer values
int sum(int myarr[], const int nelements); // sum() function declaration
int main(){
	for(int i=0; i<5; i++){ // This loop is for appending values in array[]
		array[i] += array[i-1] + 5; // Each value appended will be 5 more than the previous value
		cout << array[i] << endl; // Newly appended element printed
	}
	cout << "Sum = " << sum(array, size) << endl; // Calling sum() function
	return 0;
} // main() ends
int sum(int myarr[], const int nelements){ // sum() function definition
	int addition = 0; // variable holds sum of array elements
 	for(int i=0; i<=nelements; i++){ // for loop iterates over each array member
		addition += myarr[i]; // value of i index added to this variable
	} // for loop ends
	return addition; // Returns sum
} // sum() definition ends

