  /*
	Robert lafore chapter 2
	Task 12
	(currency converter from new British Decimal pound system to old British pound system   )
	by Zameer Ali(20SW046)
*/
#include "iostream"
using namespace std;
int main(){
	int pound,shelling,pence;
	float pound_in_new,x;
	char signpoint='.',signpound=156;
	cout<<"enter currency new British Decimal pound system :"<<signpound;
	cin>>pound_in_new;
	pound=int(pound_in_new);//pound value taken whole value of entered money
	pound_in_new=(float)pound_in_new-(int)pound_in_new;
	x=float(pound_in_new)*20;//multiply decimal part with 20 to get shelling value
	shelling=int(x);//shelling value taken whole value of entered money
	x=float(x)-int(x);
	x=float(x)*12;//multiply decimal part of shilling with 12 to get pence value
	pence=int(x);//pence value taken whole value of last result
	
	cout<<"Entered pound :"<<pound<<endl;
	cout<<"Entered Pennies : "<<pound_in_new*100<<endl;
   cout<<"Currency equivalent to old pound system :"<<signpound
   <<pound<<signpoint<<shelling<<signpoint<<pence;
return 0;
}

