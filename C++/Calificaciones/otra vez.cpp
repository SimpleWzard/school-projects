#include<iostream>
#include<string.h>
#include<fstream>
#include<windows.h>
using namespace std;

	char nombre[100], apellido[100], asignatura[100], numero_orden[100], curso[100], nota1[100], nota2[100], nota3[100], nota4[100], nota_examen[100], nota_completivo[100], nota_extraordinario[100];
	string estado, nombre1;
	float n1, n2, n3, n4, promedio, nexam, notaFinal,nexamcom, nexamextra;
	float completivo=0;
	float EXTRA=0; 
	bool chequeo = true;


int titulo(){
	system("cls");
	
	cout<<"               ----------------------------------"<<endl;
	cout<<"              | .:. Politecnico El Ave Maria .:. |"<<endl;
	cout<<"               ---------------------------------- "<<endl<<endl;
	
	cout<<"           --------------------------------------------"<<endl;
	cout<<"          | Centro Educativo Politecnico El Ave Maria  |"<<endl;
	cout<<"          |               RNC: 11238434923             |"<<endl;
	cout<<"          |      Tel: 809-335-8760 / 829-284-7781      |"<<endl;
	cout<<"           -------------------------------------------- "<<endl<<endl;
	
	
	
}


int cian(){

	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),3);
		
}
int blanco(){
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15);
}

int salir(){
	string opc;
	
	blanco(); cout<<"\n---------------------------------------------------------"<<endl<<endl<<endl;
		
		
		
		cout<<"   . - . - . - . - . - . - . - . - . - . - ."<<endl;
		cout<<"  :                           "; cian(); cout<<" _-_,, "; blanco(); cout<<"      :"<<endl;
		cout<<"  :    Realizado por:         "; cian(); cout<<"(  //  "; blanco(); cout<<"      :"<<endl;
		cout<<"  :  Jaime Hndz. #20 5toE     "; cian(); cout<<"  _||  "; blanco(); cout<<"      :"<<endl;
		cout<<"  :  Jaime25112002@gmail.com  "; cian(); cout<<"  _||  "; blanco(); cout<<"      :"<<endl;
		cout<<"  :  829-284-7781/809-335-8760"; cian(); cout<<"   ||  "; blanco(); cout<<"      :"<<endl;
		cout<<"  :                           "; cian(); cout<<"-__-,  "; blanco(); cout<<"      :"<<endl;
		cout<<"  :                                        :"<<endl;  
		cout<<"   . - . - . - . - . - . - . - . - . - . - ."<<endl<<endl;
		
		cout<<"\n1. Continuar\n2. Salir\nQue desea hacer?\n=====> "; getline(cin,opc);
			
		while(opc != "1" && opc != "2" ){
			
			cout<<"\nValor no valido, Ingrese la opcion otra vez"; 
			cout<<"\n1. Continuar\n2. Salir\nQue desea hacer?\n=====> "; getline(cin,opc);
		
			}	
			
	
		if(opc == "1"){
			
 			system("cls");
 			
			
		}
		else if(opc == "2"){
		
			string opc2;
			cout<<"\n1. no, continuar\n2. si, salir\nRealmente desa salir?\n=====> "; getline(cin,opc2);	
			
			while(opc2 != "1" && opc2 != "2" ){
			
				cout<<"\nValor no valido, Ingrese la opcion otra vez"; 
				cout<<"\n1. no, continuar\n2. si, salir\nRealmente desa salir?\n=====> "; getline(cin,opc2);
			
			}
			if(opc2=="2"){
				
			exit(1);
				
			}
			
			
		 
		}		
	
	
}


int main(){
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),6);
	titulo();
	
	cout<<"   - . - . - . - . - . -"<<endl;
	cout<<"  :. Ingrese los datos .:"<<endl;
	cout<<"   - . - . - . - . - . -"<<endl;
	

	cout<<"\nNOMBRE: "; cin.getline(nombre, 100);
	
	while(strlen(nombre)==0 ){
		
		cout<<"\nTodos los datos son necesarios*";
		
		cout<<"\nNOMBRE: "; cin.getline(nombre, 100);
		
		
	}

	for (int i = 0; i < strlen(nombre); i++)
    {             					
		while(!isalpha(nombre[i]) && !isspace(nombre[i])){
			cout<<"\n\nSolo ingrese letras >:v\n\n";
			
			
			
			
			
			cout<<"\nNOMBRE: "; cin.getline(nombre,100);
			
		}
       

    }
    
	cout<<"\nAPELLIDO: "; cin.getline (apellido,100);
		
	while(strlen(apellido)==0 ){
		
		cout<<"\nTodos los datos son necesarios*";
		
		cout<<"\nAPELLIDO: "; cin.getline (apellido,100);
		
	}
	
	
	for (int i = 0; i < strlen(apellido); i++)
    {             					
		while(!isalpha(apellido[i]) && !isspace(apellido[i])){
			
			
			cout<<"\n\nSolo ingrese letras >:v\n\n";
			
			
			cout<<"\nAPELLIDO: "; cin.getline (apellido,100);
		}
       

    }
    
	cout<<"\nASIGNATURA: "; cin.getline (asignatura,100);
	
	while(strlen(asignatura)==0 ){
		
		cout<<"\nTodos los datos son necesarios*";
		
		cout<<"\nASIGNATURA: "; cin.getline (asignatura,100);
		
	}
	
	
	for (int i = 0; i < strlen(asignatura); i++)
    {             					
		while(!isalpha(asignatura[i]) && !isspace(asignatura[i])){
			cout<<"\n\nSolo ingrese letras >:v\n\n";
			
						
			
					
			cout<<"\nASIGNATURA: "; cin.getline (asignatura,100);
		}
       

    }
    
	cout<<"\nCURSO: "; cin.getline (curso,100);
	
	while(strlen(curso)==0 ){
			
		cout<<"\nTodos los datos son necesarios*";
		
		cout<<"\nCURSO: "; cin.getline (curso,100);
			
	}
		
			
    cout<<"\nNUMERO ORDEN: "; cin.getline (numero_orden,100);
	
	while(strlen(numero_orden)==0 ){
				
		cout<<"\nTodos los datos son necesarios*";
				
		cout<<"\nNUMERO ORDEN: "; cin.getline (numero_orden,100);
				
	}	


	for (int i = 0; i < strlen(numero_orden); i++)
    {             					
		while(!isdigit(numero_orden[i])){
			cout<<"\n\nSolo ingrese numeros >:v\n\n";
			
						
			
					
			cout<<"\nNUMERO ORDEN: "; cin.getline (numero_orden,100);
		}
       

    }
	
	titulo();
	
	cout<<"   - . - . - . - . - . - . - . - . -"<<endl;
	cout<<"  :.  Ingrese las clasificaciones  .:"<<endl;
	cout<<"   - . - . - . - . - . - . - . - . -"<<endl;
	
	 
	cout<<"\nIngrese la primera nota: "; cin.getline (nota1,100);
	
	for (int i = 0; i < strlen(nota1); i++)
    {             					
		while(!isdigit(nota1[i]) ){
		
		
			
			cout<<"\n\nSolo ingrese numeros >:v\n\n";
			
						
			
					
			cout<<"\nIngrese la primera nota: "; cin.getline (nota1,100);
		}    

    }
    n1 = atoi(nota1);
    while(n1 > 100 or n1 == 0){
    	
    	cout<<"\n\nIngrese las notas correspondientes >:v\n";
    	cout<<"Ingrese notas reales >:v\n\n";
    	cout<<"\nIngrese la primera nota: "; cin.getline (nota1,100);
	
		for (int i = 0; i < strlen(nota1); i++)
	    {             					
			while(!isdigit(nota1[i]) ){
			
			
				
				cout<<"\n\nSolo ingrese numeros >:v\n\n";
				
							
				
						
				cout<<"\nIngrese la primera nota: "; cin.getline (nota1,100);
			}
	       
	
	    }
	    n1 = atoi(nota1);
    	
    	
    }
	
	
	cout<<"\nIngrese la segunda nota: "; cin.getline (nota2,100);
	
	for (int i = 0; i < strlen(nota2); i++)
    {             					
		while(!isdigit(nota2[i]) ){
		
		
			
			cout<<"\n\nSolo ingrese numeros >:v\n\n";
			
						
			
					
			cout<<"\nIngrese la segunda nota: "; cin.getline (nota2,100);
		}
       

    }
    n2 = atoi(nota2);
	while(n2 > 100 or n2 == 0){
		
		cout<<"\n\nIngrese las notas correspondientes >:v\n";
    	cout<<"Ingrese notas reales >:v\n\n";
		cout<<"\nIngrese la segunda nota: "; cin.getline (nota2,100);
		
		for (int i = 0; i < strlen(nota2); i++)
	    {             					
			while(!isdigit(nota2[i]) ){
			
			
				
				cout<<"\n\nSolo ingrese numeros >:v\n\n";
				
							
				
						
				cout<<"\nIngrese la segunda nota: "; cin.getline (nota2,100);
			}
	       
	
	    }
	
	
	}

	cout<<"\nIngrese la tercera nota: "; cin.getline (nota3,100);
	
	for (int i = 0; i < strlen(nota3); i++)
    {             					
		while(!isdigit(nota3[i]) ){
		
		
			
			cout<<"\n\nSolo ingrese numeros >:v\n\n";
			
						
			
					
			cout<<"\nIngrese la tercera nota: "; cin.getline (nota3,100);
		}
       

    }
    n3 = atoi(nota3);
	
	while(n3 > 100 or n3 == 0){
		
		cout<<"\n\nIngrese las notas correspondientes >:v\n";
    	cout<<"Ingrese notas reales >:v\n\n";
		cout<<"\nIngrese la tercera nota: "; cin.getline (nota3,100);
		
		for (int i = 0; i < strlen(nota3); i++)
	    {             					
			while(!isdigit(nota3[i]) ){
			
			
				
				cout<<"\n\nSolo ingrese numeros >:v\n\n";
				
							
				
						
				cout<<"\nIngrese la tercera nota: "; cin.getline (nota3,100);
			}
	       
	
	    }
	    n3 = atoi(nota3);
	
	
	}
	 
	cout<<"\nIngrese la cuarta nota: "; cin.getline (nota4,100);
	
	for (int i = 0; i < strlen(nota4); i++)
    {             					
		while(!isdigit(nota4[i]) ){
		
		
			
			cout<<"\n\nSolo ingrese numeros >:v\n\n";
			
						
			
					
			cout<<"\nIngrese la cuarta nota: "; cin.getline (nota4,100);
		}
       

    }
    n4 = atoi(nota4);
	
	while(n4 > 100 or n4== 0){
		
		cout<<"\n\nIngrese las notas correspondientes >:v\n";
    	cout<<"Ingrese notas reales >:v\n\n";
		cout<<"\nIngrese la cuarta nota: "; cin.getline (nota4,100);
		
		for (int i = 0; i < strlen(nota4); i++)
	    {             					
			while(!isdigit(nota4[i]) ){
			
			
				
				cout<<"\n\nSolo ingrese numeros >:v\n\n";
				
							
				
						
				cout<<"\nIngrese la cuarta nota: "; cin.getline (nota4,100);
			}
	       
	
	    }
		n4 = atoi(nota4);
		
	
	
	}
	
	promedio = (n1+n2+n3+n4)/4;
	
	cout<<"   - . - . - . - . - . - . -"<<endl;
	cout<<"  :.   El promedio es:  "<<promedio<<"  .:"<<endl;
	cout<<"   - . - . - . - . - . - . -"<<endl;	
	
	cout<<"\nIngrese la nota del examen: "; cin.getline (nota_examen,100);
	
	for (int i = 0; i < strlen(nota_examen); i++)
    {             					
		while(!isdigit(nota_examen[i]) ){
		
		
			
			cout<<"\n\nSolo ingrese numeros >:v\n\n";
			
						
			
					
			cout<<"\nIngrese la nota del examen: "; cin.getline (nota_examen,100);
		}
       

    }
    
    nexam= atoi(nota_examen);
    
    while(nexam > 100 or nexam == 0){
    	
		cout<<"\n\nIngrese las notas correspondientes >:v\n";
    	cout<<"Ingrese notas reales >:v\n\n";
		cout<<"\nIngrese la nota del examen: "; cin.getline (nota_examen,100);
		
		for (int i = 0; i < strlen(nota_examen); i++)
	    {             					
			while(!isdigit(nota_examen[i]) ){
			
			
				
				cout<<"\n\nSolo ingrese numeros >:v\n\n";
				
							
				
						
				cout<<"\nIngrese la nota del examen: "; cin.getline (nota_examen,100);
			}
	       
	
	    }
		nexam= atoi(nota_examen);
	
	
	}
	
	notaFinal = (promedio*0.7)+(nexam*0.3);
	
	if(notaFinal<70){
		cout<<"  "; SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
		cout<<"\nSu nota fue de: "<<notaFinal<<" y no pudo pasar :(\nIngrese la nota del examen Completivo: "; cin.getline (nota_completivo,100);
		cout<<"  "; SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),6);
		for (int i = 0; i < strlen(nota_completivo); i++)
	    {             					
			while(!isdigit(nota_completivo[i]) ){
			
			
				
				cout<<"\n\nSolo ingrese numeros >:v\n\n";
				
							
				
						
				cout<<"\nIngrese la nota del examen Completivo: "; cin.getline (nota_completivo,100);
			}		
	    }
	    
    	nexamcom= atoi(nota_completivo);
		while(nexamcom > 100 or nexamcom == 0){
			
			cout<<"\n\nIngrese las notas correspondientes >:v\n";
    		cout<<"Ingrese notas reales >:v\n\n";
			cout<<"\nSu nota fue de: "<<notaFinal<<" y no pudo pasar :(\nIngrese la nota del examen Completivo: "; cin.getline (nota_completivo,100);
	
			for (int i = 0; i < strlen(nota_completivo); i++)
		    {             					
				while(!isdigit(nota_completivo[i]) ){
				
				
					
					cout<<"\n\nSolo ingrese numeros >:v\n\n";
					
								
					
							
					cout<<"\nIngrese la nota del examen Completivo: "; cin.getline (nota_completivo,100);
				}
		       
		
		    }			
			completivo = nexamcom;	
			nexamcom= atoi(nota_completivo);
		
		}
		
		completivo = nexamcom;
		notaFinal=(notaFinal*0.5)+(nexamcom*0.5);
		
		if(notaFinal<70){
			
			cout<<"  "; SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4); 
			cout<<"\nSu nota fue de: "<<notaFinal<<" y no pudo pasar, de nuevo :(\nIngrese la nota del examen Extraordinario: "; cin.getline (nota_extraordinario,100);
			cout<<"  "; SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),6);			
		
			for (int i = 0; i < strlen(nota_extraordinario); i++)
		    {             					
				while(!isdigit(nota_extraordinario[i]) ){
				
				
					
					cout<<"\n\nSolo ingrese numeros >:v\n\n";
					
								
					
							
					cout<<"Ingrese la nota del examen Extraordinario: "; cin.getline (nota_extraordinario,100);
				}
		       
		
		    }
		    
	    	nexamextra= atoi(nota_extraordinario);
	    	EXTRA = nexamextra;
	    	while(nexamextra>100 or nexamextra == 0){
	    		
				cout<<"\n\nIngrese las notas correspondientes >:v\n";
    			cout<<"Ingrese notas reales >:v\n\n";
	    		cout<<"\nSu nota fue de: "<<notaFinal<<" y no pudo pasar, de nuevo :(\nIngrese la nota del examen Extraordinario: "; cin.getline (nota_extraordinario,100);
			
				for (int i = 0; i < strlen(nota_extraordinario); i++)
			    {             					
					while(!isdigit(nota_extraordinario[i]) ){
					
					
						
						cout<<"\n\nSolo ingrese numeros >:v\n\n";
						
									
						
								
						cout<<"Ingrese la nota del examen Extraordinario: "; cin.getline (nota_extraordinario,100);
					}
			       
			
			    }
			    
		    	nexamextra= atoi(nota_extraordinario);
		    	EXTRA = nexamextra;
		    		
	    		
	    		
	    		
	    	}
	    	notaFinal=(notaFinal*0.4)+(nexamextra*0.6);
	    	
		}
		
	
	}	

	cout<<" "<<endl;
	cout<<"   - . - . - . - . - . - . -"<<endl;
	cout<<"  :.   La nota final es:  "<<notaFinal<<"  .:"<<endl;
	cout<<"   - . - . - . - . - . - . -"<<endl;	
	
	system("pause");
		system("cls");
			
	if(notaFinal>=70){
		
		estado="APROBADO :D";
	
	}
	else{
		
		estado="REPROBADO :(";
	
		
	}

	titulo();
	
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"  "<<nombre<<"  "<<apellido<<" "<<endl;
	cout<<"  "<<asignatura<<" "<<curso<<" "<<numero_orden<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"Calificaciones:"<<endl;
	cout<<"|"<<n1<<"|"<<n2<<"|"<<n3<<"|"<<n4<<"|"<<nexam<<"|"<<endl;
	if(nexamcom=!0){
	
	cout<<"Calificaciones de reposicion:"<<endl;
	cout<<"|"<<completivo<<"|"<<EXTRA<<"|"<<endl;	
	
	}
	cout<<" Nota Final: "<<notaFinal<<" pts"<<endl<<endl;
	
	if(estado == "APROBADO :D"){
	
	cout<<"  "; SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),9); cout<<estado;	
	cout<<"  "; SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),6);	
		
	}
	
	else if(estado=="REPROBADO :("){ 
		
		cout<<"  "; SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4); cout<<estado;	
		cout<<"  "; SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),6);	
		
	}
		
	
		
	
	//bloc de notas	 
	ofstream archivo;
	
	archivo.open("registrar.txt");
	
	archivo << "Nombre: "<<nombre<<endl;
	archivo << "Apellido: " <<apellido<<endl;
	archivo << "Curso y numero: "<<curso<<" "<<numero_orden<<endl;
	archivo << "Materia: "<<asignatura<<endl;   
	
	archivo <<"Calificaciones:"<<endl;
	archivo <<"|"<<n1<<"|"<<n2<<"|"<<n3<<"|"<<n4<<"|"<<nexam<<"|"<<endl;
	archivo <<"|"<<completivo<<"|"<<EXTRA<<"|"<<endl;
	archivo <<" Nota Final: "<<notaFinal<<" pts"<<endl<<endl;
	
salir();
return main();	
	
	return 0;
}
