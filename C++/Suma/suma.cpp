#include <iostream>
#include <windows.h>
#include <conio.h>
#include <clocale>


using namespace std;
int main()
{
	system ("color 17");
	setlocale(LC_CTYPE,"Spanish");
	
	float a,b,c=0;
	
	cout <<"ingrese un numero: "; cin>>a;
	cout <<"\ningrese un numero: "; cin>>b;
	
	if(a==0  && b==0){
		
		cout<<"Ñiño, no ingresaste nada\n";
		system("pause");
			
	}else if(a==0  || b==0){
		
		cout<<"Ñiño, te faltó un numero\n";
		system("pause");

	}else{
	
	c=a+b;
	
	cout <<("\nresultado: ")<<c<<endl;
	
	}
	
	return 0;
}
