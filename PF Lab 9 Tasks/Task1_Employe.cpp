/*
==================================================================================================================================
  Name: Task 1 Lab 9: Employe data in structures
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro
  Date: 4/4/2021
  About program: This task was assigned by Sir Sajjad Ali. This program will store the employe's data in structures
===================================================================================================================================
*/
#include <iostream>
using namespace std;
typedef struct employe{ // structure created
    long long number;
    float salary;
} emp; // emp will be used to create this datatype's variables
//====================================== main() function ======================================
int main(){
    emp emp1, emp2; // variables created
    cout<<"Data of first Employe:-"<<endl
        <<"Enter Employe's number: ";
    cin>>emp1.number; // data stored in first employe
    cout<<"Enter Employe's salary: ";
    cin>>emp1.salary; // data stored in first employe
    system("cls"); // Junk data cleared from the screen
    cout<<"Data of second Employe:-"<<endl
        <<"Enter Employe's number: ";
    cin>>emp2.number; // Data stored in second employe
    cout<<"Enter Employe's salary: ";
    cin>>emp2.salary; // Data stored in second employe
    system("cls"); // Junk data cleared from screen
    // Data displayed
    cout<<"First Employe:-"<<endl
        // First Employe's data
        <<"Number: 0"<<emp1.number<<endl
        <<"Salary: "<<emp1.salary<<endl
        <<"Second Employe:-"<<endl
        // Second Employe's data
        <<"Number: 0"<<emp2.number<<endl
        <<"Salary: "<<emp2.salary<<endl;
    return 0;
} // main() ends