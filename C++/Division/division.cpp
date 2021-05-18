#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	system ("color 17");
	
	float a,b,c=0;
	
	cout <<"ingrese un numero: "; cin>>a;
	cout <<"ingrese un numero: "; cin>>b;
	
	c=a/b;
	
	cout <<("\n resultado: ")<<c<<endl;
	
	return 0;
}
