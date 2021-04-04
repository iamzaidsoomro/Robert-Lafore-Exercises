/*
==============================================================================================================
  Name: Task 6 Lab 8: Occurrence calculator
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro
  Date: 22/3/2021
  About program: This task was assigned by Sir Sajjad Ali. This program will check how many times each 
  character was appeared.
==============================================================================================================
*/

#include <iostream>
#include <cstring> // Library included for calculating the length of the C-String
using namespace std;
char characters[]="abcdefghijk abcdefghijk abcdefghijk abcdefghijk"; // C-String
int main(){
	int size = strlen(characters); // Length of the cstring calculated by using library function and stored in a variable
	int occ[] = {0,0,0,0,0,0,0,0,0,0,0}; // array for storing occurences of each character
	for(int i=0; i<size; i++){ // Loop for iterating over the cstring
		/* 
		Conditions will if the character is equal to the condition provided, then it will increment the occurrence array
		by one on the respective index
		*/
		if(characters[i] == 'a')
			occ[0]++;
		if(characters[i] == 'b')
			occ[1]++;
		if(characters[i] == 'c')
			occ[2]++;
		if(characters[i] == 'd')
			occ[3]++;
		if(characters[i] == 'e')
			occ[4]++;
		if(characters[i] == 'f')
			occ[5]++;
		if(characters[i] == 'g')
			occ[6]++;
		if(characters[i] == 'h')
			occ[7]++;
		if(characters[i] == 'i')
			occ[8]++;
		if(characters[i] == 'j')
			occ[9]++;
		if(characters[i] == 'k')
			occ[10]++;
	}// for loop ends
	for(int i=0; i<11; i++){ // Loop will iterate over both array and cstring
		cout << characters[i] << " = " << occ[i] << endl; // Will print each index in a neat and clean manner
	}// for loop ends
	return 0;
} // main() ends

