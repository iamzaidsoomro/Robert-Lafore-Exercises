#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int num,i;
	cout<<"enter any  number : ";
	cin>>num;
	for(i=1; i<201; i++){
		cout<<setw(8)<<num*i;
		if(i%10==0){
			cout<<endl;
		}
	}
	
	return 0;
}
