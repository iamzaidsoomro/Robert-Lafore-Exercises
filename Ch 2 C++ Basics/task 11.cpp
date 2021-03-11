  /*
	Robert lafore chapter 2
	Task 11
	(using of manipulator to show result  )
	by Zameer Ali(20SW046)
*/
	#include "iostream"
	#include "iomanip"
	using namespace std;
	int main(){
		/*setiosflags it is used to set format of stream 
		here it is used to manage stream string in left side then manage width 
		according to setw manipulator */
		cout<<setiosflags(ios::left)<<setw(20)<<"1st name"<<setw(20)<<"last name"<<setw(20)<<"street add"<<setw(20)<<"town"<<setw(20)<<"state"<<endl;
		cout<<setiosflags(ios::left)<<setfill('-')<<setw(85)<<"-"<<endl;
		cout<<setiosflags(ios::left)<<setfill(' ')<<setw(20)<<"Jones"<<setw(20)<<"Bernard"<<setw(20)<<"109 pine lane"<<setw(20)<<"Littletown"<<setw(20)<<"MI"<<endl
		<<setw(20)<<"O'Brain"<<setw(20)<<"Coleen"<<setw(20)<<"42 E . 99th Ave."<<setw(20)<<"Bigcity"<<setw(20)<<"NY"<<endl
		<<setw(20)<<"Wong"<<setw(20)<<"Harry"<<setw(20)<<"121-A Alabama St."<<setw(20)<<"Lakeville"<<setw(20)<<"IL"<<endl;
	return 0;
	}

