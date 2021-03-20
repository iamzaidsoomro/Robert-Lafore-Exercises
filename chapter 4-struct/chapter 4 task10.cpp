/*
	Robert lafore chapter 4 
	Task 10(Build structure sterling to store pounds,shellings and pences 
	then store results in it and display that)
	by Zameer Ali(20SW046)
*/
#include "iostream"
using namespace std;
struct sterling{
	int pounds;
	int shellings;
	int pences;
	};//three members one will store pounds other will shellings and last will store pences.

int main(){
	sterling result;//variable of struct sterling
	double pound_in_new,x;
	char sign=156,point='.';//sign first is pound sign and 2nd is (.) sign 
	cout<<"Enter currency in new british pound system : "<<sign;
	cin>>pound_in_new;
	result.pounds=int(pound_in_new);//pound value taken whole value of entered money
	pound_in_new=double(pound_in_new)-int(pound_in_new);
	x=double(pound_in_new)*20;//multiply decimal part with 20 to get shelling value
	result.shellings=int(x);//shelling value taken whole value of entered value above
	x=double(x)-int(x);
	x=double(x)*12;//multiply decimal part of shilling with 12 to get pence value
	result.pences=int(x);//pence value taken whole value of last result
	cout<<"Entered currency equivalent to old british pound system : "<<sign
	<<result.pounds<<point<<result.shellings<<point<<result.pences;

	return 0;

}
