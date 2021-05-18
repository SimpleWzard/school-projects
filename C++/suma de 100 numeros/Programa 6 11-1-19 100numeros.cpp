#include<iostream>

using namespace std;

int main(){
	
	cout<<"\n.:. SUMADORA DE 100 NUMEROS .:."<<endl;
	cout<<"\nGuia de uso: Escribe un numero cada vez que te lo pide, osea 100 veces(sientate, te va a tomar un rato :D)"<<endl;
	
	
	int I, S, A;
	
	I=100;
	S=0;
	
	while(I!= 0){
		
		cout<<"\n Ingrese un numero: "; cin>>A;
		
		S= S+A;
		
		
		I= I - 1;		
		
	}
	
	cout<<"\nLa respesta es : "<<S; 
	
	return 0;
}
