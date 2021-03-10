/*
	Robert lafore chapter 2 
	Task 8(Usage of setfill manipulator )
	by Zameer Ali(20SW046)
*/
#include "iostream"
#include "iomanip"
using namespace std;
int main(){
		cout<<setfill('.')<<"LOCATION "<<setw(30)<<"POPULATION"<<endl
		<<"Dadu     "<<setw(30)<<171191<<endl
		<<"Sehwan   "<<setw(30)<<100000<<endl
		<<"Jamshore "<<setw(30)<<993142<<endl;
	return 0;
}

