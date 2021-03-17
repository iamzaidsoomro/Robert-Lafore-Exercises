/*
	Name: Task1 Greeting greeting
	Copyright: Zaid Ahmed Soomro
	Author: Zaid Ahmed Soomro
	Date: 11/03/21 16:02
	Description: This task is assigned by Sir Sajjad Ali. This program will print greeting on the screen.
*/

#include <iostream>
using namespace std;

void greeting(string name); // greeting() function declared here with a single parameter of datatype string

int main(){
	system("title Greeting"); // This will change the title of console window
	system("color 70"); // This will change the console's background and font color
	string name; // This variable will hold user input
	cout << "Enter your name: ";
	cin >> name;
	greeting(name); // greeting() function called here with the argument name
	return 0;
}

void greeting(string name){ // greeting() function defined here
	cout << "Hello " << name << endl; // This function doesn't need cout while calling because it already prints something
}

