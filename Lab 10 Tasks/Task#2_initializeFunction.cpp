/*
============================================================================================================================================
    Name: Task#2 Initializer
    Student: Zaid Ahmed Soomro 20SW003
    About: This task was assigned was Sir Sajjad Ali. This is a calculator made in OOP.
============================================================================================================================================
*/
#include <iostream>
using namespace std;
// ================================================== MyClass Class =================================================
class MyClass{
    private:
        int num; 
    public:
        MyClass(){ // Constructor will initialize the field to zero
            num = 0;
        }
        void getNum(){ // Method for printing value of variable
            cout<<num<<endl;
        }
}; // MyClass ends
// ================================================== main() Function =================================================
int main(){
    MyClass number; // Object created
    number.getNum(); // printing value
    return 0;
} // main() ends