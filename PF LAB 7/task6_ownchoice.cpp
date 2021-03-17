/*
  Name: Task 6 Lab 7 CV maker
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro
  Date: 17/3/2021
  About program: This task is assigned by Sir Sajjad Ali in Lab#7. 
  				 This program will collect user details and will make CV for the user
*/

#include <iostream>
using namespace std;

// User Defined funtions are declared at this point
void Name(string& name);
void edu(string& education);
void prof(string& profession);
void experience(string& exp);
void position(string& pos);

//Main funtion
int main(){
	string ch = "y"; // This is for storing the user choice to continue or stop
	while(ch == "y" || ch == "Y"){ // While loop used here for asking choice
		string name, qualf, profes, exp, pos; // String variables for storing user's info
		cout << "Enter your name: ";
		Name(name);
		cout << "Enter your qualification: ";
		edu(qualf);
		cout << "Enter your profession: ";
		prof(profes);
		cout << "Enter the position you want to apply for: ";
		position(pos);
		cout << "Enter your experience in this field: ";
		experience(exp);
		system("cls"); // This will clear the screen and will print the CV in a neat and clean way
		cout << "I am " << name << ". I have studied " << qualf << " from a reputed Institue."
			 << "I am currently working as " << profes << ". I have " << exp << " of experience in this field."
			 << "I want to apply for the vacant position you announced\nfor the " << pos << ". Please consider this application.\nThanks.";  
		cout << endl << endl << "If there is any mistake in the given data, enter y to change it, otherwise press any key to continue: ";
		getline(cin, ch); // This will take the choice if the user want's to modify the information provided
		if(ch == "y" || ch == "Y"){ // If the user repeats it, printed CV will be cleared for a better interface
			system("cls");
		}
	}
	return 0;
}

// Function Definitions
void Name(string& name){ // This funtion will provide a prompt to the user for entering his name
	getline(cin, name);
}
void edu(string& education){ // This function will provide a prompt to the user for entering his qualification
	getline(cin, education);	
}
void prof(string& profession){ // This function will provide a prompt to the user for entering his current job
	getline(cin, profession);
}
void position(string& pos){ // This function will provide a prompt to the user for entering his desired position in the job
	getline(cin, pos);
}
void experience(string& exp){ // This function will provide a prompt to the user for entering his experience in the desired field
	getline(cin, exp);
}

