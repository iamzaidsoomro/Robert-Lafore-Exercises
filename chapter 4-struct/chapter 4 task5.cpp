/*
	Robert lafore chapter 4 
	Task 5(Build structures Date to store values Day,Month,year)
	by Zameer Ali(20SW046)
*/
#include "iostream"
using namespace std;
struct date{
	int day;
	int month;
	int year;
};//structure  that contain three variables of int day,month,year
int main()
{
	char dummy;//for using (/) this sign between day,month and year
	date d1;
	cout<<"Enter Date in (dd/mm/yyyy) format :";
	cin>>d1.day>>dummy>>d1.month>>dummy>>d1.year;
	if(d1.day>0 && d1.day<=31)
	{
		if(d1.month>0 && d1.month<=12)
		{
			if(d1.year>=1000 && d1.year<=9999)
			{
				cout<<"Date entered in (dd/mm/yyyy) format is :"
				<<d1.day<<dummy<<d1.month<<dummy<<d1.year<<endl;
			}//end of nestede if
			else 
			{
				cout<<"Invalid INPUT! cheak Year"<<endl;	
			}//end of nested2 else
	
		}//end of nested if
		else 
		{
			cout<<"Invalid INPUT! cheak Month"<<endl;	
		}//end of nested else 
	
	}//end of if statements
		else 
		{
			cout<<"Invalid INPUT! cheak Date again"<<endl;	
		}//end of else body
	
	return 0;
	
}
