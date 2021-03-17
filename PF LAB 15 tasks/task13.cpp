#include <iostream>
using namespace std;

int main()
{
	
	int x=2 , y=5 , z=0;
	
  bool stat=(x==2);
  cout << stat<<endl;
  
  bool stat2=(x!=5);
  cout << stat2<< endl;
  
  bool stat3=(x!=5 && y>=5);
  cout << stat3<<endl;
  
  bool stat4=(z!=0 || x==2);
  cout << stat3<<endl;
  
  bool stat5=!(y<10);
  cout << stat5<<endl;
}
