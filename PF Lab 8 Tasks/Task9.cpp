/*
==============================================================================================================
  Name: Task 9 Lab 8: Copying the characters of array
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro
  Date: 22/3/2021
  About program: This task was assigned by Sir Sajjad Ali. This program will copy the elements of
  one array to another.
==============================================================================================================
*/
#include <iostream>
using namespace std;
const int maxsize = 5; // variable holds the size of array and also the number of characters we want
char characters[]="abcdefghijk abcdefghijk abcdefghijk abcdefghijk"; // C-String
char newarr[maxsize]; // New array for storing desired amount of characters
void copyelements(char arr1[], char arr2[], int max); // copyelements() declared
int main(){ 
    copyelements(characters, newarr, maxsize); // copyelements() called and values are copied
    cout << "Elements of new array are:" << endl;
    for (int i = 0; i < maxsize; i++){ // Traversing through new array and printing each element
        cout << newarr[i] << endl;
    } // for loop ends
    return 0;
} // main() ends
void copyelements(char arr1[], char arr2[], int max){ // copyelements() defined
    for(int i=0; i<max; i++){ // Traversing main array 
        arr2[i] = arr1[i]; // copying each element in the coresponding index
    } // for loop ends
} // copyelements() definition ends