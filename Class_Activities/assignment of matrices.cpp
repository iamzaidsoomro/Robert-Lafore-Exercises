//very simple metrices calculator by 046
#include "iostream"
using namespace std;
const int size=3;
void sum(int arr1[size][size], int arr2[size][size]);
void sub(int arr1[size][size], int arr2[size][size]);
void mul(int arr1[size][size], int arr2[size][size]);
int main(){
	int arr1[size][size];
	int arr2[size][size];
	cout<<"Enter values of first matrices 3by3:"<<endl<<endl;
	for (int i=1; i<=size; i++){
		for (int j=1; j<=size; j++){
		cout<<"ENTER First Matrix place ["<<i<<"]["<<j<<"]:";
		cin>>arr1[i-1][j-1];
	}
		
	}
	
	cout<<"\n\nEnter values of second matrices 3by3:"<<endl<<endl;
		for (int i=1; i<=size; i++){
		for (int j=1; j<=size; j++){
		cout<<"ENTER second Matrix at place ["<<i<<"]["<<j<<"]:";
		cin>>arr2[i-1][j-1];
	}
		
	}
	int chose;
	cout<<"Enter  1 for Addition, 2 for Subtraction and 3 for Multiplication:";
	cin>>chose;
	switch(chose){
	case 1:{
	sum(arr1,arr2);
	break;}
	case 2:{
	sub(arr1,arr2);
	break;
	}
	case 3:{
	mul(arr1,arr2);
	break;
	}
	default: cout<<"Invalid input of operand ";
}

	return 0;
}
void sum(int arr1[size][size],int arr2[size][size]){
		
	int arr_result[size][size];
		for (int i=1; i<=size; i++){
		for (int j=1; j<=size; j++){
		int result=arr1[i-1][j-1]+arr2[i-1][j-1];
  	cout<<"sum of First matrix and second matrix =sum at ["<<i<<"]["<<j<<"]:"<<result<<endl;
		}
	
}
	
}
void sub(int arr1[size][size],int arr2[size][size]){
		
	int arr_result[size][size];
		for (int i=1; i<=size; i++){
		for (int j=1; j<=size; j++){
		int result=arr1[i-1][j-1]-arr2[i-1][j-1];
	 	cout<<"sum of First matrix and second matrix =subtraction at["<<i<<"]["<<j<<"]:"<<result<<endl;
		}
	
}
	
}
void mul(int arr1[size][size], int arr2[size][size]){
		
	int arr_result[size][size]=
	{  {arr1[0][0]*arr2[0][0]+arr1[0][1]*arr2[1][0]+arr1[0][2]*arr2[2][0],
		arr1[0][0]*arr2[0][1]+arr1[0][1]*arr2[1][1]+arr1[0][2]*arr2[2][1],
		arr1[0][0]*arr2[0][2]+arr1[0][1]*arr2[1][2]+arr1[0][2]*arr2[2][2]},
	   {arr1[1][0]*arr2[0][0]+arr1[1][1]*arr2[1][0]+arr1[1][2]*arr2[2][0],
		arr1[1][0]*arr2[0][1]+arr1[1][1]*arr2[1][1]+arr1[1][2]*arr2[2][1],
		arr1[1][0]*arr2[0][2]+arr1[1][1]*arr2[1][2]+arr1[1][2]*arr2[2][2]},
	   {arr1[2][0]*arr2[0][0]+arr1[2][1]*arr2[1][0]+arr1[2][2]*arr2[2][0],
		arr1[2][0]*arr2[0][1]+arr1[2][1]*arr2[1][1]+arr1[2][2]*arr2[2][1],
		arr1[2][0]*arr2[0][2]+arr1[2][1]*arr2[1][2]+arr1[2][2]*arr2[2][2]}
	};
	for (int i=0; i<size; i++){
		for (int j=0; j<size; j++){
		cout<<"Multiply of matrices =mutiplication at["<<i+1<<"]["<<j+1<<"]:"<<arr_result[i][j]<<endl;
		}
	}
}
