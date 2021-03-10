/*
	Robert lafore chapter 4 
	Task 4(Build structures employee to store values of employee id and compensation )
	by Zameer Ali(20SW046)
*/

#include <iostream>
using namespace std;
struct employee{
	int	id_number;
	float compensation;
	};//This structure contain two members one to store id number other to store compensation
int main(){
	employee emp1,emp2,emp3;//variables of structure employee 
	cout<<"Enter number ID of first Employee : ";
	cin>>emp1.id_number;
	cout<<"Enter compensation of first Employee in :$";
	cin>>emp1.compensation;
	cout<<"Enter number ID of second Employee : ";
	cin>>emp2.id_number;
	cout<<"Enter compensation of second Employee in :$";
	cin>>emp2.compensation;
	cout<<"Enter number ID of third Employee : ";
	cin>>emp3.id_number;
	cout<<"Enter compensation of third Employee in :$";
	cin>>emp3.compensation;
	cout<<"\n\nID number of first Employee is "<<emp1.id_number
	<<" and compensation in dollars is $"<<emp1.compensation<<endl
	<<"ID number of second Employee is "<<emp2.id_number
	<<" and compensation in dollars is $"<<emp2.compensation<<endl
	<<"ID number of third Employee is "<<emp3.id_number
	<<" and compensation in dollars is $"<<emp3.compensation<<endl;
	return 0;
}
