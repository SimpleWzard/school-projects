#include<windows.h>
#include <iostream>
using namespace std;
int main()
{
      int mes, dia;
      char op = 'n';
      
      while(op == 'n'){
      
     
      
	  		
		cout<<"               ------------------------------------ "<<endl;
		cout<<"              | .:.        Z O D I A C O       .:. |"<<endl;
		cout<<"               ------------------------------------ "<<endl<<endl;
		
	  cout<<" . - . - . - . - . - . - . - . - . - . - . - . - . - . - . "<<endl;
	  cout<<": (1)Enero     (4)Abril   (7)Julio        (10)Octubre     :"<<endl;
	  cout<<": (2)Febrero   (5)Mayo    (8)Agosto       (11)Noviembre   :"<<endl;
	  cout<<": (3)Marzo     (6)Junio   (9)Septiembre   (12)Diciembre   :"<<endl;
	  cout<<" . - . - . - . - . - . - . - . - . - . - . - . - . - . - . "<<endl;	  
	  
	  cout<<"Ingrese la fecha de su cumplea"<<char(164)<<"os (dia y mes)"<<endl;
	  
	  cout<<"\nDia: "; cin>>dia;
	  cout<<"\nMes: "; cin>>mes;
	  cout<<"\n";
	
if(mes == 3 && dia >= 21 or mes == 4 && dia <=20){	
	cout<<"Usted es Aries";	
}
if(mes == 4 && dia >=21 or mes == 5 && dia <= 21){
	cout<<"Usted es Tauro ";	
}

if(mes == 5 && dia >= 5 or mes == 6 && dia <= 21){
	cout<<"Usted es Geminis";
}

if(mes == 6 && dia >= 21 or mes == 7 && dia <= 23){
	cout<<"Usted es Cancer";	
	
}

if(mes == 7 && dia >= 24 or mes == 8 && dia <= 23){
	
	cout<<"Usted es Leo";
	
}	
if(mes == 8 && dia >= 24 or mes == 9 && dia <= 23){
	
	cout<<"Usted es Virgo";
	
}
if(mes == 9 && dia >= 24 or mes == 10 && dia <= 23){
	
	cout<<"Usted es libra";
	
}

if(mes == 10 && dia >= 24 or mes == 11 && dia <= 22){

	cout<<"Usted es capricornio";
	
}

if(mes == 11 && dia >= 23 or mes == 12 && dia <= 21){
	
	
cout<<"Usted es Sagitario";
	
}

if(mes == 12 && dia >= 22 or mes == 1 && dia <= 20){
	
	cout<<"Usted es Capricornio";
	
}
if((mes == 1 && dia >= 21 or mes == 2 && dia <= 19)){
	
	cout<<"Usted es Acuario";
	
}	  
if((mes == 2 && dia >= 20 or mes == 3 && dia <= 20)){
	
	cout<<"Usted es Picis";
	
}	  
	cout<<"\n---------------------------------------------------------"<<endl<<endl;
	
	
	
	cout<<"   . - . - . - . - . - . - . - . - ."<<endl;
	cout<<"  :                        ,___,    :"<<endl;
	cout<<"  :    Realizado por:      (0,0)    :"<<endl;
	cout<<"  :  Jaime Hndz. #20 5toE  /)_)     :"<<endl;
	cout<<"  :                         \"\"      :"<<endl;
	cout<<"   . - . - . - . - . - . - . - . - ."<<endl<<endl;
		
					
		cout<<"\nDesea salir ?";
		cout<<"\ns = Si	n = No\n\t"; cin>> op;
		
		if(op=='s'){
			
			exit(1);
			
		}
		else{
			
			while(op != 's' && op != 'n' ){
			
			cout<<"Ingrese una respuesta valida :v"<<endl;
			
			system("pause")	;
			
				cout<<"\nDesea salir ?";
				cout<<"\ns = Si	n = No\n\t"; cin>> op;
		
				
			
			}
			
		}		
				system("cls");
		
		
}


}
