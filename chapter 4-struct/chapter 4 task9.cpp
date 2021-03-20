/*
	Robert lafore chapter 4 
	Task 9(Build structure time to store hours , minutes and seconds then show entered time in seconds)
	by Zameer Ali(20SW046)
*/
#include <iostream>
using namespace std;
struct time{
	int hours;
	int minutes;
	int seconds;
	};// three members one will store hours other will minutes and last will store seconds
int main()
{
	time t1;//variables of struct time
	char sign;// used to store sign of  (:)
		cout<<"Enter Time in  (12:59:59 format) :";
		cin>>t1.hours>>sign>>t1.minutes>>sign>>t1.seconds;
		long totalsecs=t1.hours*3600+t1.minutes*60+t1.seconds;
		cout<<"Time entered equivalent to total seconds :"<<totalsecs;

	return 0;
}
