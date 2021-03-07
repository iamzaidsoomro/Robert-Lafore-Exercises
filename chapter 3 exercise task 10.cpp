// to count how many years will required to get certain amount of money
//on some interest rate
#include "iostream"
using namespace std;
int main(){
	int t=0;
	float initial,result,rate,final;
	cout<<"Enter initial amount : ";
	cin>>initial;
	cout<<"Enter final amount: ";
	cin>>final;
	if(final>=initial){
	cout<<"Enter intrest rate % per anum : ";
	cin>>rate;
 	while(final>=initial)/*repeat until get required money */{
 	result=initial*(1+rate/100);
 		t++;//counting number of repeatations
	 initial=result;
 	}
cout<<"it will take around "<<t<<" year";
}
else {
	cout<<"final amount cannot be less then initial amount";
}
		return 0;
}

