/*
==============================================================================================================
  Name: Task 4 Lab 8: program that finds the smallest element in the array and also its index
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro 20SW003
  Date: 21/3/2021
  About program: This task was assigned by Sir Sajjad Ali .This program finds the smallest element in the array
  and also its index.
==============================================================================================================
*/

#include <iostream>
using namespace std;

int size = 5; // Variable hold the max number of elements in the array
int array[]={5,10,15,20,25}; // Array containing 5 elements
void smallest(int arr[]); // function declaration
int main(){ 
	smallest(array); // function called
	return 0;
} // main() ends
void smallest(int arr[]){ // smallest() called
	for(int i=0; i<size; i++){ // for loop for iterating each element of array
		if(arr[i]<=arr[0] && arr[i]<=arr[1] && arr[i]<=arr[2] && arr[i]<=arr[3] && arr[i]<=arr[4]){ // checking which one is smallest
			cout << "Smallest number is = " << arr[i] << " and has index position equals to " << i << endl; // printing the smallest
		} // if ends
	} // for ends
	cout << "Ended" << endl;
} // smallest() ends

