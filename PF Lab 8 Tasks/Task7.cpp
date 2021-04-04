/*
==============================================================================================================
  Name: Task 7 Lab 8: first appearance of f in array
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro
  Date: 22/3/2021
  About program: This task was assigned by Sir Sajjad Ali. This program will print the index position of f.
==============================================================================================================
*/

#include <iostream>
#include <cstring> // Library for using the strlen() function
using namespace std;
char characters[]="abcdefghijk abcdefghijk abcdefghijk abcdefghijk"; // C-String
int pos(char arr[], char letter); // function declared for checking the index of character
int main(){
	cout << "First appearance of character f is: "<< pos(characters, 'f') << endl; // calling pos() function and printing the value
	return 0;
}// main() ends
int pos(char arr[], char letter){ // pos() function defined
	for(int i=0; i<(strlen(arr)); i++){ //loop will iterate over each cstring character
		if(arr[i] == letter){ // if it finds character
			return i; // index position will be returned
			break; // loop will be terminated
		}// if statement ends
	} // for loop ends
} // pos() definition ends

