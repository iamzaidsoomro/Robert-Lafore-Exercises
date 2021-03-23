/*
	Robert lafore chapter 4 
	Task 9(Build structure time to store hours , minutes and seconds then show sum of time)
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
	time t1,t2,result,resultfinder;//variables of struct time
	char sign;// used to store sign of  (:)
	int totalsecs,totalsecs2;
	long rtotalsecs,x;	
		cout<<"Enter first time in  (12:59:59 format) :";
		cin>>t1.hours>>sign>>t1.minutes>>sign>>t1.seconds;
		totalsecs=t1.hours*3600+t1.minutes*60+t1.seconds;//total time entered in seconds
		cout<<"Enter second time in  (12:59:59 format) :";
		cin>>t2.hours>>sign>>t2.minutes>>sign>>t2.seconds;
		totalsecs2=t2.hours*3600+t2.minutes*60+t2.seconds;//total time entered in seconds
		rtotalsecs=totalsecs+totalsecs2;//adding of two times 
		result.hours=rtotalsecs/3600;//divided by 3600 to get hours 
		x=rtotalsecs%3600;//used reminder perfect devided changed in to hours remain are minutes and seconds
		result.minutes=x/60;//result of minutes stored
		result.seconds=x%60;//result of seconds stored reminder used perfect devided changed into minutes remain are seconds
		cout<<"Total time in  (12:59:59 format) ="
		<<result.hours<<sign<<result.minutes<<sign<<result.seconds;
	return 0;
}
