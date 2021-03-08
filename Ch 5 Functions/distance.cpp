/*
	Robert Lafore
	Chapter 5 functions
	exercise no 4
	by Zaid
*/

#include <iostream>
using namespace std;

int result(int first, int second); // Function declared here

int main(){
	int distance1, distance2;
	cout << "Enter distance #1: ";
	cin >> distance1; // This value will be stored in first parameter of result() function
	cout << "Enter distance #2: ";
	cin >> distance2; // This value will be stored in the second parameter of result() function
	cout << "\nLargest distance is: " << result(distance1, distance2); // value of function printed here
}

int result(int first, int second){ // function defined here
	int final;
	if(first >= second){
		return first; // if condition will be satisfied, value of first parameter will be returned by the function
	} else if(second >= first){
		return second; // if condition will be satisfied, value of second parameter will be returned by the function
	} 
}
