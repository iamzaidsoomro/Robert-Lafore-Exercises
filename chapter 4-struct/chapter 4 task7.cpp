/*
	Robert lafore chapter 4 
	Task 7(Build structures to store information of employees and print them)
	by Zameer Ali(20SW046)
*/
#include <iostream>
using namespace std;
struct employee{
	int	id_number;
	float compensation;
	string etype;
	};//used to store id number ,compensation and employee type.
	struct date{
	int day;
	int month;
	int year;
};//used to store date 
int main(){
	employee emp1,emp2,emp3;//variables of structure employee
	date d1,d2,d3;//variables of structure employee
	 	char dummy;//for using (/) this sign between day,month and year
	cout<<"Enter number ID of first Employee : ";
	cin>>emp1.id_number;
	cout<<"Enter compensation of first Employee in :$";
	cin>>emp1.compensation;
	cout<<"Enter type of first employee :";
	cin>>emp1.etype;
	cout<<"Enter Date of first Employee joining in (dd/mm/yyyy) format :";
	cin>>d1.day>>dummy>>d1.month>>dummy>>d1.year;
	cout<<"Enter number ID of second Employee : ";
	cin>>emp2.id_number;
	cout<<"Enter compensation of second Employee in :$";
	cin>>emp2.compensation;
	cout<<"Enter type of second employee :";
	cin>>emp2.etype;
	cout<<"Enter Date of second Employee joining in (dd/mm/yyyy) format :";
	cin>>d2.day>>dummy>>d2.month>>dummy>>d2.year;
	cout<<"Enter number ID of third Employee : ";
	cin>>emp3.id_number;
	cout<<"Enter compensation of third Employee in :$";
	cin>>emp3.compensation;
	cout<<"Enter type of third employee :";
	cin>>emp3.etype;
	cout<<"Enter Date of third Employee joining in (dd/mm/yyyy) format :";
	cin>>d3.day>>dummy>>d3.month>>dummy>>d3.year;
	cout<<"\n\nID number of first Employee is :"<<emp1.id_number<<endl
	<<"Compensation in dollars is $"<<emp1.compensation<<endl
	<<"Employee type :"<<emp1.etype<<endl;
	if(d1.day>0 && d1.month>0 &&d1.year>999&&d1.day<31 && d1.month<13 &&d1.year<10000)
	cout<<"Date of joined :"<<d1.day<<dummy<<d1.month<<dummy<<d1.year<<endl<<endl<<endl;
	else cout<<"invalid date: "<<endl<<endl<<endl;
	cout<<"ID number of second Employee is "<<emp2.id_number<<endl
	<<"Compensation in dollars is $"<<emp2.compensation<<endl
	<<"Employee type :"<<emp2.etype<<endl;
	if(d2.day>0 && d2.month>0 &&d2.year>999&&d2.day<31 && d2.month<13 &&d2.year<10000)
	cout<<"Date of joined :"<<d2.day<<dummy<<d2.month<<dummy<<d2.year<<endl<<endl<<endl;
	else cout<<"invalid date: "<<endl<<endl<<endl;
	cout<<"ID number of third Employee is "<<emp3.id_number<<endl
	<<"Compensation in dollars is $"<<emp3.compensation<<endl
	<<"Employee type :"<<emp3.etype<<endl;
	if(d3.day>0 && d3.month>0 &&d3.year>999&&d3.day<31 && d3.month<13 &&d3.year<10000)
	cout<<"Date of joined :"<<d3.day<<dummy<<d3.month<<dummy<<d3.year<<endl;
	else cout<<"invalid date: "<<endl;
	return 0;
}
