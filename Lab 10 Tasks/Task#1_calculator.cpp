/*
============================================================================================================================================
    Name: Task#1 Calculator
    Student: Zaid Ahmed Soomro 20SW003
    About: This task was assigned was Sir Sajjad Ali. This is a calculator made in OOP.
============================================================================================================================================
*/
#include <iostream>
using namespace std;
// ================================================== Calculator Class =================================================
class Calculator{
    private:
        float result;
    public:
    // Four functions defined according to condition
        void sum(float n1, float n2){
            result = n1+n2;
            cout<<"Sum: "<<result<<endl;
        } // sum() ends
        void diff(float n1, float n2){
            result = n1-n2;
            cout<<"Difference: "<<result<<endl;
        } // diff() ends
        void product(float n1, float n2){
            result = n1*n2;
            cout<<"Product: "<<result<<endl;
        } // product() ends
        void div(float n1, float n2){
            if(n2 != 0){
                result = n1/n2;
                cout<<"Division: "<<result<<endl;
            } // if statement ends
            else{
                cout<<"Division: Infinity"<<endl;
            } // else ends
        } // div() ends
}; // Calculator class ends
// ================================================== Main() Function =================================================
int main(){
    Calculator calc;
    float numb1, numb2;
    char op;
    do{
        cout<<"Enter first number: ";
        cin>>numb1;
        cout<<"Enter second number: ";
        cin>>numb2;
        cout<<"Enter operator: ";
        cin>>op;
        switch(op){
            case '+': calc.sum(numb1, numb2); break;
            case '-': calc.diff(numb1, numb2); break;
            case '*': calc.product(numb1, numb2); break;
            case '/': calc.div(numb1, numb2); break;
            default: cout<<"Invalid operator!"<<endl; break;
        } // switch(op) ends
        cout<<"Would you like to perform it again?(Y/N): ";
        cin>>op;
        if(op=='y'||op=='Y')
            system("cls"); // Clear junk from the screen if the user wants to perform again
    } while(op=='y'||op=='Y'); // do while loop ends
    return 0;
} // main() ends