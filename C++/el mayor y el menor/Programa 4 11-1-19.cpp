#include<iostream>

using namespace std;

int main(){
	
	cout<<"\n  Vamos a calcular cual es el mayor y el menor de los numeros que usted Intruzca :D"<<endl;
	
	float a,b,c;
	
	cout<<"\nIngrese el valor del numero A: "; cin>>a;
	
	cout<<"Ingrese el valor del numero B: "; cin>>b;
	
	cout<<"Ingrese el valor del numero C: "; cin>>c;

/*Calculamos cual es el numero mayor*/

if(a>b and a>c){


	cout<<"\n A es el mayor de los numeros";
}

else{
	
	if (b>a and b>c){
		
		cout<<"\n B es el mayor de los numeros";
		
	}

	

	else{
		
		cout<<"\n C es el mayor de los numeros";
	
		
	}

		
	
}

/*Ahora calculamos cual es el numero menor*/


if(a<b and a<c){


	cout<<"\n A es el menor de los numeros";
}

else{
	
	if (b<a and b<c){
		
		cout<<"\n B es el menor de los numeros";
		
	}

	

	else{
		
		cout<<"\n C es el menor de los numeros";
	
		
	}

		
	
}


/*Realizado por Jaime Hernández #20 5toE*/

return 0;
}

