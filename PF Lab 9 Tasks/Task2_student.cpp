/*
==================================================================================================================================
  Name: Task 2 Lab 9: Student's percentage in structures
  Copyright: Zaid Soomro
  Author: Zaid Ahmed Soomro
  Date: 4/4/2021
  About program: This task was assigned by Sir Sajjad Ali. This program will calculate the percentage of the student in structures
===================================================================================================================================
*/
#include <iostream>
using namespace std;
struct student{ // Structure for storing student info
    int marks_obt, marks_total; // variables store marks
}; // student ends
//====================================== main() function ======================================
int main(){
    student std1; // sdt1 variable of data type student created
    char choice; // Variable will store choice
    do{ // Do while loop
        cout<<"Enter Obtained Marks: ";
        cin>>std1.marks_obt; // Will take obtained marks
        cout<<"Enter Total Marks: ";
        cin>>std1.marks_total; // Will take total marks
        if(std1.marks_total == 0)
            cout<<"Total marks can't be zero!"<<endl; // If total marks will be zero, it will become undefined
        if(std1.marks_obt>std1.marks_total)
            cout<<"Obtained marks can't be greater than total marks"<<endl;
        else{
            float percent = (float)std1.marks_obt/std1.marks_total; // calculate percentage
            percent *= 100;
            cout<<"Percentage = "<<percent<<endl; // Display percentage
        }
        cout<<"Would you like to perform it again? (Y/N): "; // Ask for choice
        cin>>choice; // Prompt for getting choice
        if(choice == 'y' || choice == 'Y') // If user wants to continue
            system("cls"); // Clear junk from the screen
    } while(choice == 'y' || choice =='Y'); // Check condition and repeat or terminate
    return 0;
} // main() ends