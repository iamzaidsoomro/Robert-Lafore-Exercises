/*
	Robert lafore chapter 4 
	Task 7(Build structures to store information of employees and print them)
	by Zameer Ali(20SW046)
*/
#include <iostream>
using namespace std;
	struct date{
	int day;
	int month;
	int year;
};//used to store date 
struct employee{
	int	id_number;
	float compensation;
	string etype;
	date d;
	};//used to store id number ,compensation and employee type.
int main(){
	employee emp1,emp2,emp3;//variables of structure employee
	char dummy;//for using (/) this sign between day,month and year
	cout<<"Enter number ID of first Employee : ";
	cin>>emp1.id_number;
	cout<<"Enter compensation of first Employee in :$";
	cin>>emp1.compensation;
	cout<<"Enter type of first employee :";
	cin>>emp1.etype;
	cout<<"Enter Date of first Employee joining in (dd/mm/yyyy) format :";
	cin>>emp1.d.day>>dummy>>emp1.d.month>>dummy>>emp1.d.year;
	cout<<"Enter number ID of second Employee : ";
	cin>>emp2.id_number;
	cout<<"Enter compensation of second Employee in :$";
	cin>>emp2.compensation;
	cout<<"Enter type of second employee :";
	cin>>emp2.etype;
	cout<<"Enter Date of second Employee joining in (dd/mm/yyyy) format :";
	cin>>emp2.d.day>>dummy>>emp2.d.month>>dummy>>emp2.d.year;
	cout<<"Enter number ID of third Employee : ";
	cin>>emp3.id_number;
	cout<<"Enter compensation of third Employee in :$";
	cin>>emp3.compensation;
	cout<<"Enter type of third employee :";
	cin>>emp3.etype;
	cout<<"Enter Date of third Employee joining in (dd/mm/yyyy) format :";
	cin>>emp3.d.day>>dummy>>emp3.d.month>>dummy>>emp3.d.year;
	cout<<"\n\nID number of first Employee is :"<<emp1.id_number<<endl
	<<"Compensation in dollars is $"<<emp1.compensation<<endl
	<<"Employee type :"<<emp1.etype<<endl;
	if(emp1.d.day>0 && emp1.d.month>0 &&emp1.d.year>999&&emp1.d.day<31 && emp1.d.month<13 &&emp1.d.year<10000)
	cout<<"Date of joined :"<<emp1.d.day<<dummy<<emp1.d.month<<dummy<<emp1.d.year<<endl<<endl<<endl;
	else cout<<"invalid date: "<<endl<<endl<<endl;
	cout<<"ID number of second Employee is "<<emp2.id_number<<endl
	<<"Compensation in dollars is $"<<emp2.compensation<<endl
	<<"Employee type :"<<emp2.etype<<endl;
	if(emp2.d.day>0 && emp2.d.month>0 &&emp2.d.year>999&&emp2.d.day<31 && emp2.d.month<13 &&emp2.d.year<10000)
	cout<<"Date of joined :"<<emp2.d.day<<dummy<<emp2.d.month<<dummy<<emp2.d.year<<endl<<endl<<endl;
	else cout<<"invalid date: "<<endl<<endl<<endl;
	cout<<"ID number of third Employee is "<<emp3.id_number<<endl
	<<"Compensation in dollars is $"<<emp3.compensation<<endl
	<<"Employee type :"<<emp3.etype<<endl;
	if(emp3.d.day>0 && emp3.d.month>0 &&emp3.d.year>999&&emp3.d.day<31 && emp3.d.month<13 &&emp3.d.year<10000)
	cout<<"Date of joined :"<<emp3.d.day<<dummy<<emp3.d.month<<dummy<<emp3.d.year<<endl;
	else cout<<"invalid date: "<<endl;
	return 0;
}
