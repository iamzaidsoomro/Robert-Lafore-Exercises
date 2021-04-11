/*
============================================================================================================================================
    Name: Task#4 Serial no of object
    Student: Zaid Ahmed Soomro 20SW003
    About: This task was assigned was Sir Sajjad Ali. This program will provide a serial number for each class object.
============================================================================================================================================
*/
#include <iostream>
using namespace std;
// ================================================== Citizen Class ================================================== 
class Citizen{ // Class initialized with the name Citizen
    private:
        int num; // private field
    public:
        Citizen(){ // constructor which will allot a serial number to every object created
            static int number = 0; // Static temporary variable which will be holding the value of serial number
            number++; // temporary variable increased by 1
            num = number; // private field assigned the value of number
            cout<<num<<endl; // serial number printed
        } // Constructor ends
        void getSnumber(){ // Method for printing the specific object's serial number
            cout<<num<<endl; 
        } // getSnumber() ends
}; // Citizen Class ends
// ================================================== main() Function ==================================================
int main(){
    Citizen fCitizen; // object#1 created
    Citizen sCitizen; // object#2 created
    Citizen tCitizen; // object#3 created
    Citizen fourth; // object#4 created
    return 0;
} // main() function ends
