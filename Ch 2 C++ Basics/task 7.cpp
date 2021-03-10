/*
	Robert lafore chapter 2 
	Task 7(Temperature coverter )
	by Zameer Ali(20SW046)
*/
#include "iostream"
using namespace std;
int main(){
float Celsius,Fahrenheit;
cout<<"Enter temperature in Celsius :"<<endl;
cin>>Celsius;
Fahrenheit=(Celsius*9/5)+32;
cout<<"Temperature "<<Celsius<<" degree in Celsius is equivalent  to "
<<Fahrenheit<<" degree Fahrenheit ";
return 0;
}

