#include<iostream>
#include<windows.h>
using namespace std;

int cian(){

	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),3);
		
}
int azul(){

	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),9);
		
}

int amarillo(){
 	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),14);
}
int verde(){
 	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),10);	
}
int rojofuerte(){
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
}
int purpura(){
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),5);
}

int blanco(){
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15);
}

int rojosuave(){
	
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),12);
		
}

int salir(){
	string opc;
	
	cout<<"\n---------------------------------------------------------"<<endl<<endl<<endl;
		
		
		
		cout<<"   . - . - . - . - . - . - . - . - . - . - ."<<endl;
		cout<<"  :                           "; cian(); cout<<" _-_,, "; blanco(); cout<<"      :"<<endl;
		cout<<"  :    Realizado por:         "; cian(); cout<<"(  //  "; blanco(); cout<<"      :"<<endl;
		cout<<"  :  Jaime Hndz. #20 5toE     "; cian(); cout<<"  _||  "; blanco(); cout<<"      :"<<endl;
		cout<<"  :  Jaime25112002@gmail.com  "; cian(); cout<<"  _||  "; blanco(); cout<<"      :"<<endl;
		cout<<"  :  829-284-7781/809-335-8760"; cian(); cout<<"   ||  "; blanco(); cout<<"      :"<<endl;
		cout<<"  :                           "; cian(); cout<<"-__-,  "; blanco(); cout<<"      :"<<endl;
		cout<<"  :                                        :"<<endl;  
		cout<<"   . - . - . - . - . - . - . - . - . - . - ."<<endl<<endl;
		
		cout<<"\n1. Continuar\n2. Salir\nQue desea hacer?\n=====> "; cin>>opc;
			
		while(opc != "1" && opc != "2" ){
			
			cout<<"\nValor no valido, Ingrese la opcion otra vez"; 
			cout<<"\n1. Continuar\n2. Salir\nQue desea hacer?\n=====> "; cin>>opc;;
		
			}	
			
	
		if(opc == "1"){
			
 			system("cls");
 			
			
		}
		else if(opc == "2"){
		
			string opc2;
			cout<<"\n1. no, continuar\n2. si, salir\nRealmente desa salir?\n=====> "; cin>>opc2;	
			
			while(opc2 != "1" && opc2 != "2" ){
			
				cout<<"\nValor no valido, Ingrese la opcion otra vez"; 
				cout<<"\n1. no, continuar\n2. si, salir\nRealmente desa salir?\n=====> "; cin>>opc2;
			
			}
			if(opc2=="2"){
				
			exit(1);
				
			}
			
			
		 
		}		
	
	
}

int membrete(){
	
	system("cls");
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),12);
	cout<<"			 ____________________________________________________________________________________"<<endl;
	cout<<"			|  ________________________________________________________________________________  |"<<endl;
	cout<<"			| | ________ _________________       _______ ________ ________ ______ __"; verde(); cout<<"________   "; rojosuave(); cout<<"| |"<<endl;    
	cout<<"			| |  ___  __ )____  _/__  ____/       ___    |___  __ \\___  __ \\___  /"; verde(); cout<<" ___  ____/"; rojosuave(); cout<<"  | |"<<endl;     
	cout<<"			| |  __  __  | __  /  _  / __         __  /| |__  /_/ /__  /_/ /__  /  _"; verde(); cout<<"_  __/     "; rojosuave(); cout<<"| |"<<endl;     
	cout<<"			| |  _  /_/ / __/ /   / /_/ /         _  ___ |_  ____/ _  ____/ _  /____"; verde(); cout<<"  /___     "; rojosuave(); cout<<"| |"<<endl;     
	cout<<"			| |  /_____/  /___/   \\____/          /_/  |_|/_/      /_/      /_____/"; verde(); cout<<"/_____/    "; rojosuave(); cout<<" | |"<<endl;     
	cout<<"			| |                                                                                | |"<<endl;
	cout<<"			| |  ______________  ___________________ __________________________ ________       | |"<<endl;
	cout<<"			| |  ___  __/___  / / /___  ____/___    |___  __/___  ____/___  __ \\__  ___/       | |"<<endl;
	cout<<"			| |  __  /   __  /_/ / __  __/   __  /| |__  /   __  __/   __  /_/ /_____ \\        | |"<<endl;
	cout<<"			| |  _  /    _  __  /  _  /___   _  ___ |_  /    _  /___   _  _, _/ ____/ /        | |"<<endl;
	cout<<"			| |  /_/     /_/ /_/   /_____/   /_/  |_|/_/     /_____/   /_/ |_|  /____/         | |"<<endl;
	cout<<"			| |________________________________________________________________________________| |"<<endl;
	cout<<"			|____________________________________________________________________________________|"<<endl<<endl<<endl;
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15);
}


int main(){
	
	string region;
	int  cinecincosu, cinecuatrosu, cinetresu, cinedosu, cineunosu; //:v
			
	membrete();
	cout<<"	. - . - . - . - . - . - . - . - . - . - . - ."<<endl;
	cout<<"	:                                           :"<<endl;
	cout<<"	:  DISTRITOS DE NEW YORK:                   :"<<endl;
	cout<<"	:                                           :"<<endl;
	cout<<"	:    "; azul(); cout<<"1. Bronx "; blanco(); cout<<"                              :"<<endl;
	cout<<"	:     "; rojofuerte(); cout<<"2. Manhattan"; blanco(); cout<<"                          :"<<endl; 
	cout<<"	:      "; verde(); cout<<"3. Brookly"; blanco(); cout<<"                           :"<<endl;
	cout<<"	:     "; purpura(); cout<<"4. Queens"; blanco(); cout<<"                             :"<<endl;
	cout<<"	:    "; amarillo(); cout<<"5. Staten Island"; blanco(); cout<<"                       :"<<endl;
	cout<<"	:     6. Salir                              :"<<endl;
	cout<<"	:                                           :"<<endl;
	cout<<"	. - . - . - . - . - . - . - . - . - . - . - ."<<endl<<endl;
	
	cout<<"\nSELECCIONE EL DISTRITO EN EL QUE DESEA BUSCAR CINES: "; 
	cin>>region;
	

		

	
		
	while(region != "1" && region != "2" && region !="3" && region !="4" && region !="5" && region !="6"){
		
	cout<<"\nSOLO INGRESE LOS VALORES ESPECIFICADOS >:v"<<endl;
	system("pause");
	
	return main();
		
	}
	


		
	if(region =="1"){
		
		membrete();
		azul();
		cout<<" . - . - . - . - . - . - . - . - . - . "<<endl;
		cout<<":  ___   ___    ___    _  _  __  __   :"<<endl;
		cout<<": | _ ) | _ \\  / _ \\  | \\| | \\ \\/ /   :"<<endl;
		cout<<": | _ \\ |   / | (_) | | .` |  >  <    :"<<endl;
		cout<<": |___/ |_|_\\  \\___/  |_|\\_| /_/\\_\\   :"<<endl;
		cout<<":. - . - . - . - . - . - . - . - . - .:"<<endl<<endl;
		blanco();
		
		cout<<"LISTA DE CINES: "<<endl;
		
		cout<<"1. CONCOURSE PLAZA MULTIPLEX CINEMAS"<<endl;
		cout<<"2. AMC BAY PLAZA CINEMA 13"<<endl;
		cout<<"3. Salir"<<endl;
		char cineunosu1[100];	
		cout<<"\nElija el cine que desea visitar: "; cin>>cineunosu1;
		
		for (int i = 0; i < strlen(cineunosu1); i++)
		{
			    
		    if(!isdigit(cineunosu1[i])  ) {   
			           					
				while(isalpha(cineunosu1[i])){
						
					cout<<"\n\nSolo ingrese valores numericos >:v\n\n";
					cout<<"\nElija el cine que desea visitar: "; cin>>cineunosu1;
				
							
				}
	           
	        }
	    }
		cineunosu = atoi(cineunosu1);

		
		
		while(cineunosu != 1 && cineunosu != 2 && cineunosu != 3){
			
				cout<<"\n\nIngrese los valores especificados >:v\n\n";
				cout<<"\nElija el cine que desea visitar: "; cin>>cineunosu1;
				
				for (int i = 0; i < strlen(cineunosu1); i++)
				{
					    
				    if(!isdigit(cineunosu1[i])  ) {   
					           					
						while(isalpha(cineunosu1[i])){
								
							cout<<"\n\nSolo ingrese valores numericos >:v\n\n";
							cout<<"\nElija el cine que desea visitar: "; cin>>cineunosu1;
						
									
						}
			           
			        }
			    }
		cineunosu = atoi(cineunosu1);
				
		}
		
		switch(cineunosu){
			
			case 1: 
			     
				membrete();	
				
				azul();
				cout<<"				 =========================================== "<<endl;
				cout<<"				| .:. CONCOURSE PLAZA MULTIPLEX CINEMAS .:. |"<<endl;
				cout<<"			 	 =========================================== "<<endl<<endl;
				blanco();
				Sleep(100);
				
			    cout<<"-------------------------------"<<endl;
				cout<<"ALITA: BATTLE ANGEL"<<endl;
				cout<<"duracion: 2 hr 2 min"<<endl;
				cout<<"sala: 2"<<endl;
				cout<<"Horarios: 12:35p, 3:30p, 6:30p, 9:30p, 12:20a"<<endl;
				cout<<"-------------------------------"<<endl;
				Sleep(100);
				
				cout<<"-------------------------------"<<endl;
				cout<<"HOW TO TRAIN YOUR DRAGON: THE HIDDEN WORLD"<<endl;
				cout<<"duracion: 1 hr 44 min"<<endl;
				cout<<"sala: 1"<<endl;
				cout<<"horarios: 10:30a, 1:05p, 3:40p, 11:00a, 1:45p, 4:25p, 7:05"<<endl;
				cout<<"-------------------------------"<<endl;
				Sleep(100);
				
				cout<<"-------------------------------"<<endl;
				cout<<"HAPPY DAETH DAY 2U"<<endl;
				cout<<"duracion: 1 hr 40 min"<<endl;
				cout<<" sala: 9"<<endl;
				cout<<"horarios: 10:30a, 1:00p, 3:30p, 6:35p, 9:05p, 11:35p"<<endl;
				cout<<"-------------------------------"<<endl;
				Sleep(100);
				
				cout<<"-------------------------------"<<endl;
				cout<<"ISN'T IT ROMANTIC"<<endl;
				cout<<"duracion: 1 hr 28 min"<<endl;
				cout<<"sala: 8"<<endl;
				cout<<"horarios: 11:25a, 1:50p, 4:15p, 6:45p, 9:15p, 11:45p"<<endl;
				cout<<"-------------------------------"<<endl;
				Sleep(100);
				
				cout<<"-------------------------------"<<endl;
				cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
				cout<<"duracion: 1 hr 47 min"<<endl;
				cout<<"sala :3"<<endl;
				cout<<"horarios: 11:20a, 1:55p, 4:30p, 7:05, 9:40p, 12:15a"<<endl;
				cout<<"-------------------------------"<<endl;
				Sleep(100);
				
				cout<<"-------------------------------"<<endl;
				cout<<" THE PRODIGY (2019)"<<endl;
				cout<<" Duracion: 1 hr 40 min"<<endl;
				cout<<" sala :1"<<endl;
				cout<<" horario: 6:20p, 9:00p, 11:30p"<<endl;
				cout<<"-------------------------------"<<endl;
				Sleep(100);
				
				cout<<"-------------------------------"<<endl;
				cout<<" WHAT MEN WANT"<<endl;
				cout<<" Duracion: 1 hr 57 min "<<endl;
				cout<<" sala: 7"<<endl;
				cout<<" horario: 11:55a, 2:50p, 6:10p, 9:10p, 12:00"<<endl;
				cout<<"-------------------------------"<<endl;
				Sleep(100);
				
				cout<<"-------------------------------"<<endl;
				cout<<" QUE LEON"<<endl;
				cout<<" Duracion: 1 hr 30 min  "<<endl;
				cout<<" sala 4"<<endl;
				cout<<" horario: 10:05a, 12:30p, 2:55p, 5:20p, 7:45p, 10:15p, 12:40a"<<endl;
				cout<<"-------------------------------"<<endl;
				
				break;
				
			case 2:{
			
				azul();
				cout<<"				 ================================= "<<endl;
				cout<<"				| .:. AMC BAY PLAZA CINEMA 13 .:. |"<<endl;
				cout<<"				 ================================= "<<endl<<endl;
				blanco();
				
				cout<<"-------------------------------"<<endl;
			    cout<<" FIGHTING WITH MY FAMILY"<<endl;
				cout<<" Duracion: 1 hr 47 min"<<endl;
				cout<<"sala: 1"<<endl;
				cout<<"horarios: 10:30a, 1:30p, 4:30p, 7:30p, 10:30a"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"HOW TO TRAIN YOUR DRAGON: THE HIDDEN WORLD"<<endl;
				cout<<" Duracion: 1 hr 44 min"<<endl;
				cout<<" sala: 5"<<endl;
				cout<<"horarios: 11:00a, 2:00p, 1:00p, 4:00p, 7:00p"<<endl;
				cout<<"-------------------------------"<<endl;
	
				cout<<"-------------------------------"<<endl;
				cout<<" ALITA: BATTLE ANGEL "<<endl;
				cout<<" Duracion: 2 hr 1 min"<<endl;
				cout<<" sala: 4"<<endl;
				cout<<" horarios: 10:15a, 1:15p, 4:15p, 5:00p, 10:15p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<" HAPPY DAETH DAY 2U"<<endl;
				cout<<" Duracion:  1 hr 40 min"<<endl;
				cout<<" sala: 3"<<endl;
				cout<<"horarios: 11:30a, 2:15p, 5:00p, 7:45p, 10:45p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"ISN'T IT ROMANTIC"<<endl;
				cout<<" Duracion:  1 hr 28 min"<<endl;			
				cout<<" sala: 11"<<endl; 
				cout<<"horarios: 11:15a, 1:45p, 4:15p, 6:45p, 9:15p, 11:30p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<" Cold Pursuit"<<endl;			
				cout<<" Duracion: 1 hr. 58 min."<<endl;			
				cout<<" sala: 13"<<endl; 
				cout<<"horarios: 10:45a, 7:45p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<" THE LEGO MOVIE 2: THE SECOND PART"<<endl;			
				cout<<" Duracion: 1 hr. 46 min."<<endl;				
				cout<<" sala: 2"<<endl;
				cout<<"horarios: 1:45p, 4:45p, 7:45p, 10:45a, 10:45p"<<endl;
				cout<<"-------------------------------"<<endl;		
				
				cout<<"-------------------------------"<<endl;
				cout<<" THE PRODIGY (2019)"<<endl;				
				cout<<" Duracion: 1 hr 40 min."<<endl;			
				cout<<" sala: 12"<<endl;
				cout<<"horarios: 10:15a, 6:15p, 9:00p, 11:30p"<<endl;
				cout<<"-------------------------------"<<endl;	
				
				cout<<"-------------------------------"<<endl;
				cout<<" WHAT MEN WANT"<<endl;				
				cout<<" Duracion: 1 hr 57 min "<<endl;				
				cout<<" sala: 10"<<endl;
				cout<<"horarios: 10:00a, 7:15p, 10:15p, 11:30a, 2:30p, 5:30p, 8:30p, 11:30p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"GLASS (2019)"<<endl;				
				cout<<"Duracion: 2 hr 9 min"<<endl;				
				cout<<"sala: 13"<<endl; 
				cout<<"horarios: 11:00p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"  SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;				
				cout<<" Duracion: 1 hr 57 min"<<endl;				
				cout<<" sala: 13"<<endl;
				cout<<" horarios: 1:15p, 4:45p "<<endl;
				cout<<"-------------------------------"<<endl;
				
				break;
			}
			case 3:{
				
				system("cls");
				
				break;
			}
		}
		
	}	
	else if(region =="2"){
		
		membrete();
		rojofuerte();
		
		cout<<" . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . "<<endl;
		cout<<":  __  __     _     _  _   _  _     _     _____   _____     _     _  _   :"<<endl;
		cout<<": |  \\/  |   /_\\   | \\| | | || |   /_\\   |_   _| |_   _|   /_\\   | \\| |  :"<<endl;
		cout<<": | |\\/| |  / _ \\  | .` | | __ |  / _ \\    | |     | |    / _ \\  | .` |  :"<<endl;
		cout<<": |_|  |_| /_/ \\_\\ |_|\\_| |_||_| /_/ \\_\\   |_|     |_|   /_/ \\_\\ |_|\\_|  :"<<endl;
		cout<<" . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . "<<endl<<endl;
		blanco();
		
		cout<<"1. REGAL UNION SQUARE STADIUM 14 "<<endl;
		cout<<"2. CITY CINEMAS EAST 86TH STREET "<<endl;
		cout<<"3. CITY CINEMAS 1, 2 & 3 "<<endl;
		cout<<"4. ROXY CINEMA TRIBECA "<<endl;
		cout<<"5. REGAL BATTERY PARK STADIUM 11"<<endl;
		cout<<"6. ANGELIKA FILM CENTER & CAFE "<<endl;
		cout<<"7. CINEPOLIS CHELSEA "<<endl;
		cout<<"8. AMC 84TH STREET 6  "<<endl;
		cout<<"9. Salir"<<endl;
		
		char cinedosu1[100];	
		cout<<"\nElija el cine que desea visitar: "; cin>>cinedosu1;
		
		for (int i = 0; i < strlen(cinedosu1); i++)
		{
			    
		    if(!isdigit(cinedosu1[i])  ) {   
			           					
				while(isalpha(cinedosu1[i])){
						
					cout<<"\n\nSolo ingrese valores numericos >:v\n\n";
					cout<<"\nElija el cine que desea visitar: "; cin>>cinedosu1;
				
							
				}
	           
	        }
	    }
		cinedosu = atoi(cinedosu1);
		while(cinedosu != 1 && cinedosu != 2 && cinedosu != 3 && cinedosu != 4 && cinedosu != 5 && cinedosu != 6 && cinedosu != 7 && cinedosu != 8 && cinedosu != 9){
			
				cout<<"\n\nIngrese los valores especificados >:v\n\n";
				cout<<"\nElija el cine que desea visitar: "; cin>>cinedosu1;
				
				for (int i = 0; i < strlen(cinedosu1); i++)
				{
					    
				    if(!isdigit(cinedosu1[i])  ) {   
					           					
						while(isalpha(cinedosu1[i])){
								
							cout<<"\n\nSolo ingrese valores numericos >:v\n\n";
							cout<<"\nElija el cine que desea visitar: "; cin>>cinedosu1;
						
									
						}
			           
			        }
			    }
		cinedosu = atoi(cinedosu1);
				
		}	
		switch(cinedosu){
			
			
			case 1:{
				
				membrete();
				rojofuerte();
		
				cout<<" ======================================= "<<endl;
				cout<<"| .:. REGAL UNION SQUARE STADIUM 14 .:. | "<<endl;
				cout<<" ======================================="<<endl<<endl;
				
				blanco();
					
				cout<<"-------------------------------"<<endl;
				cout<<"HOW TO TRAIN YOUR DRAGON: THE HIDDEN WORLD"<<endl;
				cout<<"Sinopsis: Nueva entrega de la saga, como entrenar a tu dragon"<<endl;
				cout<<"duracion: 1 hr 44 min"<<endl;
				cout<<"sala: 4"<<endl;
				cout<<"Horarios: 11:40a, 2:10p, 4:50p, 7:30p, 10:20p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"ALITA: BATTLE ANGEL"<<endl;
				cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
				cout<<"duracion: 2 hr 2 min"<<endl;
				cout<<"sala: 5";
				cout<<"Horarios: 12:00p, 3:20p, 6:30p, 9:40p"<<endl<<endl;
				cout<<"-------------------------------"<<endl;	
				
				cout<<"-------------------------------"<<endl;
				cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
				cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
				cout<<"duracion: 1 hr 47 min"<<endl;
				cout<<"sala: 6";
				cout<<"Horarios: 12:50p, 4:00p, 6:45p, 9:30p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"GLASS (2019)"<<endl;
				cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
				cout<<"duracion: 2 hr 9 min"<<endl;
				cout<<"sala: 7"<<endl;
				cout<<"Horarios: 3:45p, 10:30p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
				cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el próximo superhéroe."<<endl;
				cout<<"duracion: 1 hr 57 min"<<endl;
				cout<<"sala: 1"<<endl;
				cout<<"Horarios: 11:45a, 8:00p, 10:40p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"THE FAVOURITE"<<endl;
				cout<<"Sinopsis: A principios del s. XVIII, Inglaterra está en guerra con Francia y la enfermiza reina Anne delega sus responsabilidades en su amiga Lady Sarah."<<endl;
				cout<<"duracion: 2 hr"<<endl;
				cout<<"sala: 2"<<endl;
				cout<<"Horarios: 1:10p, 4:15p, 7:15p, 10:10p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"BOHEMIAN RHAPSODY"<<endl;
				cout<<"Sinopsis: Relata la vida de Freddy Mercury."<<endl;
				cout<<"duracion: 2 hr 15 min"<<endl;
				cout<<"sala: 7"<<endl;
				cout<<"Horarios: 12:30p, 7:00p"<<endl<<endl;
				cout<<"-------------------------------"<<endl;	
				break;
			}
			
			case 2:{
				membrete();
				rojofuerte();
		
				cout<<" ======================================= "<<endl;
				cout<<"| .:. CITY CINEMAS EAST 86TH STREET .:. |"<<endl;
				cout<<" ======================================= "<<endl<<endl;
				
				blanco();
				cout<<"-------------------------------"<<endl;
				cout<<"FIGHTING WITH MY FAMILY"<<endl;
				cout<<"Sinopsis: Paige y su hermano zak consiguen la oportunidad de participar en la WWE."<<endl;
				cout<<"duracion: 1 hr 47 min"<<endl;
				cout<<"sala: 4";
				cout<<"Horarios: 10:00p, 12:30p, 3:00p, 5:30p, 8:00p, 10:30p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"ALITA: BATTLE ANGEL"<<endl;
				cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
				cout<<"duracion: 2 hr 2 min"<<endl;
				cout<<"sala: 1";
				cout<<"Horarios: 10:45a, 1:30p, 4:15p, 7:00p, 9:45p"<<endl;
				cout<<"-------------------------------"<<endl;	
					
				cout<<"-------------------------------"<<endl;
				cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
				cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
				cout<<"duracion: 1 hr 47 min"<<endl;
				cout<<"sala: 3";
				cout<<"Horarios: 11:45a, 2:15p, 4:45p, 7:15p, 9:40p"<<endl<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"COLD WAR (2018) "<<endl;
				cout<<"Sinopsis: Sucesos de la guerra fria"<<endl;
				cout<<"duracion: 1 hr 28 min"<<endl;
				cout<<"sala: 2";
				cout<<"Horarios: 10:15a, 12:40p, 2:50p, 5:10p, 7:30p, 9:50p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				break;
			}
			case 3:{
				
				membrete();
				rojofuerte();
		
				cout<<" =============================== "<<endl;
				cout<<"| .:. CITY CINEMAS 1, 2 & 3 .:. |"<<endl;
				cout<<" =============================== "<<endl<<endl;
				blanco();
				
				cout<<"-------------------------------"<<endl;
				cout<<"EVERYBODY KNOWS"<<endl;
				cout<<"Sinopsis: Paige y su hermano zak consiguen la oportunidad de participar en la WWE."<<endl;
				cout<<"duracion: 2 hr 13 min"<<endl;
				cout<<"sala: 1";
				cout<<"Horarios: 10:15a, 1:05p, 4:00p, 7:00p, 10:00p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"THEY SHALL NOT GROW OLD "<<endl;
				cout<<"Sinopsis: Jackson aplicó la más avanzada tecnología de restauración, colorización y   a las grabaciones de la Primera Guerra Mundial de un siglo de antigüedad, Jackson ha creado una experiencia cinematográfica inmersiva y auténtica con un agarre intenso."<<endl;
				cout<<"duracion: 2 hr "<<endl;
				cout<<"sala: 2";
				cout<<"Horarios: 10:25a, 1:15p, 4:15p, 7:15p, 10:15p"<<endl;
				cout<<"-------------------------------"<<endl;
					
				cout<<"-------------------------------"<<endl;
				cout<<"COLD WAR (2018) "<<endl;
				cout<<"Sinopsis: Sucesos de la guerra fria"<<endl;
				cout<<"duracion: 1 hr 28 min"<<endl;
				cout<<"sala: 3";
				cout<<"Horarios: 10:40a, 12:50p, 3:00p, 5:15p, 7:30p, 9:50p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				
				break;
			}
			
			case 4:{
				
				membrete();
				rojofuerte();
		
				cout<<" ============================= "<<endl;
				cout<<"| .:. ROXY CINEMA TRIBECA .:. |"<<endl;
				cout<<" ============================= "<<endl<<endl;
				blanco();
				
				cout<<"-------------------------------"<<endl;
				cout<<"FIRST MAN "<<endl;
				cout<<"Sinopsis: La fascinante historia de la misión de la NASA de llevar a un hombre a la luna, centrándose en Neil Armstrong y los años 1961-1969, y explora los sacrificios y el costo, en Armstrong y en la nación, de una de las misiones más peligrosas de la historia."<<endl;
				cout<<"duracion: 2 hr 18 min"<<endl;
				cout<<"sala: 1"<<endl;
				cout<<"Horarios: 10:15p"<<endl;
				cout<<"-------------------------------"<<endl;
					
				break;
			}
			
			case 5:{
				
				membrete();
				rojofuerte();
		
				cout<<" ======================================= "<<endl;
				cout<<"| .:. REGAL BATTERY PARK STADIUM 11 .:. |"<<endl;
				cout<<" ======================================= "<<endl<<endl;
				blanco();
				
				cout<<"-------------------------------"<<endl;
				cout<<"FIGHTING WITH MY FAMILY"<<endl;
				cout<<"Sinopsis: Paige y su hermano zak consiguen la oportunidad de participar en la WWE."<<endl;
				cout<<"duracion: 1 hr 47 min"<<endl;
				cout<<"sala: 4";
				cout<<"Horarios: 11:50p, 2:30p, 5:10p, 8:00p, 10:50p"<<endl;
				cout<<"-------------------------------"<<endl;
					
				cout<<"-------------------------------"<<endl;
				cout<<"HOW TO TRAIN YOUR DRAGON: THE HIDDEN WORLD"<<endl;
				cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
				cout<<"duracion: 1 hr 44 min"<<endl;
				cout<<"sala: 10"<<endl;
				cout<<"Horarios: 12:00p, 10:20p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"ALITA: BATTLE ANGEL"<<endl;
				cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
				cout<<"duracion: 2 hr 2 min"<<endl;
				cout<<"sala: 11";
				cout<<"Horarios: 3:30p, 9:50p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"HAPPY DAETH DAY 2U"<<endl;
				cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicótico.."<<endl;
				cout<<"duracion: 1 hr 40 min"<<endl;
				cout<<"sala: 2";
				cout<<"Horarios: 12:10p, 2:40p, 5:20p, 8:10p, 10:40p"<<endl;
				cout<<"-------------------------------"<<endl;
					
				cout<<"-------------------------------"<<endl;
				cout<<"ISN'T IT ROMANTIC"<<endl;
				cout<<"Sinopsis: Una mujer descubre que es la protagonista de una   romántica de la vida real en un universo alternativo."<<endl;
				cout<<"duracion: 1 hr 28 min"<<endl;
				cout<<"sala: 8";
				cout<<"Horarios:  11:20p, 1:40p, 4:10p, 6:50p, 9:40p"<<endl;
				cout<<"-------------------------------"<<endl;	
				
				cout<<"-------------------------------"<<endl;
				cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
				cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
				cout<<"duracion: 1 hr 47 min"<<endl;
				cout<<"sala: 3";
				cout<<"Horarios: 11:30a, 2:10p, 5:00p, 7:40p, 10:30p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"COLD PURSUIT"<<endl;
				cout<<"Sinopsis: Un vigilante busca justicia de sangre fría contra un narcotraficante psicótico y sus secuaces sórdidos."<<endl;
				cout<<"duracion: 1 hr 58 min"<<endl;
				cout<<"sala: 7";
				cout<<"Horarios: 3:30p,  9:30p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"WHAT MEN WANT"<<endl;
				cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
				cout<<"duracion: 1 hr 57 min"<<endl;
				cout<<"sala: 9";
				cout<<"Horarios: 11:10a, 2:00p, 4:50p, 7:50p, 11:00p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"THE FAVOURITE"<<endl;
				cout<<"Sinopsis: A principios del s. XVIII, Inglaterra está en guerra con Francia y la enfermiza reina Anne delega sus responsabilidades en su amiga Lady Sarah."<<endl;
				cout<<"duracion: 2 hr"<<endl;
				cout<<"sala: 7"<<endl;
				cout<<"Horarios: 12:30p, 4:00p, 6:40p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"BOHEMIAN RHAPSODY"<<endl;
				cout<<"Sinopsis: Relata la vida de Freddy Mercury."<<endl;
				cout<<"duracion: 2 hr 15 min"<<endl;
				cout<<"sala: 1"<<endl;
				cout<<"Horarios: 1:00p"<<endl;
				cout<<"-------------------------------"<<endl;
					
				cout<<"-------------------------------"<<endl;
				cout<<"GREEN BOOK"<<endl;
				cout<<"Sinopsis: Dos hombres se enfrentan al racismo y al peligro mientras toman un viaje por carretera a través del Sur profundo en 1962."<<endl;
				cout<<"duracion: 2 hr 10 min"<<endl;
				cout<<"sala: 6"<<endl;
				cout<<"Horarios: 1:00p, 5:30p 8:30p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"BLACKKKLANSMAN "<<endl;
				cout<<"Sinopsis: Ron Stallworth es el primer detective afroamericano que trabaja en el Departamento de Policía de Colorado Springs. Determinado a hacerse un nombre por sí mismo, Stallworth emprendió valientemente una misión peligrosa: infiltrarse y exponer al Ku Klux Klan. "<<endl;
				cout<<"duracion: 2 hr 8 min"<<endl;
				cout<<"sala: 1"<<endl;
				cout<<"Horarios: 7:00p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				break;
				
			}
			
			case 6:{
				
				membrete();
				rojofuerte();
		
				cout<<" ===================================== "<<endl;
				cout<<"| .:. ANGELIKA FILM CENTER & CAFE .:. |"<<endl;
				cout<<" ===================================== "<<endl<<endl;
				blanco();
				
				cout<<"-------------------------------"<<endl;
				cout<<"FIGHTING WITH MY FAMILY"<<endl;
				cout<<"Sinopsis: Paige y su hermano zak consiguen la oportunidad de participar en la WWE."<<endl;
				cout<<"duracion: 1 hr 47 min"<<endl;
				cout<<"sala: 2";
				cout<<"Horarios: 11:20A, 12:00P, 2:00p, 4:30p, 5:30p, 7:10p, 9:40p, 10:55, 12:00a"<<endl<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"EVERYBODY KNOWS"<<endl;
				cout<<"Sinopsis:La película sigue a Laura (Cruz) en sus viajes desde Argentina a su pequeña ciudad natal en España para la boda de su hermana, trayendo a sus dos hijos para la ocasión. En medio de la alegre reunión y las festividades, la hija mayor es secuestrada."<<endl;
				cout<<"duracion: 2 hr 13 min"<<endl;
				cout<<"sala: 3";
				cout<<"Horarios: 10:00a, 1:00p, 2:30p, 4:00p, 7:00p, 8:00p, 9:30p, 10:00p, 11:30p"<<endl<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;				
				cout<<"IF BEALE STREET COULD TALK"<<endl;
				cout<<"Sinopsis: Después de que su prometido es encarcelado, una mujer afroamericana embarazada sale a demostrar su inocencia."<<endl;
				cout<<"duracion: 1 hr 47 min"<<endl;
				cout<<"sala: 1";
				cout<<"Horarios: 10:00a, 12:45p, 3:30p, 6:15p, 9:05p, 11:40p"<<endl<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"NEVER LOOK AWAY"<<endl;
				cout<<"Sinopsis: Cuando dos estudiantes de arte alemanes se enamoran, el padre de la niña jura poner fin a su relación."<<endl;
				cout<<"duracion: 3 hr 9 min"<<endl;
				cout<<"sala: 5";
				cout<<"Horarios: 11:40a, 3:30p, 7:30p"<<endl<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"RUBEN BRANDT, COLLECTOR"<<endl;
				cout<<"Sinopsis: Un psiquiatra que tenga una lista de pacientes criminales debe exorcizar algunos demonios extraños"<<endl;
				cout<<"duracion: 1 hr 34 min"<<endl;
				cout<<"sala: 6";
				cout<<"Horarios: 10:00a, 12:15p, 2:35p 4:55p, 7:15p"<<endl<<endl;
				cout<<"-------------------------------"<<endl;
				
				break;
			}
			
			case 7:{
				membrete();
				rojofuerte();
				
				cout<<" ==========================="<<endl;
				cout<<"| .:. CINEPOLIS CHELSEA .:. |"<<endl;
				cout<<" ==========================="<<endl<<endl;
				
				blanco();
				
				
				cout<<"-------------------------------"<<endl;
				cout<<"FIGHTING WITH MY FAMILY"<<endl;
				cout<<"Sinopsis: Paige y su hermano zak consiguen la oportunidad de participar en la WWE."<<endl;
				cout<<"duracion: 1 hr 47 min"<<endl;
				cout<<"sala: 4";
				cout<<"Horarios: 11:30a, 2:15p, 5:00p, 7:45p. 10:30p"<<endl<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"ALITA: BATTLE ANGEL"<<endl;
				cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
				cout<<"duracion: 2 hr 2 min"<<endl;
				cout<<"sala: 8";
				cout<<"Horarios: 11:45a, 2:45p, 5:45p, 11:15p"<<endl;
				cout<<"-------------------------------"<<endl;	
				
				cout<<"-------------------------------"<<endl;
				cout<<"ISN'T IT ROMANTIC"<<endl;
				cout<<"Sinopsis: Una mujer descubre que es la protagonista de una   romántica de la vida real en un universo alternativo."<<endl;
				cout<<"duracion: 1 hr 28 min"<<endl;
				cout<<"sala: 6";
				cout<<"Horarios:  11:00a, 1:30p, 4:30p, 7:30p, 10:05p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"THEY SHALL NOT GROW OLD "<<endl;
				cout<<"Sinopsis: Jackson aplicó la más avanzada tecnología de restauración, colorización y   a las grabaciones de la Primera Guerra Mundial de un siglo de antigüedad, Jackson ha creado una experiencia cinematográfica inmersiva y auténtica con un agarre intenso."<<endl;
				cout<<"duracion: 2 hr "<<endl;
				cout<<"sala: 9";
				cout<<"Horarios: 10:00a, 12:55p, 3:50p, 6:45p, 9:45p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"BOHEMIAN RHAPSODY"<<endl;
				cout<<"Sinopsis: Relata la vida de Freddy Mercury."<<endl;
				cout<<"duracion: 2 hr 15 min"<<endl;
				cout<<"sala: 3"<<endl;
				cout<<"Horarios: 7:15p, 10:15p"<<endl<<endl;
				cout<<"-------------------------------"<<endl;
					
				cout<<"-------------------------------"<<endl;
				cout<<"GREEN BOOK"<<endl;
				cout<<"Sinopsis: Dos hombres se enfrentan al racismo y al peligro mientras toman un viaje por carretera a través del Sur profundo en 1962."<<endl;
				cout<<"duracion: 2 hr 10 min"<<endl;
				cout<<"sala: 1"<<endl;
				cout<<"Horarios: 10:10a, 1:05p, 4:00p, 7:00p, 9:55p"<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"COLD WAR (2018) "<<endl;
				cout<<"Sinopsis: Sucesos de la guerra fria"<<endl;
				cout<<"duracion: 1 hr 28 min"<<endl;
				cout<<"sala: 5";
				cout<<"Horarios: 12:15p, 3:15p, 6:00p, 8:15p, 10:45p"<<endl<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"THE FAVOURITE"<<endl;
				cout<<"Sinopsis: A principios del s. XVIII, Inglaterra está en guerra con Francia y la enfermiza reina Anne delega sus responsabilidades en su amiga Lady Sarah."<<endl;
				cout<<"duracion: 2 hr"<<endl;
				cout<<"sala: 3"<<endl;
				cout<<"Horarios: 10:30a, 1:15p, 4:15p"<<endl<<endl;
				cout<<"-------------------------------"<<endl;
								
				cout<<"-------------------------------"<<endl;
				cout<<"VICE (2018)"<<endl;
				cout<<"Sinopsis: El vicepresidente Dick Cheney usa su nuevo poder para ayudar a reformar el país y el mundo."<<endl;
				cout<<"duracion: 2 hr 12 min"<<endl;
				cout<<"sala: 2"<<endl;
				cout<<"Horarios: 10:45a, 1:45p, 4:45p, 8:00p, 11:00p"<<endl<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"THE ROCKY   PICTURE SHOW"<<endl;
				cout<<"Sinopsis: Brad y Janet se inician en el extraño mundo de los   \"transexuales transexuales\"."<<endl;
				cout<<"duracion: 2 hr"<<endl;
				cout<<"sala: 7"<<endl;
				cout<<"Horarios: 12:00a"<<endl<<endl;
				cout<<"-------------------------------"<<endl;
				
				break;
			}
			
			case 8:{
				
				membrete();
				rojofuerte();
		
				cout<<" ==========================="<<endl;
				cout<<"| .:. AMC 84TH STREET 6 .:. | "<<endl;	
				cout<<" ==========================="<<endl<<endl;
				blanco();
				
				cout<<"-------------------------------"<<endl;
				cout<<"HOW TO TRAIN YOUR DRAGON: THE HIDDEN WORLD"<<endl;
				cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
				cout<<"duracion: 1 hr 44 min"<<endl;
				cout<<"sala: 5"<<endl;
				cout<<"Horarios: 11:45a, 2:20p, 5:00p, 7:45p, 9:15p, 10:15p"<<endl<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"ALITA: BATTLE ANGEL"<<endl;
				cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
				cout<<"duracion: 2 hr 2 min"<<endl;
				cout<<"sala: 4";
				cout<<"Horarios: 10:45a, 1:40p, 4:30p, 10:15p"<<endl<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"HAPPY DAETH DAY 2U"<<endl;
				cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicótico.."<<endl;
				cout<<"duracion: 1 hr 40 min"<<endl;
				cout<<"sala: 1";
				cout<<"Horarios: 11:15a, 1:50p, 4:20p, 6:45p, 9:15p"<<endl<<endl;
				cout<<"-------------------------------"<<endl;
				
				cout<<"-------------------------------"<<endl;
				cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
				cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
				cout<<"duracion: 1 hr 47 min"<<endl;
				cout<<"sala: 2";
				cout<<"Horarios: 11:00a, 10:00p"<<endl<<endl;	
				cout<<"-------------------------------"<<endl;			
			
				cout<<"-------------------------------"<<endl;
				cout<<"WHAT MEN WANT"<<endl;
				cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
				cout<<"duracion: 1 hr 57 min"<<endl;
				cout<<"sala: 6";
				cout<<"Horarios: 10:30a, 1:15p, 4:05p, 6:50p, 9:35p"<<endl<<endl;
				cout<<"-------------------------------"<<endl;
				break;
			}
			case 9:{
				
				system("cls");
				
				break;
			}
			
			
		}
		
			
		
		
	}	
	else if(region =="3"){
		
		membrete();
		verde();
		cout<<" . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - ."<<endl;
		cout<<":  ___   ___    ___     ___    _  __  _     __   __  _  _    :"<<endl;
		cout<<": | _ ) | _ \\  / _ \\   / _ \\  | |/ / | |    \\ \\ / / | \\| |   :"<<endl;
		cout<<": | _ \\ |   / | (_) | | (_) | | ' <  | |__   \\ V /  | .` |   :"<<endl;
		cout<<": |___/ |_|_\\  \\___/   \\___/  |_|\\_\\ |____|   |_|   |_|\\_|   :"<<endl;
		cout<<" . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - ."<<endl<<endl;
		blanco();
		cout<<"1. KENT THEATER "<<endl;
		cout<<"2. LIDEN BOULEVARD MULTIPLEX CINEMAS"<<endl;
		cout<<"3. WILLIAMSBURG CINEMAS"<<endl;
		cout<<"4. COBBLE HILL CINEMA"<<endl;
		cout<<"5. Salir "<<endl;
		
		
		char cinetresu1[100];	
		cout<<"\nElija el cine que desea visitar: "; cin>>cinetresu1;
		
		for (int i = 0; i < strlen(cinetresu1); i++)
		{
			    
		    if(!isdigit(cinetresu1[i])  ) {   
			           					
				while(isalpha(cinetresu1[i])){
						
					cout<<"\n\nSolo ingrese valores numericos >:v\n\n";
					cout<<"\nElija el cine que desea visitar: "; cin>>cinetresu1;
				
							
				}
	           
	        }
	    }
		cinetresu = atoi(cinetresu1);
		while(cinetresu != 1 && cinetresu != 2 && cinetresu != 3 && cinetresu != 4 && cinetresu != 5){
			
				cout<<"\n\nIngrese los valores especificados >:v\n\n";
				cout<<"\nElija el cine que desea visitar: "; cin>>cinetresu1;
				
				for (int i = 0; i < strlen(cinetresu1); i++)
				{
					    
				    if(!isdigit(cinetresu1[i])  ) {   
					           					
						while(isalpha(cinetresu1[i])){
								
							cout<<"\n\nSolo ingrese valores numericos >:v\n\n";
							cout<<"\nElija el cine que desea visitar: "; cin>>cinetresu1;
						
									
						}
			           
			        }
			    }
		cinetresu = atoi(cinetresu1);
				
		}
		switch (cinetresu)
		{
		case 1:{
			
			membrete();
			verde();
			cout<<" ====================="<<endl;
			cout<<"| .:.KENT THEATER .:. |"<<endl;
			cout<<" ====================="<<endl<<endl;
			blanco();
			
			cout<<"-------------------------------"<<endl;
		    cout<<" How to train your dragon: the hidden world"<<endl;
			cout<<" Duracion: 1 hr 44 min"<<endl;
			cout<<" sala: 1"<<endl; 
			cout<<"horarios: 12:00p, 2:30p, 5:00p, 7:30p, 10:00p"<<endl;
			cout<<"-------------------------------"<<endl;
			
			cout<<"-------------------------------"<<endl;
			cout<<" ISN'T IT ROMANTIC"<<endl;
			cout<<" Duracion: 1 hr 28 min "<<endl;
			cout<<" sala: 3"<<endl; 
			cout<<"horarios: 12:00p, 2:30p, 5:00p, 7:30p, 10:00p"<<endl;
			cout<<"-------------------------------"<<endl;
			
			cout<<"-------------------------------"<<endl;
			cout<<"   THE LEGO MOVIE 2: THE SECOND PAR"<<endl;
			cout<<" Duracion: 1 hr 47 min "<<endl;
			cout<<" sala: 2"<<endl;
			cout<<" horarios: 12:00p, 2:30p, 5:00p, 7:30p, 10:00p"<<endl;
			cout<<"-------------------------------"<<endl;
			
			break;
		}
			
		case 2:{
		
			membrete();
			verde();		
			cout<<" =========================================="<<endl;
			cout<<"| .:. LIDEN BOULEVARD MULTIPLEX CINEMAS .:.|"<<endl;
			cout<<" =========================================="<<endl;
		    blanco();
			
			cout<<" Miss bala"<<endl;
			cout<<" Duracion: 1 hr 44 min"<<endl;
			 
			cout<<"   sala 12: 12:00a"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<" GLASS (2019)"<<endl;
			cout<<" Duracion: 2 hr 9 min"<<endl;
			cout<<"   sala 1: 4:30, 7:15p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<" THE PRODIGY (2019)"<<endl;
			cout<<" Duracion: 2 hr 9 min"<<endl;
			cout<<"   sala 2: 9:15p, 11:35p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<" FIGHTING WITH MY FAMILY"<<endl;
			cout<<" Duracion: 1 hr 47 min"<<endl;
			cout<<"   sala 13: 10:45a, 1:25p, 4:05p, 6:45p, 9:25p, 12:10"<<endl;
			
			
			cout<<"How to train your dragon: the hidden world"<<endl;
			cout<<" Duracion: 1 hr 44 min"<<endl;
			cout<<"   sala 14: 11:00a, 1:45p, 4:25p, 7:40p, 9:40p, 12:20p"<<endl;
			cout<<"          sala 1: 11:45a, 2:15p, 4:55p, 7:05p, 10:15p, 12:45p"<<endl;
			
			
			cout<<"   ALITA: BATTLE ANGEL"<<endl;
			cout<<" Duracion:  2 hr 2 min "<<endl;
			 
			cout<<"   sala 3:  10:10a, 1:05p, 4:00p, 6:55p, 9:50p, 12:45a"<<endl;
			cout<<"          sala 11: 12:35p, 3:30p, 6:30p, 9:25p, 12:25a"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			 
			cout<<" Duracion: 1 hr 57 min "<<endl;
			 
			cout<<"   sala 12: 11:00a, 1:35p, 4:10p, 6:45p, 9:20p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   WHAT MEN WANT"<<endl;
			 
			cout<<" Duracion: 1 hr 57 min "<<endl;
			 
			cout<<"   sala 8: 10:05a, 12:55p, 3:45p, 6:40 - 9:35p, 12:30a"<<endl;
			cout<<"          sala 7: 11:55a, 2:50p, 6:10p, 9:00p, 11:50p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			 
			cout<<" Duracion: 1 hr. 46 min."<<endl;
			 
			cout<<" sala 4: 11:50a, 2:25p, 5:00p, 7:35p, 10:10p, 12:45p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   Cold Pursuit"<<endl;
			 
			cout<<" Duracion: 1 hr. 58 min."<<endl;
			 
			cout<<"   sala 6: 10:20a, 1:10p, 4:10p, 7:00p, 9:50p, 12:40a"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   ISN'T IT ROMANTIC"<<endl;
			cout<<"     romántica y fantasía"<<endl;
			cout<<" Duracion: 1 hr 28 min "<<endl;
			 
			cout<<"   sala 9: 10:15a, 12:40p, 3:05p, 5:25p, 7:45p, 10:05p, 12:25a"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   HAPPY DAETH DAY 2U"<<endl;
			 
			cout<<" Duracion: 1 hr. 40 min."<<endl;
			 
			cout<<"   sala 5:  10:40a, 1:20p, 3:50p, 6:50p, 9:30p, 12:05p"<<endl;
			cout<<"          sala 10: 11:30a, 2:00p, 10:00p, 12:35p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			break;
		}
			
		case 3:{
			
			membrete();
			verde();		
			
			cout<<"  ============================== "<<endl;
			cout<<" | .:. WILLIAMSBURG CINEMAS .:. |"<<endl;
			cout<<"  ============================== "<<endl;
			blanco();
			
		    cout<<"   How to train your dragon: the hidden world"<<endl;
			
			cout<<" Duracion: 1 hr 44 min"<<endl;
			 
			cout<<"   sala 2: 1:00p, 3:30p, 6:00p, 8:30p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   ALITA: BATTLE ANGEL"<<endl;
			 
			cout<<" Duracion:  2 hr 2 min "<<endl;
			 
			cout<<"   sala 3:  1:00p, 3:50p, 6:35p, 9:20p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			 
			cout<<" Duracion: 1 hr. 46 min."<<endl;
			 
			cout<<" sala 4: 1:00p, 3:30p, 6:00p, 8:30p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   COLD WAR (2018)"<<endl;
			 
			cout<<" Duracion: 1 hr 28 min"<<endl;
			 
			cout<<" sala 5: 1:40p sala  1: 3:40p, 9:00p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			 
			cout<<" Duracion: 1 hr 57 min "<<endl;
			 
			cout<<"   sala 1: 1:00p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   THE FAVOURITE"<<endl;
			cout<<"      "<<endl;
			cout<<" Duracion: 1 hr 47 min"<<endl;
			 
			cout<<"   sala 5: 6:30p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   GREEN BOOK"<<endl;
			cout<<"      tica,   y  "<<endl;
			cout<<" Duracion: 1 hr 47 min"<<endl;
			 
			cout<<"   sala 5: 6:00p, 9:15p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   The wife"<<endl;
			 
			cout<<" Duracion: 1 hr 40 min "<<endl;
			 
			cout<<"   sala 5: 3:45p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			break;
		}
		
		case 4:{
			
			membrete();
			verde();		
			
			cout<<"  ============================ "<<endl;
			cout<<" | .:. COBBLE HILL CINEMA .:. |"<<endl;
			cout<<"  ============================ "<<endl;
			blanco();
			
			cout<<"   How to train your dragon: the hidden world"<<endl;
			
			cout<<" Duracion: 1 hr 44 min"<<endl;
			 
			cout<<"   sala 1: 1:00p & sala 3: 3:10p & sala 2: 6:00p, 8:30p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   ALITA: BATTLE ANGEL"<<endl;
			 
			cout<<" Duracion:  2 hr 2 min "<<endl;
			 
			cout<<"   sala 4:  1:00p, 4:00p, 7:00p, 9:45p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   HAPPY DAETH DAY 2U"<<endl;
			cout<<"    ,  ,  "<<endl;
			cout<<" Duracion:  1 hr 40 min."<<endl;
			 
			cout<<"   sala 7: 1:00p, 3:20p, 5:40p, 8:00p, 10:20p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   ISN'T IT ROMANTIC"<<endl;
			cout<<"     romántica y fantasía"<<endl;
			cout<<" Duracion: 1 hr 28 min "<<endl;
			 
			cout<<"   sala 1: 10:00p, 3:30pp, 5:40p,8:00p, 10:20p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			 
			cout<<" Duracion: 1 hr. 46 min."<<endl;
			 
			cout<<" sala 5: 1:00p, 3:30p, 6:00p, 8:30p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   WHAT MEN WANT"<<endl;
			 
			cout<<" Duracion: 1 hr 57 min "<<endl;
			 
			cout<<"   sala 3: 1:30p, 4:15p, 7:20p, 10:00p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			 
			cout<<" Duracion: 1 hr 57 min "<<endl;
			 
			cout<<"   sala 6: 1:00p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   THE FAVOURITE"<<endl;
			cout<<"      "<<endl;
			cout<<" Duracion: 1 hr 47 min"<<endl;
			 
			cout<<"   sala 6: 9:30p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   GREEN BOOK"<<endl;
			cout<<"      tica,   y  "<<endl;
			cout<<" Duracion: 1 hr 47 min"<<endl;
			 
			cout<<"   sala 6: 3:45p, 6:35p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			break;
		}
		case 5:{
				
			system("cls");
				
			break;
		}
				
	}
	
	
	}
	else if(region =="4"){
		
		membrete();
		purpura();
		cout<<" . - . - . - . - . - . - . - . - . - . - . - ."<<endl;
		cout<<":    ___    _   _   ___   ___   _  _   ___   :"<<endl;
		cout<<":   / _ \\  | | | | | __| | __| | \\| | / __|  :"<<endl;
		cout<<":  | (_) | | |_| | | _|  | _|  | .` | \\__ \\  :"<<endl;
		cout<<":   \\__\\_\\  \\___/  |___| |___| |_|\\_| |___/  :"<<endl;
		cout<<" . - . - . - . - . - . - . - . - . - . - . - ."<<endl<<endl;
		blanco();
		cout<<"1.  AMC LOEWS BAY TERRACE 6"<<endl;
		cout<<"2.  AMC LOEWS FRESH MEADOWS 7"<<endl;
		cout<<"3.  COLLEGE POINT MULTIPLEX CINEMAS"<<endl;
		cout<<"4.  BOW TIE CINEMAS SQUIRE CINEMAS"<<endl;
		cout<<"5.  UA MIDWAY STADIUM 9"<<endl;
		cout<<"6.  AMC BAY PLAZA CINEMA 13"<<endl;
		cout<<"7.  KEW GARDENS CINEMAS"<<endl;
		cout<<"8.  BOMBAY THEATRE"<<endl;
		cout<<"9.  MAIN STREET CINEMAS"<<endl;
		cout<<"10. CINEMART CINEMAS"<<endl; 
		cout<<"11. Salir"<<endl;
			
		
		
		char cinecuatrosu1[100];	
		cout<<"\nElija el cine que desea visitar: "; cin>>cinecuatrosu1;
		
		for (int i = 0; i < strlen(cinecuatrosu1); i++)
		{
			    
		    if(!isdigit(cinecuatrosu1[i])  ) {   
			           					
				while(isalpha(cinecuatrosu1[i])){
						
					cout<<"\n\nSolo ingrese valores numericos >:v\n\n";
					cout<<"\nElija el cine que desea visitar: "; cin>>cinecuatrosu1;
				
							
				}
	           
	        }
	    }
		cinecuatrosu = atoi(cinecuatrosu1);
		while(cinecuatrosu != 1 && cinecuatrosu != 2 && cinecuatrosu != 3 && cinecuatrosu != 4 && cinecuatrosu != 5 && cinecuatrosu != 6 && cinecuatrosu != 7 && cinecuatrosu != 8 && cinecuatrosu != 9 && cinecuatrosu != 10 && cinecuatrosu != 11){
			
				cout<<"\n\nIngrese los valores especificados >:v\n\n";
				cout<<"\nElija el cine que desea visitar: "; cin>>cinecuatrosu1;
				
				for (int i = 0; i < strlen(cinecuatrosu1); i++)
				{
					    
				    if(!isdigit(cinecuatrosu1[i])  ) {   
					           					
						while(isalpha(cinecuatrosu1[i])){
								
							cout<<"\n\nSolo ingrese valores numericos >:v\n\n";
							cout<<"\nElija el cine que desea visitar: "; cin>>cinecuatrosu1;
						
									
						}
			           
			        }
			    }
		cinecuatrosu = atoi(cinecuatrosu1);
		}
		
		switch(cinecuatrosu){
			
			case 1:{
				membrete();
				purpura();		
			
				cout<<" =================================== "<<endl;
				cout<<"| .:. AMC LOEWS FRESH MEADOWS 7 .:. |"<<endl;	
				cout<<" =================================== "<<endl;
				blanco();
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"FIGHTING WITH MY FAMILY"<<endl;
				cout<<"Sinopsis: Paige y su hermano zak consiguen la oportunidad de participar en la WWE."<<endl;
				cout<<"duracion: 1 hr 47 min"<<endl;
				cout<<"sala: 3";
				cout<<"Horarios: 10:45a, 1:15p, 3:45p, 6:15p, 8:45p, 11:15p, 1:30a"<<endl<<endl;
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"HOW TO TRAIN YOUR DRAGON: THE HIDDEN WORLD"<<endl;
				cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
				cout<<"duracion: 1 hr 44 min"<<endl;
				cout<<"sala: 5"<<endl;
				cout<<"Horarios: 8:30a, 9:20a, 10:30, 2:30p, 5:00p, 7:40p, 10:10p, 11:00p, 12:45a"<<endl<<endl;
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"ALITA: BATTLE ANGEL"<<endl;
				cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
				cout<<"duracion: 2 hr 2 min"<<endl;
				cout<<"sala: 4";
				cout<<"Horarios: 9:30a, 12:30p, 3:20p, 6:30p, 9:30p, 12:30a"<<endl<<endl;
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"HAPPY DAETH DAY 2U"<<endl;
				cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicótico.."<<endl;
				cout<<"duracion: 1 hr 40 min"<<endl;
				cout<<"sala: 6";
				cout<<"Horarios: 9:45a, 12:10p, 2:45p, 5:10p, 7:35p, 10:00p, 12:30a"<<endl<<endl;
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
				cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
				cout<<"duracion: 1 hr 47 min"<<endl;
				cout<<"sala: 2";
				cout<<"Horarios: 2:20p, 4:50p, 7:20p, 10:15p"<<endl<<endl;	
			
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"WHAT MEN WANT"<<endl;
				cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
				cout<<"duracion: 1 hr 57 min"<<endl;
				cout<<"sala: 6";
				cout<<"Horarios: 8:45a, 2:25p, 5:15p, 8:00p, 10:45p, 1:30a"<<endl<<endl;
				
				break;
			}
			
			case 2:{
				
				membrete();
				purpura();
				
				cout<<" ================================= "<<endl;
				cout<<"| .:. AMC LOEWS BAY TERRACE 6 .:. |"<<endl;
				cout<<" ================================= "<<endl;
				blanco();
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"HOW TO TRAIN YOUR DRAGON: THE HIDDEN WORLD"<<endl;
				cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
				cout<<"duracion: 1 hr 44 min"<<endl;
				cout<<"sala: 6"<<endl;
				cout<<"Horarios: 12:00p, 6:00p, 9:00p"<<endl<<endl;
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"ALITA: BATTLE ANGEL"<<endl;
				cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
				cout<<"duracion: 2 hr 2 min"<<endl;
				cout<<"sala: 4";
				cout<<"Horarios: 12:15p, 4:15p, 7:30p, 10:30p"<<endl<<endl;
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"ISN'T IT ROMANTIC"<<endl;
				cout<<"Sinopsis: Una mujer descubre que es la protagonista de una   romántica de la vida real en un universo alternativo."<<endl;
				cout<<"duracion: 1 hr 28 min"<<endl;
				cout<<"sala: 2";
				cout<<"Horarios:  1:15p, 4:30p, 7:45p, 10:30p"<<endl<<endl;
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"COLD PURSUIT"<<endl;
				cout<<"Sinopsis: Un vigilante busca justicia de sangre fría contra un narcotraficante psicótico y sus secuaces sórdidos."<<endl;
				cout<<"duracion: 1 hr 58 min"<<endl;
				cout<<"sala: 5";
				cout<<"Horarios: 12:45p, 3:30p, 6:30, 9:15p"<<endl<<endl;
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"THE WANDERING EARTH"<<endl;
				cout<<"Sinopsis: El sol está a punto de ser condenado. Los humanos deciden pelear en lugar de esperar su día del juicio final. Construyen diez mil motores planetarios que pueden conducir a toda la Tierra a escapar del sistema solar, con la esperanza de encontrar un nuevo hogar."<<endl;
				cout<<"duracion: 1 hr 58 min"<<endl;
				cout<<"sala: 3";
				cout<<"Horarios: 12:30p, 3:45p, 6:45p, 9:45p"<<endl<<endl;
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"EXTREME JOB "<<endl;
				cout<<"Sinopsis:  Un equipo de detectives de narcóticos va encubierto en un pollo frito para vigilar a una pandilla del crimen organizado, pero la receta de pollo de los detectives de repente transforma el restaurante en el restaurante más popular de la ciudad."<<endl;
				cout<<"duracion: 1 hr 58 min"<<endl;
				cout<<"sala: 1";
				cout<<"Horarios: 1:00p, 4:00p, 7:00p, 10:00p"<<endl<<endl;
				
				break;
			}
			case 3:{
				
				membrete();
				purpura();
				cout<<"COLLEGE POINT MULTIPLEX CINEMAS"<<endl;	
				blanco();
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"ALITA: BATTLE ANGEL"<<endl;
				cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
				cout<<"Horarios: 10:00p, 09:30p"<<endl<<endl;
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"ISN'T IT ROMANTIC"<<endl;
				cout<<"Sinopsis: Una mujer descubre que es la protagonista de una   romántica de la vida real en un universo alternativo."<<endl;
				cout<<"Horarios:  09:15p"<<endl<<endl;
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"COLD PURSUIT"<<endl;
				cout<<"Sinopsis: Un vigilante busca justicia de sangre fría contra un narcotraficante psicótico y sus secuaces sórdidos."<<endl;
				cout<<"Horarios: 9:35p"<<endl<<endl;
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"THE PRODIGY (2019)"<<endl;
				cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
				cout<<"Horarios: 9:45p"<<endl<<endl;
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"THE WANDERING EARTH"<<endl;
				cout<<"Sinopsis: El sol está a punto de ser condenado. Los humanos deciden pelear en lugar de esperar su día del juicio final. Construyen diez mil motores planetarios que pueden conducir a toda la Tierra a escapar del sistema solar, con la esperanza de encontrar un nuevo hogar."<<endl;
				cout<<"Horarios: 9:20p, 10:15p"<<endl<<endl;
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"WHAT MEN WANT"<<endl;
				cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
				cout<<"Horarios: 10:10p"<<endl<<endl;
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"QUE LEON"<<endl;
				cout<<"Sinopsis: Nicole y José Miguel tienen una cosa en común: su apellido León. Pero provienen de diferentes entornos sociales, y su amor tendrá que lidiar con la oposición de sus padres y con un gran número de situaciones que lo pondrán a prueba."<<endl;
				cout<<"Horarios: 9:55p"<<endl<<endl;
				
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"GLASS (2019)"<<endl;
				cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
				cout<<"Horarios: 10:20p"<<endl<<endl;
				
				

			break;
		}	
		case 4:{
			
			membrete();
			purpura();
			cout<<" ======================================== "<<endl;
			cout<<"| .:. BOW TIE CINEMAS SQUIRE CINEMAS .:. |"<<endl;
			cout<<" ======================================== "<<endl;	
			blanco();
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 4:00p, 7:00p, 9:40p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicótico.."<<endl;
			cout<<"Horarios: 4:30p, 7:30p, 9:40p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una   romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  4:45p, 7:45p, 10:00p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fría contra un narcotraficante psicótico y sus secuaces sórdidos."<<endl;
			cout<<"Horarios: 3:30p, 6:30p, 9:10p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 4:15p, 7:15p, 9:30p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 3:45p, 6:45p, 9:20p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"THEY SHALL NOT GROW OLD "<<endl;
			cout<<"Sinopsis: Jackson aplicó la más avanzada tecnología de restauración, colorización y   a las grabaciones de la Primera Guerra Mundial de un siglo de antigüedad, Jackson ha creado una experiencia cinematográfica inmersiva y auténtica con un agarre intenso."<<endl;
			cout<<"Horarios:  3:15p, 9:00p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"GREEN BOOK"<<endl;
			cout<<"Sinopsis: Dos hombres se enfrentan al racismo y al peligro mientras toman un viaje por carretera a través del Sur profundo en 1962."<<endl;
			cout<<"Horarios: 6:15p"<<endl<<endl;
			break;
		}	

		case 5:{
			
			membrete();
			purpura();
			cout<<" ============================= "<<endl;
			cout<<"| .:. UA MIDWAY STADIUM 9 .:. |"<<endl;
			cout<<" ============================= "<<endl;
			blanco();
				
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 4:30p, 7:40p, 10:45p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicótico.."<<endl;
			cout<<"Horarios: 4:45p, 7:30p, 10:15p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una   romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  4:45p, 7:15p, 10:10p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fría contra un narcotraficante psicótico y sus secuaces sórdidos."<<endl;
			cout<<"Horarios: 4:00p, 7:00p, 10:10p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 3:40p, 4:20p, 6:30, 7:10p, 9:20p, 10:20p'"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 4:10p, 6:50p, 9:45p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 4:40p, 7:50p, 10:40p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 7:25p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"THE UPSIDE "<<endl;
			cout<<"Sinopsis: Un rico tetrapléjico desarrolla una amistad improbable con el parolee que se convierte en su cuidador."<<endl;
			cout<<"Horarios: 4:15p, 10:50p"<<endl<<endl;
			
			
			break;
		}	
			
		case 6:{
			
			membrete();
			purpura();
			
			cout<<" ================================="<<endl;
			cout<<"| .:. AMC BAY PLAZA CINEMA 13 .:. |"<<endl;	
			cout<<" ================================= "<<endl;
			blanco();
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"GUNDAM NT"<<endl;
			cout<<"Sinopsis: Fathom Events y Sunrise Inc. se han unido para llevar el Mobile Suit Gundam Narrative a la pantalla grande por solo una noche. Mobile Suit Gundam NT (narrativa) es un nuevo trabajo en la saga Universal Century y describe lo que hay más allá de Gundam UC."<<endl;
			cout<<"Horarios: 7:00p"<<endl<<endl;

			cout<<"-------------------------------"<<endl<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 10:00a, 10:30a, 1:00p, 1:30p, 3:30p, 4:30p, 6:35p, 7:30p, 9:45p, 10:30p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicótico.."<<endl;
			cout<<"Horarios: 2:30p, 5:15p, 7:30p, 8:00p, 9:30p, 10:45p"<<endl<<endl;	
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una   romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  11:1a, 1:45p, 4:15p, 6:45p, 9:15p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fría contra un narcotraficante psicótico y sus secuaces sórdidos."<<endl;
			cout<<"Horarios: 10:45a, 1:45p, 4:45p, 7:45p, 10:45p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 10:00a, 11:00a, 12:45p, 1:45p, 4:00p, 4:45p, 6:45p, 7:30p, 10:15p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 11:30a, 2:00p, 4:30p, 7:00p, 10:00p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 10:15a, 11:15a, 1:15p, 2:15p, 4:15p, 5:15p, 7:15p, 8:15p, 10:15p, 10:45p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"MISS BALA (2019)"<<endl;
			cout<<"Sinopsis: Una joven debe burlar a un despiadado cartel de la droga para salvar a su amiga secuestrada en México."<<endl;
			cout<<"Horarios: 10:45a"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"QUE LEON"<<endl;
			cout<<"Sinopsis: Nicole y José Miguel tienen una cosa en común: su apellido León. Pero provienen de diferentes entornos sociales, y su amor tendrá que lidiar con la oposición de sus padres y con un gran número de situaciones que lo pondrán a prueba."<<endl;
			cout<<"Horarios: 11:00a, 4:30p, 10:30p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 3:45p, 9:30p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"ESCAPE ROOM (2019)"<<endl;
			cout<<"Sinopsis: Seis extraños se encuentran en circunstancias fuera de su control, y deben usar su ingenio para sobrevivir."<<endl;
			cout<<"Horarios: 4:30p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"BUMBLEBEE"<<endl;
			cout<<"Sinopsis: A la carrera en el año 1987, Bumblebee the Autobot encuentra refugio en un depósito de chatarra en una pequeña ciudad costera de California. Cuando Charlie, de 17 años, lo revive, rápidamente se entera de que no es un Volkswagen amarillo común."<<endl;
			cout<<"Horarios: 1:30p, 7:15p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el próximo superhéroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"RALPH BREAKS THE INTERNET"<<endl;
			cout<<"Sinopsis: Ralph y Vanellope se embarcan en una   dentro de Internet para encontrar una pieza de repuesto para un juego."<<endl;
			cout<<"Horarios: 10:00a, 1:00p"<<endl<<endl;																				
			break;
		}	

		case 7:{
			
			membrete();
			purpura();
			
			cout<<" ============================= "<<endl;
			cout<<"| .:. KEW GARDENS CINEMAS .:. |"<<endl;
			cout<<" ============================= "<<endl;
			blanco();
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 1:00p, 3:30p, 6:00p, 8:30p"<<endl<<endl;	
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"TO DUST "<<endl;
			cout<<"Sinopsis: Un cantor jasídico y un profesor de biología se embarcan en una empresa hacia el inframundo."<<endl;
			cout<<"Horarios: 1:00p, 3:15p, 8:20p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"ARTIC"<<endl;
			cout<<"Sinopsis: Un hombre varado en el Ártico después de un accidente aéreo debe decidir si permanecer en la relativa seguridad de su campamento improvisado o embarcarse en un viaje mortal a través de lo desconocido con la esperanza de salir con vida."<<endl;
			cout<<"Horarios: 1:30p, 3:50p, 6:10p, 8:30p"<<endl<<endl;

			cout<<"-------------------------------"<<endl<<endl;
			cout<<"THEY SHALL NOT GROW OLD "<<endl;
			cout<<"Sinopsis: Jackson aplicó la más avanzada tecnología de restauración, colorización y   a las grabaciones de la Primera Guerra Mundial de un siglo de antigüedad, Jackson ha creado una experiencia cinematográfica inmersiva y auténtica con un agarre intenso."<<endl;
			cout<<"Horarios:  3:30p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"STAN Y OLLIE"<<endl;
			cout<<"Sinopsis: El dúo de   Stan Laurel y Oliver Hardy se enfrentan a un futuro incierto mientras realizan shows en vivo en 1953."<<endl;
			cout<<"Horarios: 6:15p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"THE INVISIBLES (2019)"<<endl;
			cout<<"Sinopsis: En junio de 1943, el infame ministro de propaganda nazi Joseph Goebbels declaró a Berlín como ""libre de judíos"". Esta es la verdadera historia de cuatro jóvenes entre los 1,700 de los judíos de Berlín que finalmente sobrevivieron hasta la liberación"<<endl;
			cout<<"Horarios: 1:00p, 3:30p, 6:00p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"IF BEALE STREET COULD TALK"<<endl;
			cout<<"Sinopsis: Después de que su prometido es encarcelado, una mujer afroamericana embarazada sale a demostrar su inocencia."<<endl;
			cout<<"Horarios: 8:40p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"COLD WAR (2018) "<<endl;
			cout<<"Sinopsis: Sucesos de la guerra fria"<<endl;
			cout<<"Horarios: 1:15p, 6:30p, 8:40p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"GREEN BOOK"<<endl;
			cout<<"Sinopsis: Dos hombres se enfrentan al racismo y al peligro mientras toman un viaje por carretera a través del Sur profundo en 1962."<<endl;
			cout<<"Horarios: 1:00p, 5:30p 8:30p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"THE WIFE"<<endl;
			cout<<"Sinopsis: Después de casi cuarenta años de matrimonio, JOAN y JOE CASTLEMAN son complementos. Joe disfruta de su papel tan público como Gran novelista estadounidense. Joan vierte su considerable intelecto, gracia, encanto y diplomacia en el papel privado de la Esposa del gran hombre."<<endl;
			cout<<"Horarios: 3:50p"<<endl<<endl;									
			break;
		}	

		case 8:{
			
			membrete();
			purpura();
			
			cout<<" ======================== "<<endl;
			cout<<"| .:. BOMBAY THEATRE .:. |"<<endl;
			cout<<" ======================== "<<endl;
			blanco();
				
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"GULLY BOY "<<endl;
			cout<<"Sinopsis: ""Gully Boy"" es una película sobre un niño de 22 años ""Murad"" de un ghetto en Mumbai, India. El hijo de un conductor, sus padres trabajaron duro para educarlo para que pudiera tener un trabajo de cuello blanco. Mientras tanto, Murad se da cuenta de su llamado a ser un rapero."<<endl;
			cout<<"Horarios: 8:00p"<<endl<<endl;
			break;
		}	

		case 9:{
			
			membrete();
			purpura();
			
			cout<<" ============================="<<endl;
			cout<<"| .:. MAIN STREET CINEMAS .:. |"<<endl;
			cout<<" ============================="<<endl;	
			blanco();
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 12:00p, 1:00p, 2:10p, 3,10p, 4:20p, 5:20p, 6:30p, 8:40p, 9:40p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicótico.."<<endl;
			cout<<"Horarios: 12:00p, 1:50p, 3:40p, 5:30p, 7:20p, 9:10p"<<endl<<endl;	
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una   romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  12:00p, 1:35p, 3:10p, 4:45p, 6:20p, 7:55p, 9:30"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 12:00p, 2:00p, 4:00p, 6:00p, 8:00p, 10:00p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 1:00p, 3:10p, 5:20, 7:30p, 9:40p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 1:00p, 3:10p, 5:20p, 7:30p, 9:45p"<<endl<<endl;
			
			break;
		}	
																								
		case 10:{
			
			membrete();
			purpura();
			
			cout<<" ========================== "<<endl;
			cout<<"| .:. CINEMART CINEMAS .:. |"<<endl;
			cout<<" ========================== "<<endl;
			blanco();
				
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 10:45a, 1:20p, 3:55p, 6:30p, 9:05p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 10:00a, 10:30a, 11:00a, 12:30p, 1:00p, 3:00p, 5:30p, 8:00p, 9:05p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 2:00p, 4:25p, 6:50p, 9:10p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 3:30p, 6:15p, 9:00p"<<endl<<endl;
			
			cout<<"-------------------------------"<<endl<<endl;
			cout<<"THE FAVOURITE"<<endl;
			cout<<"Sinopsis: A principios del s. XVIII, Inglaterra está en guerra con Francia y la enfermiza reina Anne delega sus responsabilidades en su amiga Lady Sarah."<<endl;
			cout<<"Horarios: 1:00p, 3:45p, 6:30"<<endl<<endl;
			break;
		}	
		case 11:{
				
			system("cls");
				
			break;
		}
		
			
		}	
			
		
	
		 	
		
		
	}

	else if(region =="5"){
		
		membrete();
		amarillo();
		cout<<". - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - ."<<endl;
		cout<<":     ___   _____     _     _____   ___   _  _     ___   ___   _        _     _  _   ___    :"<<endl;
		cout<<":    / __| |_   _|   /_\\   |_   _| | __| | \\| |   |_ _| / __| | |      /_\\   | \\| | |   \\   :"<<endl;
		cout<<":    \\__ \\   | |    / _ \\    | |   | _|  | .` |    | |  \\__ \\ | |__   / _ \\  | .` | | |) |  :"<<endl;
		cout<<":    |___/   |_|   /_/ \\_\\   |_|   |___| |_|\\_|   |___| |___/ |____| /_/ \\_\\ |_|\\_| |___/   :"<<endl;
		cout<<". - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - ."<<endl<<endl;
		blanco();
		
		cout<<"1.  United Artist Staten Island 16 & RPX"<<endl;
		cout<<"2.  AMC DINE-IN Staten Island 11"<<endl;
		cout<<"3.  Atrium Stadium Cinemas"<<endl; 
		cout<<"4. Salir"<<endl;	
		
		char cinecincosu1[100];	
		cout<<"\nElija el cine que desea visitar: "; cin>>cinecincosu1;
		
		for (int i = 0; i < strlen(cinecincosu1); i++)
		{
			    
		    if(!isdigit(cinecincosu1[i])  ) {   
			           					
				while(isalpha(cinecincosu1[i])){
						
					cout<<"\n\nSolo ingrese valores numericos >:v\n\n";
					cout<<"\nElija el cine que desea visitar: "; cin>>cinecincosu1;
				
							
				}
	           
	        }
	    }
		cinecincosu = atoi(cinecincosu1);
		while(cinecincosu != 1 && cinecincosu != 2 && cinecincosu != 3 && cinecincosu != 4){
			
				cout<<"\n\nIngrese los valores especificados >:v\n\n";
				cout<<"\nElija el cine que desea visitar: "; cin>>cinecincosu1;
				
				for (int i = 0; i < strlen(cinecincosu1); i++)
				{
					    
				    if(!isdigit(cinecincosu1[i])  ) {   
					           					
						while(isalpha(cinecincosu1[i])){
								
							cout<<"\n\nSolo ingrese valores numericos >:v\n\n";
							cout<<"\nElija el cine que desea visitar: "; cin>>cinecincosu1;
						
									
						}
			           
			        }
			    }
		cinecincosu = atoi(cinecincosu1);
		}
		switch (cinecincosu)
		{
		case 1:{
			
			membrete();
			amarillo();
			cout<<"  ============================================== "<<endl;
			cout<<" | .:. United Artist Staten Island 16 & RPX .:. |"<<endl;
			cout<<"  ============================================== "<<endl;
			blanco();
			
			cout<<"   FIGHTING WITH MY FAMILY"<<endl;
			
			cout<<" Duracion: 1 hr 47 min"<<endl;
			 
			cout<<"   sala 7: 11:00a, 1:45p, 4:40p, 7:20p, 10:25p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   How to train your dragon: the hidden world"<<endl;
			
			cout<<" Duracion: 1 hr 44 min"<<endl;
			 
		    cout<<"   sala 15: 1:15p & sala 4: 9:45"<<endl;
			cout<<"   sala 9: 12:45p, 3:45p, 6:15 - 9:00 & sala 15: 4:15 - 7:15 - 10:15"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   RUN THE RACE"<<endl;
			
			 
			cout<<"   sala 1: 1:30p, 4:30p, 7:30p, 10:20p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   ALITA: BATTLE ANGEL"<<endl;
			 
			cout<<" Duracion:  2 hr 2 min "<<endl;
			 
		    cout<<"   sala 4: 12:30p, 3:30p, 6:30p"<<endl;
			cout<<"   sala 10: 1:05p, 4:05p, 7:05p, 10:05p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   GULLY BOY"<<endl;
			
			cout<<" Duracion: 1 hr 47 min"<<endl;
			 
			cout<<"   sala 11: 2:30p, 5:45p, 9:15p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   HAPPY DAETH DAY 2U"<<endl;
			
			cout<<" Duracion: 1 hr 40 min "<<endl;
			 
			cout<<"   sala 12: 11:30a, 2:10p, 4:45p, 7:40p, 10:10p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   ISN'T IT ROMANTIC"<<endl;
			
			cout<<" Duracion: 1 hr 28 min "<<endl;
			 
			cout<<"   sala 16: 11:30a, 2:10p, 4:45p, 7:40p, 10:10p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   COLD PURSUIT"<<endl;
			
			cout<<" Duracion: 1 hr 58 min"<<endl;
			 
			cout<<"   sala 6: 3:50a, 6:45p, 9:50p"<<endl;
		    cout<<"----------------------------------------------------------"<<endl;
		    
			cout<<"   THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			
			cout<<" Duracion: 1 hr 47 min"<<endl;
			 
			cout<<"   sala 14: 11:45a, 2:40p, 5:40 & sala 13: 12:45p, 3:40p, 6:40p, 9:30"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   What Men Want"<<endl;
			
			cout<<" Duracion: 1 hr 57 min"<<endl;
			 
			cout<<"   sala 2: 11:05a, 2:00p, 4:50p, 7:50p, 10:40p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   GLASS (2019)"<<endl;
			
			cout<<" Duracion: 2 hr 9 min"<<endl;
			 
			cout<<"   sala 5: 9:05p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   THE UPSIDE"<<endl;
			
			cout<<" Duracion: 1 hr 47 min"<<endl;
			 
			cout<<"   sala 6: 12:35p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   THE FAVOURITE"<<endl;
			
			cout<<" Duracion: 1 hr 47 min"<<endl;
			 
			cout<<"   sala 3: 4:00p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   GREEN BOOK"<<endl;
			
			cout<<" Duracion: 1 hr 47 min"<<endl;
			 
			cout<<"   sala 5: 12:05p, 3:00p, 6:00p & sala 3: 10:00p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   BOHEMIAN RHAPSODY"<<endl;
			
			cout<<" Duracion: 1 hr 47 min"<<endl;
			 
			cout<<"   sala 3: 1:00p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   THE WIFE"<<endl;
			 
			cout<<" Duracion: 1 hr 47 min"<<endl;
			 
			cout<<"   sala 11: 12:00p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   Infiltrado en el KKKlan"<<endl;
			 
			cout<<" Duracion: 1 hr 47 min"<<endl;
			 
			cout<<"   sala 3: 7:00p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			break;
		}
		case 2:{
			
		
			membrete();
			amarillo();
			cout<<"  ====================================== "<<endl;
			cout<<"	| .:. AMC DINE-IN Staten Island 11 .:. |"<<endl;
			cout<<"  ====================================== "<<endl<<endl;
			blanco();
			
		    cout<<"   FIGHTING WITH MY FAMILY"<<endl;
			
			cout<<" Duracion: 1 hr 47 min"<<endl;
			 
			cout<<"   sala 6: 7:00p, 10:15"<<endl;
			 
			
			cout<<"   How to Train Your Dragon 3"<<endl;
			cout<<" Duracion: 1 hr 44 min"<<endl;
			 
			cout<<"   sala 10: 7:30p, 10:30"<<endl;
			cout<<"   sala 10: 7:30p, 10:30 & sala 2: 6:00p, 9:00p"<<endl;
			 
			
			cout<<"   ALITA: BATTLE ANGEL"<<endl;
			 
			cout<<" Duracion:  2 hr 2 min "<<endl;
			 
			cout<<"   sala 1: 12:00p, 3:45 - 7:00p, 10:00p"<<endl;
			cout<<"   sala 2: 11:30a - 2:45"<<endl;
			 
			
			cout<<"   HAPPY DAETH DAY 2U"<<endl;
			
			cout<<" Duracion: 1 hr 40 min "<<endl;
			 
			cout<<"   sala 8: 1:15p, 4:05 & sala 5: 6:30p, 9:45p"<<endl;
			 
			
			cout<<"   ISN'T IT ROMANTIC "<<endl;
			
			cout<<" Duracion: 1 hr 28 min "<<endl;
			 
			cout<<"   sala 9: 11:30a - 4:05 & sala 4: 2:15p, 5:00p & sala 11: 6:45p, 9:30p"<<endl;
			 
			
			cout<<"   COLD PURSUIT "<<endl;
			 
			cout<<" Duracion: 1 hr 58 min "<<endl;
			 
			cout<<"   sala 11: 12:00p & sala 5: 3:30 & sala 4: 2:15p & sala 10: 4:30 & sala 3: 6:15p, 9:15p"<<endl;
			 
			
			cout<<"   THE LEGO MOVIE 2: THE SECOND PAR"<<endl;
			 
			cout<<" Duracion: 1 hr 47 min "<<endl;
			 
			cout<<"   sala 5: 12:30p, 3:30 & sala 11: 4:30p & sala 3: 6:15p, 9:15p"<<endl;
			 
			
			cout<<"   THE PRODIGY (2019)"<<endl;
			 
			cout<<" Duracion: 1 hr 40 min  "<<endl;
			 
			cout<<"   sala 4: 11:45a & sala 8: 7:00p, 10:00"<<endl;
			 
			
			cout<<"   THE WANDERING EARTH"<<endl;
			 
			cout<<" Duracion: 2 hr 5 min  "<<endl;
			 
			cout<<"   sala 7: 12:00p, 3:00p, 6:50p, 10:15p"<<endl;
			 
			
			cout<<"   WHAT MEN WANT"<<endl;
			 
			cout<<" Duracion: 1 hr 57 min "<<endl;
			 
			cout<<"   sala 6: 12:45p, 3:45 & sala 9: 1:50 - 4:45 - 7:45 - 10:45"<<endl;
			 
			
			cout<<"   GLASS (2019)"<<endl;
			
			cout<<" Duracion: 2 hr 9 min"<<endl;
			 
			cout<<"   sala 3: 2:40"<<endl;
			 
			
			cout<<"   SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			
			cout<<" Duracion: 1 hr 57 min "<<endl;
			 
			cout<<"   sala 3: 11:45 sala 10: 1:30"<<endl;
			 
			
			break;
		}
		case 3 :{
			
			membrete();
			amarillo();
			cout<<" ================================ "<<endl;
			cout<<"| .:. Atrium Stadium Cinemas .:. |"<<endl;
			cout<<" ================================ "<<endl<<endl;
			blanco();
			
		    cout<<"   Alita: Battle Angel"<<endl;
			 
			cout<<" Duracion: 2 hrs. 1 min."<<endl;
			 
			cout<<"   sala 1: 12:15p, 2:50p, 5:25p, 8:00p, 10:35p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   Fighting with My Family"<<endl;
			 
			cout<<" Duracion: 1 hr. 48 min."<<endl;
			 
			cout<<"   sala 2: 1:00p, 3:20p, 5:40p, 8:00p, 10:20p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   How to Train Your Dragon: The Hidden World"<<endl;
			 
			cout<<" Duracion: 1 hr. 43 min."<<endl;
			 
			cout<<"   sala 3: 11:15p, 12:00p, 1:30p, 2:15p, 3:45p, 4:30p, 6:00p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   HAPPY DAETH DAY 2U"<<endl;
			 
			cout<<" Duracion: 1 hr. 40 min."<<endl;
			 
			cout<<"   sala 4: 12:00p, 2:15p, 4:30p, 6:45p, 9:00p, 11:05"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   Isn't It Romantic"<<endl;
			 
			cout<<" Duracion: 1 hr. 28 min."<<endl;
			 
			cout<<"   sala 5: 1:25p, 3:20p, 5:15p, 7:10p, 8:15p, 9:05p, 10:10p, 11:00p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   Cold Pursuit"<<endl;
			 
			cout<<" Duracion: 1 hr. 58 min."<<endl;
			 
			cout<<"   sala 6: 12:30p, 3:00p, 5:30p, 8:00p, 10:30p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   The LEGO Movie 2: The Second Part"<<endl;
			 
			cout<<" Duracion: 1 hr. 46 min."<<endl;
			 
			cout<<"   sala 7: 11:15p, 12:00p, 1:10p, 2:20p, 3:30p, 4:40p, 6:00p, 7:00p, 9:10p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   The Prodigy"<<endl;
			 
			cout<<" Duracion: 1 hr. 31 min."<<endl;
			 
			cout<<"   sala 8: 9:05 - 11:05"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			cout<<"   What Men Want"<<endl;
			 
			cout<<" Duracion: 1 hr. 57 min."<<endl;
			 
			cout<<" Estandar sala 9: 1:00p, 3:30p, 6:00p, 8:30p, 11:00p"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			
			break;
		}
		case 4:{
			
			system("cls");
			
			break;
		}
		
	}


}
else if(region == "6"){
		
		
}
	
	
	

	salir();
	return main();
	return 0;
}

