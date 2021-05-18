#include<iostream>
#include<math.h>

using namespace std;

int main(){	
	
	cout<<"\n.:. Bienvenido a su calculador de Hipotenusa .:."<<endl;
	
	float c1, c2, hip;
	
	cout<<"\nIngrese el valor del cateto 1: "; cin>>c1;
	
	cout<<"Ingrese el valor del cateto 2: "; cin>>c2;
	
	hip = sqrt((pow(c1,2))+(pow(c2,2)));
	
	cout<<"\nLa hipotenusa de tu triangulo rectangulo es: "<<hip<<endl;
	
	
}
