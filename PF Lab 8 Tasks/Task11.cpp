/*
==============================================================================================================
  Name: Task 11 Lab 8: Delete duplicates
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro
  Date: 24/3/2021
  About program: This task was assigned by Sir Sajjad Ali. This program will take numbers between 1 and 5,
  will check for duplicates and will print items only once (not it's duplicate).
==============================================================================================================
*/
#include <iostream>
using namespace std;
/*
===================== Declarations =====================
*/
const short size = 5; // Size of Array
short numbers[size]; // Array
void dup(short arr1[], const short max); // function defined
/*
===================== Main() Function =====================
*/
int main(){
  // Inserting elements to the array
  for(int i=0; i<size; i++){
    cout<<"Enter number for index position: ";
    cin>>numbers[i];
    if(numbers[i]<1||numbers[i]>5){
      numbers[i] = 5;
      cout <<"The number you entered is not valid for this program, it is\nautomatically set to 5\n";
    } // if statement ends
    else{
      continue;
    } // else ends
  } // for loop ends
  dup(numbers, size); // Function called
  return 0;
} // main() ends
/*
===================== Function Definitions =====================
*/
void dup(short arr1[], const short max){
  for(int i=0; i<size; i++){ // main iteration
    for(int j=(i+1); j<size; j++){ // sub iteration
      if(arr1[i] == arr1[j]){ // if true
        arr1[j] = 0; // make that value = 0
      }// if statement ends
    } // sub iteration ends
  } // main iteration ends
  // For displaying
  for(int i=0; i<max; i++){
    if(arr1[i] != 0){ // if true
      cout<<arr1[i]<<'\t'; // display this
    } // if statement ends
  } // for loop ends
} // dup() ends