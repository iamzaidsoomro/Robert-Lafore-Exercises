/*
==============================================================================================================
  Name: Task 10 Lab 8: Name Array
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro
  Date: 24/3/2021
  About program: This task was assigned by Sir Sajjad Ali. This program will take names from the user and
  will allow the user to search for the names in the array.
==============================================================================================================  
*/
#include <iostream>
using namespace std;
/*
===================== Declarations =====================
*/
const int numofitems = 5; // Size of String
string names[numofitems]; // Array of data type string
void FindElement(string arr[], string name, int size); // function for finding name
void displayarray(string arr[], int size); // For displaying the array elements
/*
===================== Main() function =====================
*/
int main(){
    for (int i = 0; i < numofitems; i++){ // Loop for appending new values to the array
        // Getting data from user and appending in the array
        cout << "Enter name no "<<(i+1)<<": "; 
        getline(cin, names[i]);
    } // for loop ends
    displayarray(names, numofitems); // Array elements displayed
    system("cls"); // Junk cleared from the screen
    string reqname; // variable for the requested name
    cout<<"Enter a name to check if it is in the list or not: ";
    getline(cin, reqname); // getting the name that the program will find
    FindElement(names, reqname, numofitems); // function called for finding name
    return 0;
} // main() ends
/*
===================== User Defined Function's Definitions =====================
*/
void displayarray(string arr[], int size){ // function for displaying array elements on new line
    for(int i=0; i<size; i++){
        cout << arr[i] << endl; // Traverses and prints each index value on a new line
    } // for loop ends
} // displayarray() ends
void FindElement(string arr[], string name, int size){
    for(int i=0; i<size; i++){
        if(arr[i] == name){
            system("cls"); // Clears junk output produced while processing
            cout << "Found!\nDetails:-\nName: " << name << endl; // Displays output
            break; // Breaks the loop 
        } // if statement ends
        else{
            system("cls"); // Clears junk output produced while processing
            cout << "Not Found!\nDetails:-\nName: " << name << endl; // Displays output
        } // else ends
    }// for loop ends
} // FindElement() ends
