/*
	Name: Task2 Full Name
	Copyright: Zaid Ahmed Soomro
	Author: Zaid Ahmed Soomro
	Date: 11/03/21 16:02
	Description: This task is assigned by Sir Sajjad Ali. This program will print full name of the user on the screen
*/

#include <iostream>
using namespace std;

// Declaration of fullname inline funtion with 2 string parameters and string return type
inline string fullname(string first_name, string second_name); 

int main(){
	system("title Full Name"); // This will change the title of console window
	system("color 70"); // This will change the console's background and font color
	string f_name, s_name; // These two variables will hold user input
	cout << "Enter first name: ";
	cin >> f_name;
	cout << "Enter second name: ";
	cin >> s_name;
	cout << fullname(f_name, s_name);	
	return 0;
}

inline string fullname(string first_name, string second_name){ // fullname() function defined here
	return first_name + " " + second_name; // This function needs cout statement at the time of calling to be printed
}

