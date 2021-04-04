/*
==============================================================================================================
  Name: Task 13 Lab 8: Two digit numbers
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro
  Date: 24/3/2021
  About program: This task was assigned by Sir Sajjad Ali. This program will print only two digit numbers
==============================================================================================================
*/
#include <iostream>
using namespace std;
/*
===================== Declarations =====================
*/
const int maxitems = 9; // Max size of array
int array[maxitems]={5,10,15,20,25,99,2,1,11}; // array
void displayTwoDigit(int arr[], int size); // function declared
/*
===================== main() Function =====================
*/
int main(){
    displayTwoDigit(array, maxitems); // Function called to print two digit values
    return 0;
} // main() ends
/*
===================== Function Definitions =====================
*/
void displayTwoDigit(int arr[], int size){
    for(int i=0; i<size; i++){ // Traversing the array
        if(arr[i]>9 && arr[i]<100){
            cout<<arr[i]<<endl; // displaying if the condition is true
        }
    }
}