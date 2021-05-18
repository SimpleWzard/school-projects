#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	int A, N, PI=1, SP=0;
	
	cout<<"Ingrese el Numero de veces que quiere que se ejecute el programa: "; cin>>N;
	
	while(N > 0){
		
		cout<<"Ingrese el numero en cuestion: "; cin>>A;
		
		
		
		if(A%2 == 0){
					
		 	PI = PI*A;			
			
		}
		else{
			
		
			
			SP=SP+A;
			
			
		}
		
		N=N-1;
		
	};	
	
	cout<<"mire la suma de los numeros impares: "<<SP;
	cout<<"\nmire el producto de los numeros pares: "<<PI;
	
	return 0;
}
