//pyramid with help of loops
#include <iostream>
using namespace std;
int main(){
	int i,j,k,num=20; 
	for(i=1; i<=num; i++){
		for(j=1; j<=num-i; j++){
		cout<<" ";
		}
		
			for(k=1; k<=2*i-1; k++){
				cout<<"x";
			}
		
		cout<<endl;
		}
	return 0;
}
