/*
==============================================================================================================
  Name: Task 2 Lab 8: Reverse order of array elements
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro 20SW003
  Date: 21/3/2021
  About program: This task was assigned by Sir Sajjad Ali. This program will print the reverse order of the 
  array elements.
==============================================================================================================
*/

#include <iostream>
using namespace std;
int array[]={5,10,15,20,25}; // Array containing 5 elements
void reverseit(int myarray[], int size); // Declaration of reverseit() function
int main(){
	reverseit(array, 5); // reverseit() function call
	return 0;
} // main() ends
void reverseit(int myarray[], int size){ // reverseit() function definition
	for(int i=(size-1); i>=0; i--){ // for loop iterates over array members in reverse order
		cout << myarray[i] << endl; // each element printed on new line vertically for a better UI
	} // for loop ends
} // reverseit() function definition ends

