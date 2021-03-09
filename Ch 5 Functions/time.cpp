/*
	Book: Robert Lafore
	Chapter: 5 - Functions
	Exercise: 5
	Developer: Zaid Soomro	
*/

#include <iostream>
using namespace std;

long hms_to_secs(int hrs, int mints, int secs);

int main(){
	int hours, minutes, seconds;
	hours = 1; minutes = 1; seconds = 1;
	while(hms_to_secs(hours, minutes, seconds) != 0){
		cout << "Enter hours: "; cin >> hours;
		cout << "Enter minutes: "; cin >> minutes;
		cout << "Enter seconds: "; cin >> seconds;
		
		cout << "\nTime entered by user: " << hours << ':' << minutes << ':' << seconds << endl
			 << "Total seconds in given time: " << hms_to_secs(hours, minutes, seconds) << " seconds.";
		cout << "\nFor quiting, enter all three values as 0" << endl;
	}
	return 0;
}

long hms_to_secs(int hrs, int mints, int secs){
	long result;
	result = hrs*60*60;
	result += mints*60;
	result += secs;
	return result;
}

