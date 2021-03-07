//to tell number of ways people can sit on less number of chairs
#include <iostream>
using namespace std;
int main(){
	int guests,chairs,possible_arrangements,i;
	cout<<"Enter number of guests: ";
	cin>>guests;
	cout<<"Enter number of chairs: ";
	cin>>chairs;
	if(guests>chairs)/*requirment of program*/{
		//to find that we should use permuitation n permutation r which is equals to n!/(n-r)!
	 possible_arrangements=1;
		for(i=guests; i>(guests-chairs); i--){
			possible_arrangements=possible_arrangements*i;
			}
		cout<<"number of possible arrangements are : "<<possible_arrangements;
		}
		else {
			cout<<"Number of guests should be greater than chairs";
		}
	return 0;
}
