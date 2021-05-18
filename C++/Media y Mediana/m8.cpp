#include<iostream>
#include<windows.h>
#include<stdlib.h> 
#include<stdio.h>
#include<cctype>
#include<conio.h>

using namespace std;

int main()
{
	//Declaracion de variables jeje
	float media=2, n1, n2, n3, total3, prome;
	int   otro=0, mas=2,  numero[1000], menusalir=2, error=2;
	char  numero1[1000], n[1000], num[1000];
	string opc="2", opc2="0", modo="0";
	
	//bucle de que si no se cambia el valor de la variable se repite el programa
	while(opc=="2"){
		
			system("color 0B");
			modo= "0";
			total3= 0;
			menusalir = 0;
			menusalir = 1;
			
			system("cls");
			
			
			
			cout<<". - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - .    "<<endl;
			cout<<":     __  __   ___   ___    ___     _        ___      __  __   ___   ___    ___     _     _  _              :   "<<endl;
			cout<<":    |  \\/  | | __| |   \\  |_ _|   /_\\      / _ \\    |  \\/  | | __| |   \\  |_ _|   /_\\   | \\| |   /_\\       :  "<<endl;
			cout<<":    | |\\/| | | _|  | |) |  | |   / _ \\    | (_) |   | |\\/| | | _|  | |) |  | |   / _ \\  | .` |  / _ \\      :   "<<endl;
			cout<<":    |_|  |_| |___| |___/  |___| /_/ \\_\\    \\___/    |_|  |_| |___| |___/  |___| /_/ \\_\\ |_|\\_| /_/ \\_\\     :  "<<endl;
			cout<<":                                                                                                           :  "<<endl;
			cout<<":       _     ___   ___   _____   __  __   ___   _____   ___    ___     _                                   :  "<<endl;
			cout<<":      /_\\   | _ \\ |_ _| |_   _| |  \\/  | | __| |_   _| |_ _|  / __|   /_\\                                  :   "<<endl;	
			cout<<":     / _ \\  |   /  | |    | |   | |\\/| | | _|    | |    | |  | (__   / _ \\                                 :   "<<endl;
	 		cout<<":    /_/ \\_\\ |_|_\\ |___|   |_|   |_|  |_| |___|   |_|   |___|  \\___| /_/ \\_\\                                :   "<<endl;
	 		cout<<":                                                                                                           :   "<<endl;
			cout<<". - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - .    "<<endl<<endl;
				 	
	 		cout<<". - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - ."<<endl;
	 		cout<<":                                       *Instrucciones*                                             :"<<endl;
	 		cout<<":                                                                                                   :"<<endl;
	 		cout<<": 1. Debe de Introducir los valores indicados.                                                      :"<<endl;
	 		cout<<": 2. Solo ingrese valores numericos.                                                                :"<<endl;
	 		cout<<": 3. En caso de que se inclumplan las opciones anteriores,  debera ingresar los valores pedidos.    :"<<endl;
	 		cout<<": 4. Ingrese valores mayores a 1 o 0.                                                               :"<<endl;
	 		cout<<": 5. No ingrese valores decimales.                                                                  :"<<endl;
			cout<<":                                                                                                   :"<<endl;
	 		cout<<". - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - ."<<endl<<endl;
	 		
	 		
			cout<<"Elija el modo que usara: "<<endl; 
			cout<<"\n1.La media \n2.La mediana\n3.Salir\n\nIngrese la opcion que va elegir ====>";
			cin>>modo;	
																		
				//mientras los valores no sean correctos te los vuelve a pedir
				while(modo != "1" && modo != "2" && modo != "3"){
				
					modo = "0";

					cout<<"\n\nIngrese los valores pedidos*\n\n";
					system("pause");
					system("cls");
			
			
					
					cout<<". - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - .    "<<endl;
					cout<<":     __  __   ___   ___    ___     _        ___      __  __   ___   ___    ___     _     _  _              :   "<<endl;
					cout<<":    |  \\/  | | __| |   \\  |_ _|   /_\\      / _ \\    |  \\/  | | __| |   \\  |_ _|   /_\\   | \\| |   /_\\       :  "<<endl;
					cout<<":    | |\\/| | | _|  | |) |  | |   / _ \\    | (_) |   | |\\/| | | _|  | |) |  | |   / _ \\  | .` |  / _ \\      :   "<<endl;
					cout<<":    |_|  |_| |___| |___/  |___| /_/ \\_\\    \\___/    |_|  |_| |___| |___/  |___| /_/ \\_\\ |_|\\_| /_/ \\_\\     :  "<<endl;
					cout<<":                                                                                                           :  "<<endl;
					cout<<":       _     ___   ___   _____   __  __   ___   _____   ___    ___     _                                   :  "<<endl;
					cout<<":      /_\\   | _ \\ |_ _| |_   _| |  \\/  | | __| |_   _| |_ _|  / __|   /_\\                                  :   "<<endl;	
					cout<<":     / _ \\  |   /  | |    | |   | |\\/| | | _|    | |    | |  | (__   / _ \\                                 :   "<<endl;
			 		cout<<":    /_/ \\_\\ |_|_\\ |___|   |_|   |_|  |_| |___|   |_|   |___|  \\___| /_/ \\_\\                                :   "<<endl;
			 		cout<<":                                                                                                           :   "<<endl;
					cout<<". - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - .    "<<endl<<endl;
						 	
			 		cout<<". - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - ."<<endl;
			 		cout<<":                                       *Instrucciones*                                             :"<<endl;
			 		cout<<":                                                                                                   :"<<endl;
			 		cout<<": 1. Debe de Introducir los valores indicados.                                                      :"<<endl;
			 		cout<<": 2. Solo ingrese valores numericos.                                                                :"<<endl;
			 		cout<<": 3. En caso de que se inclumplan las opciones anteriores,  debera ingresar los valores pedidos.    :"<<endl;
			 		cout<<": 4. Ingrese valores mayores a 1 o 0.                                                               :"<<endl;
			 		cout<<": 5. NO ingrese numero decimales                                                                    :"<<endl;
			 		cout<<":                                                                                                   :"<<endl;
			 		cout<<". - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - ."<<endl<<endl;
			 		
			 		
					cout<<"Elija el modo que usara: "<<endl; 
					cout<<"\n1.La media \n2.La mediana\n3.Salir\n\nIngrese la opcion que va elegir ====>";
					cin>>modo;	
					
					
					
				}
						
				if(modo == "1"){
					//Cambio de color.
					system("color 06");
					system("cls");
							
					cout<<"		 ______  _____________________ _______________ "<<endl;
					cout<<"		 ___   |/  /___  ____/___  __ \\____  _/___    |"<<endl;
					cout<<"		 __  /|_/ / __  __/   __  / / / __  /  __  /| |"<<endl;
					cout<<"		 _  /  / /  _  /___   _  /_/ / __/ /   _  ___ |"<<endl;
					cout<<"		 /_/  /_/   /_____/   /_____/  /___/   /_/  |_|  "<<endl<<endl;

					cout<<"		. - . - . - . - . - . - . - . - . - . - . - . "<<endl;
					cout<<"		: MEDIA:                                    :"<<endl;
					cout<<"		: la media aritmetica el aproximadamente el :"<<endl;
					cout<<"		: valor promedio de los valores registrados :"<<endl;
					cout<<"		. - . - . - . - . - . - . - . - . - . - . - ."<<endl<<endl;					
								
					cout<<"Escriba la cantidad de numeros que ingresara: "; cin>>n;
					
					//Se ingresa la cadena, la divide por caracteres y determina si contiene letras
					for (int i = 0; i < strlen(n); i++)
				    {
				    
				        if(!isdigit(n[i])  ) {   
				           					
							while(isalpha(n[i])){
								
								cout<<"\n\nSolo ingrese valores numericos >:v\n\n";
								system("pause");
											
								system("cls");
										
								cout<<"		 ______  _____________________ _______________ "<<endl;
								cout<<"		 ___   |/  /___  ____/___  __ \\____  _/___    |"<<endl;
								cout<<"		 __  /|_/ / __  __/   __  / / / __  /  __  /| |"<<endl;
								cout<<"		 _  /  / /  _  /___   _  /_/ / __/ /   _  ___ |"<<endl;
								cout<<"		 /_/  /_/   /_____/   /_____/  /___/   /_/  |_|  "<<endl<<endl;
			
								cout<<"		. - . - . - . - . - . - . - . - . - . - . - . "<<endl;
								cout<<"		: MEDIA:                                    :"<<endl;
								cout<<"		: la media aritmetica el aproximadamente el :"<<endl;
								cout<<"		: valor promedio de los valores registrados :"<<endl;
								cout<<"		. - . - . - . - . - . - . - . - . - . - . - ."<<endl<<endl;					
											
								cout<<"Escriba la cantidad de numeros que ingresara: "; cin>>n;
							}
				           
				        }
				    }

					//convierte la cadena en un valor numerico.
					int newn = atoi(n);
					
					//En caso de que los valores sean 1 o 0 que se pidan de nuevo.
					while(newn == 0 or newn == 1){
					
						cout<<"\n\nIngrese valores mayores a 1 o 0 >:v\n\n";
						system("pause");
									
						system("cls");
								
						cout<<"		 ______  _____________________ _______________ "<<endl;
						cout<<"		 ___   |/  /___  ____/___  __ \\____  _/___    |"<<endl;
						cout<<"		 __  /|_/ / __  __/   __  / / / __  /  __  /| |"<<endl;
						cout<<"		 _  /  / /  _  /___   _  /_/ / __/ /   _  ___ |"<<endl;
						cout<<"		 /_/  /_/   /_____/   /_____/  /___/   /_/  |_|  "<<endl<<endl;
	
						cout<<"		. - . - . - . - . - . - . - . - . - . - . - . "<<endl;
						cout<<"		: MEDIA:                                    :"<<endl;
						cout<<"		: la media aritmetica el aproximadamente el :"<<endl;
						cout<<"		: valor promedio de los valores registrados :"<<endl;
						cout<<"		. - . - . - . - . - . - . - . - . - . - . - ."<<endl<<endl;					
									
						cout<<"Escriba la cantidad de numeros que ingresara: "; cin>>n;
						
						for (int i = 0; i < strlen(n); i++)
					    {
					    
					        if(!isdigit(n[i])  ) {   
					           					
								while(isalpha(n[i])){
									cout<<"\n\nSolo ingrese valores numericos >:v\n\n";
									system("pause");
												
									system("cls");
											
									cout<<"		 ______  _____________________ _______________ "<<endl;
									cout<<"		 ___   |/  /___  ____/___  __ \\____  _/___    |"<<endl;
									cout<<"		 __  /|_/ / __  __/   __  / / / __  /  __  /| |"<<endl;
									cout<<"		 _  /  / /  _  /___   _  /_/ / __/ /   _  ___ |"<<endl;
									cout<<"		 /_/  /_/   /_____/   /_____/  /___/   /_/  |_|  "<<endl<<endl;
				
									cout<<"		. - . - . - . - . - . - . - . - . - . - . - . "<<endl;
									cout<<"		: MEDIA:                                    :"<<endl;
									cout<<"		: la media aritmetica el aproximadamente el :"<<endl;
									cout<<"		: valor promedio de los valores registrados :"<<endl;
									cout<<"		. - . - . - . - . - . - . - . - . - . - . - ."<<endl<<endl;					
												
									cout<<"Escriba la cantidad de numeros que ingresara: "; cin>>n;
								}
					           
					        }
					    }
						
						newn = atoi(n);				
					
					
					}
					
						
						for(int i=0; i<newn; i++){
							
							cout<<"Digite un numero: "; 
							cin>>numero1;
							for (int i = 0; i < strlen(numero1); i++)
						    {
						        if(!isdigit(numero1[i]) ) {   
						           					
									while(isalpha(numero1[i])){
										//No se limpia la pantalla
										cout<<"\nSolo ingrese valores numericos >:v\n";
										cout<<"Digite un numero: "; cin>>numero1;
									
									}
						           
						        }
						    }
							

						    
							numero[i] = atoi(numero1);
							total3 += numero[i] ;
						}
										
						for(int i=0; i<newn; i++){
							
							cout<<"\n"<<i+1<<". "<<numero[i]<<endl; 
							Sleep(100);
							
						}
									
						media= total3/newn;
					
						cout<<"\nLa media es: "<<media<<endl;
					
						system("pause");
						menusalir= 1;
				
					
				
				}
				else if(modo== "2"){
					system("color 0E");	
					system("cls");
							
							
					cout<<"		 ______  _____________________ _______________ _____   _________ "<<endl;
					cout<<"		 ___   |/  /___  ____/___  __ \\____  _/___    |___  | / /___    |"<<endl;
					cout<<"		 __  /|_/ / __  __/   __  / / / __  /  __  /| |__   |/ / __  /| |"<<endl;
					cout<<"		 _  /  / /  _  /___   _  /_/ / __/ /   _  ___ |_  /|  /  _  ___ |"<<endl;
					cout<<"		 /_/  /_/   /_____/   /_____/  /___/   /_/  |_|/_/ |_/   /_/  |_|"<<endl<<endl;
					
					cout<<"		. - . - . - . - . - . - . - . - . - . - . - . - . "<<endl;
					cout<<"		: MEDIANA:                                      :"<<endl;
					cout<<"		: la mediana aritmetica es cuando se organizan  :"<<endl;
					cout<<"		: Los valores introducidos y se toma el valor   :"<<endl;
					cout<<"		: que queda en el medio.                        :"<<endl;
					cout<<"		:                                               :"<<endl;
					cout<<"		: NOTA: dado el caso de que la cantidad de      :"<<endl;
					cout<<"		: valores sea par por ende no queda un unico    :"<<endl;
					cout<<"		: valor en el medio, entoces se toman los dos   :"<<endl;
					cout<<"		: valores, se suman y se dividen entre 2.       :"<<endl;
					cout<<"		. - . - . - . - . - . - . - . - . - . - . - . - . "<<endl<<endl;					
						
					
					
					cout<<"Escriba la cantidad de numeros que ingresara: "; cin>>n;

					for (int i = 0; i < strlen(n); i++)
				    {
				        if(!isdigit(n[i]) ) {   
				           					
							while(isalpha(n[i])){
							
								cout<<"\n\nSolo ingrese valores numericos >:v\n\n";
								system("pause");
												
								system("cls");
								cout<<"		 ______  _____________________ _______________ _____   _________ "<<endl;
								cout<<"		 ___   |/  /___  ____/___  __ \\____  _/___    |___  | / /___    |"<<endl;
								cout<<"		 __  /|_/ / __  __/   __  / / / __  /  __  /| |__   |/ / __  /| |"<<endl;
								cout<<"		 _  /  / /  _  /___   _  /_/ / __/ /   _  ___ |_  /|  /  _  ___ |"<<endl;
								cout<<"		 /_/  /_/   /_____/   /_____/  /___/   /_/  |_|/_/ |_/   /_/  |_|"<<endl<<endl;
								
								cout<<"		. - . - . - . - . - . - . - . - . - . - . - . - . "<<endl;
								cout<<"		: MEDIANA:                                      :"<<endl;
								cout<<"		: la mediana aritmetica es cuando se organizan  :"<<endl;
								cout<<"		: Los valores introducidos y se toma el valor   :"<<endl;
								cout<<"		: que queda en el medio.                        :"<<endl;
								cout<<"		:                                               :"<<endl;
								cout<<"		: NOTA: dado el caso de que la cantidad de      :"<<endl;
								cout<<"		: valores sea par por ende no queda un unico    :"<<endl;
								cout<<"		: valor en el medio, entoces se toman los dos   :"<<endl;
								cout<<"		: valores, se suman y se dividen entre 2.       :"<<endl;
								cout<<"		. - . - . - . - . - . - . - . - . - . - . - . - . "<<endl<<endl;					
									
								
								
								cout<<"Escriba la cantidad de numeros que ingresara: "; cin>>n;
							}
				           
				        }
				    }
					
					int newn = atoi(n);
					
					while(newn == 0 or newn == 1){
					
						cout<<"\nIngrese valores mayores a 1 o 0 >:v\n";
						system("pause");
										
						system("cls");
						cout<<"		 ______  _____________________ _______________ _____   _________ "<<endl;
						cout<<"		 ___   |/  /___  ____/___  __ \\____  _/___    |___  | / /___    |"<<endl;
						cout<<"		 __  /|_/ / __  __/   __  / / / __  /  __  /| |__   |/ / __  /| |"<<endl;
						cout<<"		 _  /  / /  _  /___   _  /_/ / __/ /   _  ___ |_  /|  /  _  ___ |"<<endl;
						cout<<"		 /_/  /_/   /_____/   /_____/  /___/   /_/  |_|/_/ |_/   /_/  |_|"<<endl<<endl;
						
						cout<<"		. - . - . - . - . - . - . - . - . - . - . - . - . "<<endl;
						cout<<"		: MEDIANA:                                      :"<<endl;
						cout<<"		: la mediana aritmetica es cuando se organizan  :"<<endl;
						cout<<"		: Los valores introducidos y se toma el valor   :"<<endl;
						cout<<"		: que queda en el medio.                        :"<<endl;
						cout<<"		:                                               :"<<endl;
						cout<<"		: NOTA: dado el caso de que la cantidad de      :"<<endl;
						cout<<"		: valores sea par por ende no queda un unico    :"<<endl;
						cout<<"		: valor en el medio, entoces se toman los dos   :"<<endl;
						cout<<"		: valores, se suman y se dividen entre 2.       :"<<endl;
						cout<<"		. - . - . - . - . - . - . - . - . - . - . - . - . "<<endl<<endl;					
							
						
						
						cout<<"Escriba la cantidad de numeros que ingresara: "; cin>>n;
						for (int i = 0; i < strlen(n); i++)
					    {
					    
					        if(!isdigit(n[i])  ) {   
					           					
								while(isalpha(n[i])){
									
									cout<<"\n\nSolo ingrese valores numericos >:v\n\n";
									system("pause");
													
									system("cls");
									cout<<"		 ______  _____________________ _______________ _____   _________ "<<endl;
									cout<<"		 ___   |/  /___  ____/___  __ \\____  _/___    |___  | / /___    |"<<endl;
									cout<<"		 __  /|_/ / __  __/   __  / / / __  /  __  /| |__   |/ / __  /| |"<<endl;
									cout<<"		 _  /  / /  _  /___   _  /_/ / __/ /   _  ___ |_  /|  /  _  ___ |"<<endl;
									cout<<"		 /_/  /_/   /_____/   /_____/  /___/   /_/  |_|/_/ |_/   /_/  |_|"<<endl<<endl;
									
									cout<<"		. - . - . - . - . - . - . - . - . - . - . - . - . "<<endl;
									cout<<"		: MEDIANA:                                      :"<<endl;
									cout<<"		: la mediana aritmetica es cuando se organizan  :"<<endl;
									cout<<"		: Los valores introducidos y se toma el valor   :"<<endl;
									cout<<"		: que queda en el medio.                        :"<<endl;
									cout<<"		:                                               :"<<endl;
									cout<<"		: NOTA: dado el caso de que la cantidad de      :"<<endl;
									cout<<"		: valores sea par por ende no queda un unico    :"<<endl;
									cout<<"		: valor en el medio, entoces se toman los dos   :"<<endl;
									cout<<"		: valores, se suman y se dividen entre 2.       :"<<endl;
									cout<<"		. - . - . - . - . - . - . - . - . - . - . - . - . "<<endl<<endl;					
										
									
									
									cout<<"Escriba la cantidad de numeros que ingresara: "; cin>>n;
								}
					           
					        }
					    }
						
						newn = atoi(n);				
					
					
					}
					

					for(int i=0; i<newn; i++){
						
						cout<<"Digite un numero: "; 
						cin>>numero1;
						for (int i = 0; i < strlen(numero1); i++)
					    {
					        if(!isdigit(numero1[i]) ) {   
					           					
								while(isalpha(numero1[i])){
								
									cout<<"\nSolo ingrese valores numericos >:v\n";
									cout<<"Digite un numero: "; cin>>numero1;
								
								}
					           
					        }
					    }
						

					    
						numero[i] = atoi(numero1);
						
					}
					
					//Organiza los vectores con bucles		
					for (int i = 0; i < newn - 1; i++) {
						
						for (int j = i + 1; j < newn; j++) {
							
							if (numero[i] > numero[j]) {
								int aux = numero[i];
								numero[i] = numero[j];
								numero[j] = aux;
							}
						}
					}
				
		
					//determina el valor medio
					int pos = newn / 2;
					float m = 0.0;
					
					if (newn % 2 == 0) {
						m = (float)(numero[pos - 1] + numero[pos]) / 2.0;
					}
					else {
						m = numero[pos ];
					}
					
					
					
					for(int i=0; i<newn; i++){
						
						cout<<"\n"<<i+1<<". "<<numero[i]<<endl; 
						
						Sleep(100);
					}						
				
					cout<<"\nLa mediana es: "<<m<<endl;
					
					menusalir = 1;
		
				}
				

				
			
	
		
		
		
			

		


		if(menusalir == 1){
				
			
			cout<<"\n---------------------------------------------------------"<<endl<<endl;
	
	
			
			cout<<"   . - . - . - . - . - . - . - . - . - . - ."<<endl;
			cout<<"  :                            _-_,,       :"<<endl;
			cout<<"  :    Realizado por:         (  //        :"<<endl;
			cout<<"  :  Jaime Hndz. #20 5toE       _||        :"<<endl;
			cout<<"  :  Jaime25112002@gmail.com    _||        :"<<endl;
			cout<<"  :  829-284-7781/809-335-8760   ||        :"<<endl;
			cout<<"  :                           -__-,        :"<<endl;
			cout<<"  :                                        :"<<endl;  
			cout<<"   . - . - . - . - . - . - . - . - . - . - ."<<endl<<endl;
				
					
			//menu de salida
			cout<<"\nElija la opcion:";
			cout<<"\n1. Salir ";
			cout<<"\n2. Continuar \n";
			cin>>opc2;
			
			//determine que opcion es correcta
			//tampoco se limpia la pantalla
			while(opc2 != "1" && opc2 != "2"){
				
				cout<<"\n\nIngrese los valores pedidos*\n\n";
				cout<<"\nElija la opcion";
				cout<<"\n1. Salir ";
				cout<<"\n2. Continuar \n";
				cin>>opc2;	
				
				
				
			}
				
			if(opc2 == "1"){
				
				cout<<"\nRealmente desea salir?";
				cout<<"\n1. Si, deseo salir ";
				cout<<"\n2. No, deseo continuar \n";
				cin>>opc;
				
				while(opc != "1" && opc != "2"){
				
					cout<<"\n\nIngrese los valores pedidos*\n\n";
					cout<<"\nRealmente desea salir?";
					cout<<"\n1. Si, deseo salir ";
					cout<<"\n2. No, deseo continuar \n";
					cin>>opc;	
					
				
				
				}	
				if(opc == "1"){
					
					exit(1);
				
				}
				
					
			}
		}
		else{
			
		
	
			
			
		}




	}


 return 0;

}


