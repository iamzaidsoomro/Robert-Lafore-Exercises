/*
==============================================================================================================
  Name: Task 5 Lab 8: Character calculator
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro
  Date: 22/3/2021
  About program: This task was assigned by Sir Sajjad Ali. This program will calculate the number of 
  characters in a C-String.
==============================================================================================================
*/

#include <iostream>
#include <cstring> // library for calculating string length using strlen()
using namespace std;
int countwspace = 0; // variable holds number of characters with spaces
int countwospace = 0; // variable holds number of characters without spaces
char characters[]="abcdefghijk abcdefghijk abcdefghijk abcdefghijk"; // c-string
int ncharactersws(char arr[]); // ncharactersws() function declaration
int ncharacterswos(char arr[]); // ncharacterswos() function declaration
int main(){
	// printing both values by calling functions
	cout << "Number of characters with spaces = " << ncharactersws(characters) << endl;
	cout << "Number of characters without spaces = " << ncharacterswos(characters) << endl;
	return 0;
}// main() ends
int ncharactersws(char arr[]){ // ncharactersws() declaration
	int len = strlen(arr); // length of array calculated
	for(int i = 0; i<len; i++){ // traversing the array
		countwspace++; // count increased by 1 during each iteration
	} // for loop ends
	return countwspace;
} // ncharactersws() ends
int ncharacterswos(char arr[]){ // ncharacterswos() declaration
	int len = strlen(arr); // length of array calculated
	for(int i = 0; i<len; i++){ // traversing the array
		if(arr[i] == ' '){ // checking for spaces
			continue; // go back to i increment expression
		} else{ 
			countwospace++; // otherwise increase count of characters without spaces
		} // condition ends
	} // for loop ends
	return countwospace;
} // ncharacterswos() ends
