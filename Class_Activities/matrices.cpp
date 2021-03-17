/*
	Program: Matrix Calculator
	Developer: Zaid Soomro 20SW003
	Subject: Programming Fundamentals
	Category: Class Activity
	Teacher: Dr. Naeem Mahoto
*/

#include <iostream>
using namespace std;

// Arrays and Variables declarations
int matrixA[3][3] = {{0,0,0},{0,0,0}, {0,0,0}};
int matrixB[3][3] = {{0,0,0},{0,0,0}, {0,0,0}};
int matrixC[3][3] = {{0,0,0},{0,0,0}, {0,0,0}};
char opr;

// Function Declarations
void mymatrix(int matrix[3][3]);
void matrix_display(int matrix[3][3]);
void addition(int matrix1[3][3], int matrix2[3][3]);
void difference(int matrix1[3][3], int matrix2[3][3]);
void product(int matrix1[3][3], int matrix2[3][3]);

// Main Function
int main(){
	cout << "Data for Matrix A:" << endl;
	mymatrix(matrixA);
	system("cls");
	cout << "Data for Matrix B: " << endl;
	mymatrix(matrixB);
	system("cls");
	cout<<"What operation do you want to perform: ";
	cin>>opr;
	switch(opr){
		case '+':
			addition(matrixA, matrixB);
			cout << "Matrix A:" << endl; matrix_display(matrixA);
			cout << "Matrix B:" << endl; matrix_display(matrixB);
			cout << "Result:" << endl; matrix_display(matrixC);		
			break;
		case '-':
			difference(matrixA, matrixB);
			cout << "Matrix A:" << endl; matrix_display(matrixA);
			cout << "Matrix B:" << endl; matrix_display(matrixB);
			cout << "Result:" << endl; matrix_display(matrixC);
			break;
		case'*':
			product(matrixA, matrixB);
			cout << "Matrix A:" << endl; matrix_display(matrixA);
			cout << "Matrix B:" << endl; matrix_display(matrixB);
			cout << "Result:" << endl; matrix_display(matrixC);
			break;
		case '/':
			cout << "Division is not possible in matrices!" << endl;
			break;
		default:
			cout << "Invalid operation!" << endl;
			break;
	}
	return 0;
}

// Function definitions
void mymatrix(int matrix[3][3]){
	for(int i = 1; i<4; i++){
		for(int j = 1; j < 4; j++){
			cout << "Enter the entry at point [" << i << ", " << j << "]: ";
			cin >> matrix[i-1][j-1];
		}
	}
}
void addition(int matrix1[3][3], int matrix2[3][3]){
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			matrixC[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
}
void difference(int matrix1[3][3], int matrix2[3][3]){
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			matrixC[i][j] = matrix1[i][j] - matrix2[i][j];
		}
	}
}
void product(int matrix1[3][3], int matrix2[3][3]){
	matrixC[0][0] = (matrix1[0][0]*matrix2[0][0])+(matrix1[0][1]*matrix2[1][0])+(matrix1[0][2]*matrix2[2][0]);
	matrixC[0][1] = (matrix1[0][0]*matrix2[0][1])+(matrix1[0][1]*matrix2[1][1])+(matrix1[0][2]*matrix2[2][1]);
	matrixC[0][2] = (matrix1[0][0]*matrix2[0][2])+(matrix1[0][1]*matrix2[1][2])+(matrix1[0][2]*matrix2[2][2]);
	matrixC[1][0] = (matrix1[1][0]*matrix2[0][0])+(matrix1[1][1]*matrix2[1][0])+(matrix1[1][2]*matrix2[2][0]);
	matrixC[1][1] = (matrix1[1][0]*matrix2[0][1])+(matrix1[1][1]*matrix2[1][1])+(matrix1[1][2]*matrix2[2][1]);
	matrixC[1][2] = (matrix1[1][0]*matrix2[0][2])+(matrix1[1][1]*matrix2[1][2])+(matrix1[1][2]*matrix2[2][2]);
	matrixC[2][0] = (matrix1[2][0]*matrix2[0][0])+(matrix1[2][1]*matrix2[1][0])+(matrix1[2][2]*matrix2[2][0]);
	matrixC[2][1] = (matrix1[2][0]*matrix2[0][1])+(matrix1[2][1]*matrix2[1][1])+(matrix1[2][2]*matrix2[2][1]);
	matrixC[2][2] = (matrix1[2][0]*matrix2[0][2])+(matrix1[2][1]*matrix2[1][2])+(matrix1[2][2]*matrix2[2][2]);
}
void matrix_display(int matrix[3][3]){
	cout<<"|"<<matrix[0][0]<<"\t"<<matrix[0][1]<<"\t"<<matrix[0][2]<<"|"<< endl
		<<"|"<<matrix[1][0]<<"\t"<<matrix[1][1]<<"\t"<<matrix[1][2]<<"|"<< endl
		<<"|"<<matrix[2][0]<<"\t"<<matrix[2][1]<<"\t"<<matrix[2][2]<<"|"<< endl;
}

