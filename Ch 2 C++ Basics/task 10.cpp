  /*
	Robert lafore chapter 2
	Task 10
	(currency converter from old British pound system to new British Decimal pound system  )
	by Zameer Ali(20SW046)
*/
#include "iostream"
#include "iomanip"
using namespace std;
int main(){
	int pound,shilling,pence;
	float x,y,result;
	char signpoint,signpound=156;
	cout<<"Enter currency  in old British pound system :"<<signpound;
	cin>>pound>>signpoint>>shilling>>signpoint>>pence;
	pound=float(pound);
	x=(float)shilling/20;//changing shilling to pound
	y=(float)pence/240;//changing pence to pound
	result=pound+x+y;//whole part shows pound & decimal shows pennys
	cout<<"Entered pound :    "<<pound<<endl;		
	cout<<"Entered shilling : "<<shilling<<endl;
	cout<<"Entered pence :    "<<pence<<endl;
	cout<<"Currency equivalent to new British Decimal pound system :"
	<<signpound<<setprecision(3)<<result;
	return 0;
}

