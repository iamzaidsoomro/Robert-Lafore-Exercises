#include <iostream>
using namespace std;

int main()
{

 int i = 3; 
 i++; 
 cout << i; // 4
 ++i;  
 cout << i; // 5
 cout<<++i; // 6
 cout<<i++; // 6 is printed twice because we have used postfix after identifier.
 cout << i; // 7
 return 0;
}
