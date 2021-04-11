/*
============================================================================================================================================
    Name: Task#3 Data of employee
    Student: Zaid Ahmed Soomro 20SW003
    About: This task was assigned was Sir Sajjad Ali. This program will set and display emplyee data
============================================================================================================================================
*/
#include <iostream>
using namespace std;
// ================================================== Employee Class =================================================
class Employee{
    private:
        long long number;
        int salary;
    public: 
        void setData(){ // Setter method for taking input
            cout<<"Enter number: ";
            cin>>number;
            cout<<"Enter salary: ";
            cin>>salary;
        } // setData() ends
        void getData(){ // Getter method for displaying data
            cout<<"\nNumber: +92"<<number<<endl<<"Salary: "<<salary<<endl;
        } // getData() ends
}; // Employee Class ends
// ================================================== main() Function =================================================
int main(){
    Employee emp1; // object#1 created
    Employee emp2; // object#2 created
    Employee emp3; // object#3 created
    // Setting data for all objects
    emp1.setData();
    emp2.setData();
    emp3.setData();
    // Displaying data of all objects
    emp1.getData();
    emp2.getData();
    emp3.getData();
    return 0;
} // main() ends