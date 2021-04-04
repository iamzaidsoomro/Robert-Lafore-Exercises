/*
==============================================================================================================
  Name: Task 12 Lab 8: Insert Function
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro
  Date: 24/3/2021
  About program: This task was assigned by Sir Sajjad Ali. This program will insert values in array using
  function
==============================================================================================================
*/
#include <iostream>
using namespace std;
/*
===================== Declarations =====================
*/
const int size = 3; // Size of Array
int array[size]; // Array declared
void insert(int array[], int data); // insert() declared
/*
===================== Main() Function =====================
*/
int main(){
    insert(array, 3); // value 3 appended
    insert(array, 7); // value 7 appended
    insert(array, 2); // value 2 appended
    for(int i=0; i<size; i++){
        cout << array[i] << '\t'; // Displayed elements of array
    } // for loop ends
    return 0;
} // main() ends
/*
===================== Definitions =====================
*/
void insert(int array[], int data){
    static int elnum = 0; // static variable will hold the index on which the new value will be assigned
    array[elnum] = data; // assigning value
    ++elnum; // increasing value of static variable for next entry
}