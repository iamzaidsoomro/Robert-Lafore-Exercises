#include<iostream>
using namespace std;
int main ()
{
	int numb1,numb2,numb3;
	cout<<"enter first number : ";
	cin>>numb1;
	
	cout<<"enter second number : ";
	cin>>numb2;
	
	cout<<"enter third number : ";
	cin>>numb3;

	 if (numb1 == numb2 && numb2 == numb3)
	 	cout << "Number are equal";
	 else
	 	cout<<"Numbers are not equal:";
}
