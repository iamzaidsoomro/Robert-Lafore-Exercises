/*
==============================================================================================================
  Name: Task 8 Lab 8: Second appearance of f in array
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro
  Date: 22/3/2021
  About program: This task was assigned by Sir Sajjad Ali. This program will print the index position of f.
==============================================================================================================
*/

#include <iostream>
#include <cstring> // library for strlen() function
using namespace std;
char characters[]="abcdefghijk abcdefghijk abcdefghijk abcdefghijk"; // C-String
int pos(char arr[], char letter); // Function declared for checking the position of character
int main(){
	cout << "Second appearance of character f is: "<< pos(characters, 'f') << endl; // pos() function called and value is printed
	return 0;
} // main() ends

int pos(char arr[], char letter){ // pos() defined
	int count = 0; // count variable for storing the number of time the character has been found
	for(int i=0; i<(strlen(arr)); i++){ // for traversing the C-string
		if(arr[i] == letter){ // if character is found
			count++; // Increase count variable by one
			if(count==2){ // if the count variable reaches 2
				return i; // return the index value of character
				break; // terminate the loop
			} // second if statement ends 
		} // first if statement ends
	} // for loop ends
} // pos() definition ends