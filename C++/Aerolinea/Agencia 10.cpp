#include<iostream>
#include<windows.h>
#include<locale.h>
#include<cstdlib>
#include<fstream>
using namespace std;

FILE *fd;
string mandato;
char cadena[1000];
int numerocadena;
int asiento;
int precioadulto = 0, precioninja;
int distancia1, distancia2;
string puerto1, puerto2;
int destino, partida;
int adultos, ninjas;
int dia1, mes1, dia2, mes2;
int precio;
char nombre[1000], apellido[1000], tel[1000];
string vuelo;
string clase;
int distanciatotal;

int colordefol(){SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);}
int cian(){	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),3);}
int azul(){	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),9);}
int amarillo(){SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),14);}
int verde(){SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),10);	}
int rojofuerte(){SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);}
int purpura(){SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),5);}
int blanco(){SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15);}
int rojosuave(){SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),12);}
int marron(){SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),6);}

	
int validaletras(){
	
	for (int i = 0; i < strlen(cadena); i++)
    {             					
		while(!isalpha(cadena[i]) && !isspace(cadena[i])){
			cout<<"\n\nSolo ingrese letras >:v\n\n";	
						
			cout<<mandato; cin.getline(cadena,100);	
		}
    }		
}

int validanumeros(){
	
	for (int i = 0; i < strlen(cadena); i++)
    {             					
		while(!isdigit(cadena[i])){
			cout<<"\n\nSolo Numeros >:v\n\n";	
						
			cout<<mandato; cin.getline(cadena,100);	
		}
    }	
	numerocadena = atoi(cadena);	
}

int validaclase(){
	
	while(clase != "1" && clase != "2" && clase != "3"){
	
		cout<<"\nIngrese SOLO los valores indicados";
		cout<<"\nSeleccione la clase que desaa tomar: "; getline(cin, clase);	
	}	
}

int avioncito2(){
	
	cout<<"                                                                                                        "<<endl;
	cout<<"                                                                              .---------.             "<<endl;  
	cout<<"                                                                           .-'           '-.          "<<endl;
	cout<<"                                                                         //'                '\\\\         "<<endl;
	cout<<"                                                                        ||                    ||        "<<endl;
	cout<<"                                                                        ||";marron(); cout<<"01|02|03|  |04|05|06";blanco(); cout<<"||        "<<endl; 
	cout<<"                                                                        ||";marron(); cout<<"07|08|09|  |10|11|12";blanco(); cout<<"||        "<<endl;
	cout<<"                                                                        ||";marron(); cout<<"13|14|15|  |16|17|18";blanco(); cout<<"||        "<<endl;
	cout<<"                                                                        ||";marron(); cout<<"19|20|21|  |22|23|24";blanco(); cout<<"||        "<<endl;
	cout<<"                                                                        ||";marron(); cout<<"25|26|27|  |28|29|30";blanco(); cout<<"||        "<<endl;
	cout<<"                                                                        ||";marron(); cout<<"31|32|33|  |34|35|36";blanco(); cout<<"||        "<<endl;
	cout<<"                                                                        ||";marron(); cout<<"37|38|39|  |40|41|42";blanco(); cout<<"||        "<<endl;
	cout<<"                                                                        ||";marron(); cout<<"43|44|45|  |46|47|48";blanco(); cout<<"||        "<<endl;
	cout<<"                                                                        ||";marron(); cout<<"49|50|51|  |52|53|54";blanco(); cout<<"||        "<<endl;
	cout<<"                                                                        ||";marron(); cout<<"55|56|57|  |58|59|60";blanco(); cout<<"||        "<<endl;
	cout<<"                                                                        ||";marron(); cout<<"61|62|63|  |64|65|66";blanco(); cout<<"||        "<<endl;
	cout<<"                                                                        ||";marron(); cout<<"67|68|69|  |70|71|72";blanco(); cout<<"||        "<<endl;
	cout<<"                                                                        ||";marron(); cout<<"73|74|75|  |76|77|78";blanco(); cout<<"||        "<<endl;
	cout<<"                                                                        ||";marron(); cout<<"79|80|81|  |82|83|84";blanco(); cout<<"||        "<<endl;
	cout<<"                                                                        ||";marron(); cout<<"85|86|87|  |88|89|90";blanco(); cout<<"||        "<<endl;
	cout<<" _______________________________________________________________________||";marron(); cout<<"91|92|93|  |94|95|96";blanco(); cout<<"||_________________________________________________________________________ "<<endl;
	cout<<"|                                                                       ||                    ||                                                                         |"<<endl;
	cout<<"|                                                                       ||                    ||                                                                         |"<<endl;
	cout<<"|                                                                       ||";colordefol(); cout<<"097|098|    |099|100";blanco(); cout<<"||                                                                         |"<<endl;
	cout<<"'- . _                                                                  ||";colordefol(); cout<<"101|102|    |103|104";blanco(); cout<<"||                                                                  _ . - ' "<<endl;
	cout<<"      ' - . _                                                           ||";colordefol(); cout<<"105|106|    |107|108";blanco(); cout<<"||                                                           _ . - '        "<<endl;
	cout<<"             ' - . _                                                    ||";colordefol(); cout<<"109|110|    |111|112";blanco(); cout<<"||                                                    _ . - '               "<<endl;
	cout<<"                    ' - . _                                             ||";colordefol(); cout<<"113|114|    |115|116";blanco(); cout<<"||                                             _ . - '                      "<<endl;
	cout<<"                           ' - . _                                      ||";colordefol(); cout<<"117|118|    |119|120";blanco(); cout<<"||                                      _ . - '                             "<<endl;
	cout<<"                                  ' - . _                               ||";colordefol(); cout<<"121|122|    |123|124";blanco(); cout<<"||                               _ . - '                                    "<<endl;
	cout<<"                                         ' - . _                        ||";colordefol(); cout<<"125|126|    |127|128";blanco(); cout<<"||                        _ . - '                                           "<<endl;
	cout<<"                                                ' - . _                 ||";colordefol(); cout<<"129|130|    |131|132";blanco(); cout<<"||                 _ . - '                                                  "<<endl;
	cout<<"                                                       ' - . _          ||";colordefol(); cout<<"133|134|    |135|136";blanco(); cout<<"||          _ . - '                                                         "<<endl;
	cout<<"                                                              ' - . _   ||";colordefol(); cout<<"137|138|    |139|140";blanco(); cout<<"||   _ . - '                                                                "<<endl;
	cout<<"                                                                      '\\|";colordefol(); cout<<"|141|142|    |143|144";blanco(); cout<<"||/'                                                                        "<<endl;
	cout<<"                                                                        ||                    ||        "<<endl;
	cout<<"                                                                        ||                    ||        "<<endl;
	cout<<"                                                                        ||";azul(); cout<<" 145|   |146|  |147 ";blanco(); cout<<"||        "<<endl;
	cout<<"                                                                        ||                    ||        "<<endl;
	cout<<"                                                                        ||";azul(); cout<<" 148|   |149|  |150 ";blanco(); cout<<"||        "<<endl;
	cout<<"                                                                        ||                    ||        "<<endl;
	cout<<"                                                                        ||";azul(); cout<<" 151|   |152|  |153 ";blanco(); cout<<"||        "<<endl;
	cout<<"                                                                        ||                    ||        "<<endl;
	cout<<"                                                                        ||";azul(); cout<<" 154|   |155|  |156";blanco(); cout<<" ||        "<<endl;
	cout<<"                                                                        ||                    ||        "<<endl;
	cout<<"                                                                        ||";azul(); cout<<" 157|   |158|  |159";blanco(); cout<<" ||        "<<endl;
	cout<<"                                                                        ||                    ||        "<<endl;
	cout<<"                                                                        ||";azul(); cout<<" 160|   |161|  |162";blanco(); cout<<" ||        "<<endl;
	cout<<"                                                                        ||                    ||        "<<endl;
	cout<<"                                                                        ||";azul(); cout<<" 163|   |164|  |165";blanco(); cout<<" ||        "<<endl;
	cout<<"                                                                        ||                    ||        "<<endl;
	cout<<"                                                                        #                      #        "<<endl;
	cout<<"                                                                        #                      #        "<<endl;
	cout<<"                                                                         #                    #         "<<endl;
	cout<<"                                                                         #                    #         "<<endl;
	cout<<"                                                                          #                  #          "<<endl;
	cout<<"                                                                           #                #           "<<endl;
	cout<<"                                                                            #              #            "<<endl;
	cout<<"                                                                             #            #             "<<endl;
	cout<<"                                                                              #          #              "<<endl;
	cout<<"                                                                               #        #               "<<endl;
	cout<<"                                                                                '-.__.-'                "<<endl;
	cout<<"                                                                                                        "<<endl;
		
	cout<<"Color "; marron(); cout<<"###"; blanco(); cout<<" = Clase economica."<<endl;
	cout<<"Color "; colordefol(); cout<<"###"; blanco(); cout<<" = Clase Media."<<endl;
	cout<<"Color "; azul(); cout<<"###"; blanco(); cout<<" = Clase Premium"<<endl<<endl;

}


int listapaises(){
	
		
	cout<<"\n1.  Liberia, Costa Rica(LIR)."<<endl;
	cout<<"2.  San Jose, Costa Rica(SJO)."<<endl;
	cout<<"3.  Camaguey, Cuba(CMW)."<<endl;
	cout<<"4.  Havana, Cuba(HAV)."<<endl;
	cout<<"5.  Holguin, Cuba(HOG)."<<endl;
	cout<<"6.  Santa Clara, Cuba(SNU)."<<endl;
	cout<<"7.  La Romana, Republica Dominicana(LRM)."<<endl;
	cout<<"8.  Puerto Plata, Republica Dominicana(POP)."<<endl;
	cout<<"9.  Punta Cana, Republica Dominicana(PUJ)."<<endl;
	cout<<"10. Santiago, Republica Dominicana(POP)."<<endl;
	cout<<"11. Santo Domingo, Republica Dominicana(SDQ)."<<endl;
	cout<<"12. Cancun, Mexico(CUN)."<<endl;
	cout<<"13. Mexico City, Mexico(MEX)."<<endl;
	cout<<"14. Bogota, Colombia(BOG)."<<endl;
	cout<<"15. Cartagena, Colombia(CTG)."<<endl;
	cout<<"16. Medellin, Colombia(MDE)."<<endl; 
	cout<<"17. Guayaquil, Ecuador(GYE)."<<endl;
	cout<<"18. Quito, Ecuador(UIO)."<<endl;
	cout<<"19. Lima, Peru(LIM)."<<endl;
	cout<<"20. Buenos Aires, Argentina (EZE)"<<endl;
	cout<<"21. La Paz, Bolivia (LPB)"<<endl;
	cout<<"22. Rio de Janeiro, Brasil(GIG)"<<endl;
	cout<<"23. Santiago, Chile(SCL)"<<endl;
	cout<<"24. San Salvador, Salvador (SAL)"<<endl;
	cout<<"25. Ciudad de Guatemala, guatemala (GUA)"<<endl;
	cout<<"26. Puerto Príncipe, Haiti (PAP)"<<endl;
	cout<<"27. San Pedro Sula, Honduras (SAP)"<<endl;
	cout<<"28. Managua, Nicaragua (MGA)"<<endl;
	cout<<"29. Ciudad de Panama, Panama (PTY)"<<endl;
	cout<<"30. Asunción, Paraguay (ASU)"<<endl;
	cout<<"31. Montevideo, Uruguay (MVD)"<<endl;
	cout<<"32. Maracaibo, Venezuela (MAR)"<<endl;
}

int salir(){
	string opc;
	
	cout<<"\n---------------------------------------------------------"<<endl<<endl;
				                                                       
	amarillo(); cout<<"              __.....__              "<<endl;                      
	amarillo(); cout<<"          .-'           '-.          "<<endl;                   
	amarillo(); cout<<"        .'"; blanco(); cout<<" Realizado por:"; amarillo(); cout<<"  '.        "<<endl;                   
	amarillo(); cout<<"       / "; cian(); cout<<"   J";blanco(); cout<<"aime ";cian(); cout<<"H";blanco();; cout<<"ndz.     ";  amarillo(); cout<<" \\       "<<endl;                    
	amarillo(); cout<<"      /  "; colordefol(); cout<<"     "; colordefol(); cout<<" |\\     "; cian(); cout<<" _-_,,";  amarillo(); cout<<"  \\      "<<endl;                     
	amarillo(); cout<<"     ;    "; colordefol(); cout<<"    "; colordefol(); cout<<"|V \\_  "; cian(); cian(); cout<<" (  //"; amarillo(); cout<<"    ;     "<<endl;                   
	amarillo(); cout<<"     |        "; colordefol(); cout<<"|  ' \\ "; cian(); cout<<"   _||"; amarillo(); cout<<"    ;     "<<endl;
	amarillo(); cout<<"     ; ";blanco(); cout<<"  #"; cian();cout<<"20"; colordefol(); cout<<"  )   ,_\\"; cian(); cout<<"   _||";amarillo(); cout<<"    |     "<<endl;                    
	amarillo(); cout<<"     ;  "; blanco(); cout<<"5to";cian(); cout<<"E"; colordefol(); cout<<" /     |  "; cian();  cout<<"   || ";amarillo(); cout<<"   ;     "<<endl;                   
	amarillo(); cout<<"      \\    "; colordefol(); cout<<" /       \\ "; cian(); cout<<" -__-, "; amarillo(); cout<<" /      "<<endl;                    
	amarillo(); cout<<"       \\   "; colordefol(); cout<<" |        \\  ";amarillo(); cout<<"     /       "<<endl;                   
	amarillo(); cout<<"        '.  "; colordefol(); cout<<" \\        \\ ";amarillo(); cout<<"   .'        "<<endl;                    
	amarillo(); cout<<"          '-._"; colordefol(); cout<<"|        \\";amarillo(); cout<<".-'          "<<endl;                       
	amarillo(); cout<<"              "; colordefol(); cout<<"| |\\       |           "<<endl;                 
	colordefol; cout<<"    __________"; colordefol(); cout<<"/ |_'.    /"; colordefol(); cout<<"_________   "<<endl;colordefol(); 

	cout<<"\n1. Continuar\n2. Salir\nQue desea hacer?\n=====> "; getline(cin, opc);
		
	while(opc != "1" && opc != "2" ){
		
		cout<<"\nValor no valido, Ingrese la opcion otra vez"; 
		cout<<"\n1. Continuar\n2. Salir\nQue desea hacer?\n=====> "; getline(cin, opc);	
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

int validavuelo(){
	
	while(vuelo != "1" && vuelo != "2" && vuelo != "3" && vuelo != "4" && vuelo != "5" && vuelo != "6" && vuelo != "7" && vuelo != "8"){
	
	 cout<<"\nSolo ingrese los valores especificados! ";	
	 cout<<"\nSeleccione el vuelo que desea tomar: "; getline(cin, vuelo);		
	}
}

int avioncito(){
		
	cout<<"\n                                                               .____   __ _     "<<endl;
	cout<<"   __o__   _______ _ _  _                                     /     /             "<<endl;
	cout<<"   \\    ~\\                                                  /      /              "<<endl;
	cout<<"     \\     '\\                                         ..../      .'               "<<endl;
	cout<<"      . ' ' . ~\\                                      ' /       /                 "<<endl;
	cout<<"     .  _    .  ~ \\  .+~\\~ ~ ' ' \" \" ' ' ~ - - - - - -''_      /                "<<endl;
	cout<<"    .  <#  .  - - -/' . ' \\  __                          '~ - \\                   "<<endl;
	cout<<"     .. -           ~-.._ / |__|  ( )  ( )  ( )  0  o    _ _    ~ .               "<<endl;
	cout<<"   .-'                                               .- ~    '-.    -.            "<<endl; 
	cout<<"  <                      . ~ ' ' .             . - ~             ~ -.__~_. _ _    "<<endl;
	cout<<"    ~- .       JH205E  .          . . . . ,- ~                                    "<<endl;
	cout<<"          ' ~ - - - - =.   <#>    .         \\.._                                  "<<endl;
	cout<<"                      .     ~      ____ _ .. ..  .- .                             "<<endl;
	cout<<"                       .         '        ~ -.        ~ -.                        "<<endl;
	cout<<"                         ' . . '               ~ - .       ~-.                    "<<endl;
	cout<<"                                                     ~ - .      ~ .               "<<endl;
	cout<<"                                                            ~ -...0..~. ____      "<<endl; 
	cout<<"	                                                                                 "<<endl<<endl; 
}

int membrete(){
	
	system("cls");
	avioncito();
	
	cout<<"                                    ,---,                                                                                                              "<<endl;
	cout<<"                                 ,`--.' |                                                                                                             "<<endl;
	cout<<"     ,---,                       |   :  :  ___                                                                 ,--,                                   "<<endl;
	cout<<"  ,`--.' |                       |   |  ',--.'|_                                              ,--,           ,--.'|     ,--,                          "<<endl;
	cout<<"  |   :  :                 ,---, '   :  ||  | :,'                                           ,--.'|    __  ,-.|  | :   ,--.'|         ,---,            "<<endl;
	cout<<"  :   |  '  .--.--.    ,-+-. /  |;   |.' :  : ' :                                           |  |,   ,' ,'/ /|:  : '   |  |,      ,-+-. /  |           "<<endl;
	cout<<"  |   :  | /  /    '  ,--.'|'   |'---' .;__,'  /             ,--.--.              ,--.--.   `--'_   '  | |' ||  ' |   `--'_     ,--.'|'   |   ,---.   "<<endl;
	cout<<"  '   '  ;|  :  /`./ |   |  ,\"' |      |  |   |             /       \"            /       \\  ,' ,'|  |  |   ,''  | |   ,' ,'|   |   |  ,\"' |  /     \\  "<<endl;
	cout<<"  |   |  ||  :  ;_   |   | /  | |      :__,'| :            .--.  .-. |          .--.  .-. | '  | |  '  :  /  |  | :   '  | |   |   | /  | | /    /  | "<<endl;
	cout<<"  '   :  ; \\  \\    `.|   | |  | |        '  : |__           \\__\\/: . .           \\__\\/: . . |  | :  |  | '   '  : |__ |  | :   |   | |  | |.    ' / | "<<endl;
	cout<<"  |   |  '  `----.   \\   | |  |/         |  | '.'|          ,\" .--.; |           ,\" .--.; | '  : |__;  : |   |  | '.'|'  : |__ |   | |  |/ '   ;   /| "<<endl;
	cout<<"  '   :  | /  /`--'  /   | |--'          ;  :    ;         /  /  ,.  |          /  /  ,.  | |  | '.'|  , ;   ;  :    ;|  | '.'||   | |--'  '   |  / | "<<endl;
	cout<<"  ;   |.' '--'.     /|   |/              |  ,   /         ;  :   .'   \\        ;  :   .'   \\;  :    ;---'    |  ,   / ;  :    ;|   |/      |   :    | "<<endl;
	cout<<"  '---'     `--'---' '---'                ---`-'          |  ,     .-./        |  ,     .-./|  ,   /          ---`-'  |  ,   / '---'        \\   \\  /  "<<endl;
	cout<<"                                                           `--`---'             `--`---'     ---`-'                    ---`-'                `----'   "<<endl;
	cout<<" "<<endl;
	
	avioncito();

}


int main(){
	
	setlocale(LC_ALL, "Spanish");	
	blanco();
	membrete();
	cout<<"		. - . - . - . - . - . - . - . - . - . - . - . - ."<<endl;
	cout<<"		: A nombre de quien desea comprar los boletos:  :"<<endl; 
	cout<<"		. - . - . - . - . - . - . - . - . - . - . - . - ."<<endl;
	cout<<"\n\nNOMBRE: "; cin.getline(nombre, 100);
	
	while(strlen(nombre)==0 or strlen(nombre)>30){
		
		cout<<"\nTodos los datos son necesarios*";
		cout<<"\nNOMBRE: "; cin.getline(nombre, 100);		
	}
	
	strcpy(cadena, nombre);
	mandato="\nNOMBRE: ";
	validaletras();
	strcpy(nombre,cadena);
	strcpy(cadena, "");    
	cout<<"\nAPELLIDO: "; cin.getline (apellido,100);
		
	while(strlen(apellido)==0 ){
		
		cout<<"\nTodos los datos son necesarios*";
		cout<<"\nAPELLIDO: "; cin.getline (apellido,100);	
	}
	
	strcpy(cadena, apellido);
	mandato="\nApellido: ";
	validaletras();
	strcpy(apellido, cadena);
	strcpy(cadena, ""); 
	
	cout<<"\nNumero de telefono: "; cin.getline (tel,100);
	
	strcpy(cadena, tel);
	mandato="\nNumero de telefono: ";
	validanumeros();
	strcpy(tel, cadena);
	strcpy(cadena, "");
	
	system("pause");
	system("cls");
	
	cout<<"\nDesde que pais desea partir: "<<endl;
		
	listapaises();	
	
	char partidaa[100];
	cout<<"\nElija su pais de partida: "; cin.getline(partidaa, 100);
	
	strcpy(cadena, partidaa);
	mandato = "\nElija su pais de partida: ";    
    validanumeros();
    partida = numerocadena;
    strcpy(cadena, "");
	while(partida > 32){
		cout<<"\nElija su pais de partida: "; cin.getline(partidaa, 100);
		strcpy(cadena, partidaa);
		mandato = "\nElija su pais de partida: ";    
	    validanumeros();
	    partida = numerocadena;    
	}
	switch(partida){
		
		case 1: distancia1 = 2; puerto1="Liberia, Costa Rica(LIR)  ";  break;
		case 2: distancia1 = 2; puerto1="San Jose, Costa Rica(SJO) "; break;
		case 3: distancia1 = 1; puerto1="Camaguey, Cuba(CMW)";break;
		case 4: distancia1 = 1; puerto1="Havana, Cuba(HAV)"; break;
		case 5: distancia1 = 1; puerto1="Holguin, Cuba(HOG)"; break;
		case 6: distancia1 = 1; puerto1="Santa Clara, Cuba(SNU)"; break;
		case 7: distancia1 = 1; puerto1="La Romana, Republica Dominicana(LRM)"; break;
		case 8: distancia1 = 1; puerto1="Puerto Plata, Republica Dominicana(POP)"; break;
		case 9: distancia1 = 1; puerto1="Punta Cana, Republica Dominicana(PUJ)"; break;
		case 10: distancia1 = 1; puerto1="Santiago, Republica Dominicana(POP)"; break;
		case 11: distancia1 = 1; puerto1="Santo Domingo, Republica Dominicana(SDQ)"; break;
		case 12: distancia1 = 2; puerto1="Cancun, Mexico(CUN)"; break;
		case 13: distancia1 = 2; puerto1="Mexico City, Mexico"; break;
		case 14: distancia1 = 3; puerto1="Bogota, Colombia(BOG)"; break;
		case 15: distancia1 = 3; puerto1="Cartagena, Colombia(CTG)."; break;
		case 16: distancia1 = 3;puerto1="Medellin, Colombia(MDE)"; break;
		case 17: distancia1 = 3; puerto1="Guayaquil, Ecuador(GYE)"; break;
		case 18: distancia1 = 3; puerto1="Quito, Ecuador(UIO)"; break;
		case 19: distancia1 = 4; puerto1="Lima, Peru(LIM)"; break;
		case 20: distancia1 = 5; puerto1="Buenos Aires, Argentina (EZE)"; break;
		case 21: distancia1 = 4; puerto1="La Paz, Bolivia (LPB)"; break;
		case 22: distancia1 = 4; puerto1="Rio de Janeiro, Brasil(GIG)"; break;
		case 23: distancia1 = 5; puerto1="Santiago, Chile(SCL)"; break;
		case 24: distancia1 = 2; puerto1="San Salvador, Salvador (SAL)"; break;
		case 25: distancia1 = 2; puerto1="Ciudad de Guatemala, guatemala (GUA)"; break;
		case 26: distancia1 = 1; puerto1="Puerto Príncipe, Haiti (PAP)"; break;
		case 27: distancia1 = 2; puerto1="San Pedro Sula, Honduras (SAP)"; break;
		case 28: distancia1 = 2; puerto1="Managua, Nicaragua (MGA)"; break;
		case 29: distancia1 = 2; puerto1="Ciudad de Panama, Panama (PTY)"; break;
		case 30: distancia1 = 4; puerto1="Asunción, Paraguay (ASU)"; break;
		case 31: distancia1 = 5; puerto1="Montevideo, Uruguay (MVD)"; break;
		case 32: distancia1 = 3; puerto1="Maracaibo (MAR), Venezuela"; break;
	}
	system("pause");
	system("cls");
	
	cout<<"\nDestinos: "<<endl;
	listapaises();
	
	char destinoo[100];
	cout<<"\nElija su pais de destino: "; cin.getline(destinoo, 100);
	
    strcpy(cadena, destinoo);
	mandato = "\nElija su pais de destino: ";    
    validanumeros();
    destino = numerocadena;
    strcpy(cadena, "");
    
	while(destino > 32){
		cout<<"Ingrese los valor pedidos >:v"<<endl;
		cout<<"\nElija su pais de destino: "; cin.getline(destinoo, 100);
	    strcpy(cadena, destinoo);
		mandato = "\nElija su pais de destino: ";    
	    validanumeros();
	    destino = numerocadena;
	    
	}
	while(destino==partida){
	
	cout<<"\nNo se puede ir de un aereopuerto al mismo aereopuerto, pero que imbecil ;:v"<<endl;	
	cout<<"\nElija su pais de destino: "; cin.getline(destinoo, 100);
	
    strcpy(cadena, destinoo);
	mandato = "\nElija su pais de destino: ";    
    validanumeros(); 
    destino = numerocadena;
    strcpy(cadena, "");
	}
	
	switch(destino){
		
		case 1: distancia2 = 2; puerto2="Liberia, Costa Rica(LIR)  ";  break;
		case 2: distancia2 = 2; puerto2="San Jose, Costa Rica(SJO) "; break;
		case 3: distancia2 = 1; puerto2="Camaguey, Cuba(CMW)";break;
		case 4: distancia2 = 1; puerto2="Havana, Cuba(HAV)"; break;
		case 5: distancia2 = 1; puerto2="Holguin, Cuba(HOG)"; break;
		case 6: distancia2 = 1; puerto2="Santa Clara, Cuba(SNU)"; break;
		case 7: distancia2 = 1; puerto2="La Romana, Republica Dominicana(LRM)"; break;
		case 8: distancia2 = 1; puerto2="Puerto Plata, Republica Dominicana(POP)"; break;
		case 9: distancia2 = 1; puerto2="Punta Cana, Republica Dominicana(PUJ)"; break;
		case 10: distancia2 = 1; puerto2="Santiago, Republica Dominicana(POP)"; break;
		case 11: distancia2 = 1; puerto2="Santo Domingo, Republica Dominicana(SDQ)"; break;
		case 12: distancia2 = 2; puerto2="Cancun, Mexico(CUN)"; break;
		case 13: distancia2 = 2; puerto2="Mexico City, Mexico"; break;
		case 14: distancia2 = 3; puerto2="Bogota, Colombia(BOG)"; break;
		case 15: distancia2 = 3; puerto2="Cartagena, Colombia(CTG)."; break;
		case 16: distancia2 = 3; puerto2="Medellin, Colombia(MDE)"; break;
		case 17: distancia2 = 3; puerto2="Guayaquil, Ecuador(GYE)"; break;
		case 18: distancia2 = 3; puerto2="Quito, Ecuador(UIO)"; break;
		case 19: distancia2 = 4; puerto2="Lima, Peru(LIM)"; break;
		case 20: distancia2 = 5; puerto2="Buenos Aires, Argentina (EZE)"; break;
		case 21: distancia2 = 4; puerto2="La Paz, Bolivia (LPB)"; break;
		case 22: distancia2 = 4; puerto2="Rio de Janeiro, Brasil(GIG)"; break;
		case 23: distancia2 = 5; puerto2="Santiago, Chile(SCL)"; break;
		case 24: distancia2 = 2; puerto2="San Salvador, Salvador (SAL)"; break;
		case 25: distancia2 = 2; puerto2="Ciudad de Guatemala, guatemala (GUA)"; break;
		case 26: distancia2 = 1; puerto2="Puerto Príncipe, Haiti (PAP)"; break;
		case 27: distancia2 = 2; puerto2="San Pedro Sula, Honduras (SAP)"; break;
		case 28: distancia2 = 2; puerto2="Managua, Nicaragua (MGA)"; break;
		case 29: distancia2 = 2; puerto2="Ciudad de Panama, Panama (PTY)"; break;
		case 30: distancia2 = 4; puerto2="Asunción, Paraguay (ASU)"; break;
		case 31: distancia2 = 5; puerto2="Montevideo, Uruguay (MVD)"; break;
		case 32: distancia2 = 3; puerto2="Maracaibo (MAR), Venezuela"; break;
		
	}
	
//---------------------------------------------------------------------------------------------------------------------
	
	system("pause");
	membrete();	
	
	distanciatotal = distancia1 - distancia2;
	
	int asientosmin, asientomax;
	char diaa1[100], mess1[100], diaa2[100], mess2[100];
	
	cout<<"Elija la fecha de partida:"<<endl;
	cout<<"Dia: "; cin.getline(diaa1, 100);
	
	strcpy(cadena, diaa1);
	mandato="Dia: ";
	validanumeros();
	dia1= numerocadena;
	strcpy(cadena, "");
	while(dia1 > 31){
	
	cout<<"ESA FECHA NO ES VALIDA"<<endl;
	cout<<"Dia: "; cin.getline(diaa1, 100);	
	strcpy(cadena, diaa1);
	mandato="Dia: ";
	validanumeros();
	dia1= numerocadena;
	strcpy(cadena, "");	
		
	}
	
	cout<<"\nMes: "; cin.getline(mess1, 100);
	
	strcpy(cadena, mess1);
	mandato="\nMes: ";
	validanumeros();
	mes1= numerocadena;
	strcpy(cadena, "");
	while(mes1 > 12){
		
	cout<<"ESA FECHA NO ES VALIDA"<<endl;	
	cout<<"\nMes: "; cin.getline(mess1, 100);
	strcpy(cadena, mess1);
	mandato="\nMes: ";
	validanumeros();
	mes1= numerocadena;
	strcpy(cadena, "");	
	}
	
	cout<<"Elija la fecha de llegada:"<<endl;
	
	cout<<"Dia: "; cin.getline(diaa2, 100);
	strcpy(cadena, diaa2);
	mandato="Dia: ";
	validanumeros();
	dia2= numerocadena;
	strcpy(cadena, "");
	while(dia2 > 31){
	
	cout<<"ESA FECHA NO ES VALIDA"<<endl;	
	cout<<"Dia: "; cin.getline(diaa2, 100);
	strcpy(cadena, diaa2);
	mandato="Dia: ";
	validanumeros();
	dia2= numerocadena;
	strcpy(cadena, "");	
	}
	
	cout<<"\nMes: "; cin.getline(mess2, 100);
	
	strcpy(cadena, mess2);
	mandato="\nMes: ";
	validanumeros();
	mes2= numerocadena;
	strcpy(cadena, "");
	while(mes2 > 12){
		
		cout<<"ESA FECHA NO ES VALIDA"<<endl;
		cout<<"\nMes: "; cin.getline(mess2, 100);
		strcpy(cadena, mess2);
		mandato="\nMes: ";
		validanumeros();
		mes2= numerocadena;
		strcpy(cadena, "");	
	}
	
//------------------------------------------------------------------------------------------------------------------
	
	if(distanciatotal == 0){
		
		cout<<"Los vuelos disponibles son: "<<endl<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 1: 07:00 "<<puerto1<<" - 08:00 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 2: 12:00 "<<puerto1<<" - 13:00 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;		
		cout<<" Vuelo 3: 15:30 "<<puerto1<<" - 16:30 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 4: 18:00 "<<puerto1<<" - 19:00 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 5: 21:00 "<<puerto1<<" - 22:00 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 6: 00:20 "<<puerto1<<" - 01:20 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 7: 06:00 "<<puerto1<<" - 07:00 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 8: 10:00 "<<puerto1<<" - 11:00 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl<<endl;
		
		cout<<"\nSeleccione el vuelo que desea tomar: "; getline(cin, vuelo);
		validavuelo();
		system("cls");
		avioncito2();
		cout<<"PRECIOS:"<<endl;
		cout<<"\n\tAdultos: "<<endl;
		cout<<"\n\t\tClase economica: 1000k"<<endl;
		cout<<"\n\t\tClase media: 1500k"<<endl;
		cout<<"\n\t\tClase premium: 2000k"<<endl;
		cout<<"\n\n\tNiños: "<<endl;
		cout<<"\n\t\tClase economica: 800k"<<endl;
		cout<<"\n\t\tClase media: 1300k"<<endl;
		cout<<"\n\t\tClase premium: 1800k"<<endl;
		cout<<"\n\t1. Economica\n\t2. Media\n\t3. Primera"<<endl;
		
		cout<<"\nSeleccione la clase que desea tomar: "; getline(cin, clase);
			
		if(clase =="1"){
				
			precioadulto=1000;
			precioninja=800;
			asientosmin = 1;
			asientomax = 96;	
		}
		else if(clase =="2"){	
				
			precioadulto=1500;
			precioninja=1300;
			asientosmin = 97;
			asientomax = 144;
		}
		else if(clase =="3"){
			
			precioadulto=2000;
			precioninja=1800;
			asientosmin = 145;
			asientomax = 165;			
	    }
	}
	else if(distanciatotal == -1 or distanciatotal == 1){
		
		cout<<"Los vuelos disponibles son: "<<endl<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 1: 08:00 "<<puerto1<<" - 09:45 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 2: 10:30 "<<puerto1<<" - 12:15 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;		
		cout<<" Vuelo 3: 13:00 "<<puerto1<<" - 14:45 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 4: 16:15 "<<puerto1<<" - 18:00 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 5: 20:00 "<<puerto1<<" - 21:45 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 6: 23:10 "<<puerto1<<" - 00:55 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 7: 03:00 "<<puerto1<<" - 04:45 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 8: 06:05 "<<puerto1<<" - 07:40 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl<<endl;
		
		cout<<"\nSeleccione el vuelo que desea tomar: "; getline(cin, vuelo);
		validavuelo();
		system("cls");
		avioncito2();
		
		cout<<"PRECIOS:"<<endl;
		cout<<"\n\tAdultos: "<<endl;
		cout<<"\n\t\tClase economica: 1500k"<<endl;
		cout<<"\n\t\tClase media: 2000k"<<endl;
		cout<<"\n\t\tClase premium: 2500k"<<endl;
		cout<<"\n\n\tNiños: "<<endl;
		cout<<"\n\t\tClase economica: 1300k"<<endl;
		cout<<"\n\t\tClase media: 1800k"<<endl;
		cout<<"\n\t\tClase premium: 2300k"<<endl;
		cout<<"\n\t1. Economica\n\t2. Media\n\t3. Primera"<<endl;
		cout<<"\nSeleccione la clase que desaa tomar: "; getline(cin, clase);
		
		if(clase =="1"){
				
			precioadulto=1500;
			precioninja=1300;
			asientosmin = 1;
			asientomax = 96;	
		}
		else if(clase =="2"){	
				
			precioadulto=2000;
			precioninja=1800;
			asientosmin = 97;
			asientomax = 144;				
		}
		else if(clase =="3"){
			
			precioadulto=2500;
			precioninja=2300;
			asientosmin = 145;
			asientomax = 165;
	    }

	}
	else if(distanciatotal == -2 or distanciatotal == 2){
		
		cout<<"Los vuelos disponibles son: "<<endl<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 1: 05:00 "<<puerto1<<" - 07:30 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 2: 08:30 "<<puerto1<<" - 10:00 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;		
		cout<<" Vuelo 3: 12:00 "<<puerto1<<" - 13:30 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 4: 15:50 "<<puerto1<<" - 18:20 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 5: 19:00 "<<puerto1<<" - 21:30 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 6: 23:10 "<<puerto1<<" - 01:40 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 7: 06:00 "<<puerto1<<" - 08:30 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 8: 10:00 "<<puerto1<<" - 12:30 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl<<endl;
		
		cout<<"\nSeleccione el vuelo que desea tomar: "; getline(cin, vuelo);
		validavuelo();
		system("cls");
		avioncito2();
		cout<<"PRECIOS:"<<endl;
		cout<<"\n\tAdultos: "<<endl;
		cout<<"\n\t\tClase economica: 2000k"<<endl;
		cout<<"\n\t\tClase media: 2500k"<<endl;
		cout<<"\n\t\tClase premium: 3000k"<<endl;
		cout<<"\n\n\tNiños: "<<endl;
		cout<<"\n\t\tClase economica: 1800k"<<endl;
		cout<<"\n\t\tClase media: 2300k"<<endl;
		cout<<"\n\t\tClase premium: 2800k"<<endl;
		cout<<"\n\t1. Economica\n\t2. Media\n\t3. Primera"<<endl;
		cout<<"\nSeleccione la clase que desaa tomar: "; getline(cin, clase);
		
		if(clase =="1"){
				
			precioadulto=2000;
			precioninja=1800;
			asientosmin = 1; 
			asientomax = 96;		
		}
		else if(clase =="2"){	
				
			precioadulto=2500;
			precioninja=2300;
			asientosmin = 97;
			asientomax = 144;			
		}
		else if(clase =="3"){
			
			precioadulto=3000;
			precioninja=2800;
			asientosmin = 145;
			asientomax = 165;			
	    }
	}
	else if(distanciatotal == -3 or distanciatotal == 3){
		cout<<"Los vuelos disponibles son: "<<endl<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 1: 08:00 "<<puerto1<<" - 12:10 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 2: 11:00 "<<puerto1<<" - 15:10 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;		
		cout<<" Vuelo 3: 13:05 "<<puerto1<<" - 17:15 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 4: 14:50 "<<puerto1<<" - 19:00 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 5: 16:05 "<<puerto1<<" - 20:15 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 6: 20:00 "<<puerto1<<" - 00:10 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 7: 00:40 "<<puerto1<<" - 04:50 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 8: 07:25 "<<puerto1<<" - 11:35 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl<<endl;
		
		cout<<"\nSeleccione el vuelo que desea tomar: "; getline(cin, vuelo);
		validavuelo();
		system("cls");
		avioncito2();
		cout<<"PRECIOS:"<<endl;
		cout<<"\n\tAdultos: "<<endl;
		cout<<"\n\t\tClase economica: 2500k"<<endl;
		cout<<"\n\t\tClase media: 3000k"<<endl;
		cout<<"\n\t\tClase premium: 3500k"<<endl;
		cout<<"\n\n\tNiños: "<<endl;
		cout<<"\n\t\tClase economica: 2300k"<<endl;
		cout<<"\n\t\tClase media: 2800k"<<endl;
		cout<<"\n\t\tClase premium: 3300k"<<endl;
		cout<<"\n\t1. Economica\n\t2. Media\n\t3. Primera"<<endl;
		cout<<"\nSeleccione la clase que desaa tomar: "; getline(cin, clase);
		
		if(clase =="1"){
				
			precioadulto=2500;
			precioninja=2300;
			asientosmin = 1;
			asientomax = 96;		
		}
		else if(clase =="2"){	
				
			precioadulto=3000;
			precioninja=2800;
			asientosmin = 97;
			asientomax = 144;		
		}
		else if(clase =="3"){
			
			precioadulto=3500;
			precioninja=3300;
			asientosmin = 145;
			asientomax = 165;			
	    }	
	}
	
	else if(distanciatotal == -4 or distanciatotal == 4){
		
		cout<<"Los vuelos disponibles son: "<<endl<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 1: 16:20 "<<puerto1<<" - 23:00 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 2: 20:00 "<<puerto1<<" - 02:40 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;		
		cout<<" Vuelo 3: 21:10 "<<puerto1<<" - 03:50 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 4: 04:50 "<<puerto1<<" - 11:30 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 5: 06:00 "<<puerto1<<" - 12:40 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 6: 09:00 "<<puerto1<<" - 15:40 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 7: 14:10 "<<puerto1<<" - 20:50 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl;
		cout<<" Vuelo 8: 13:00 "<<puerto1<<" - 19:40 "<<puerto2<<endl;
		cout<<"____________________________________________________________________________ "<<endl<<endl;
		
		cout<<"\nSeleccione el vuelo que desea tomar: "; getline(cin, vuelo);
		validavuelo();
		system("cls");
		avioncito2();		
		cout<<"PRECIOS:"<<endl;
		cout<<"\n\tAdultos: "<<endl;
		cout<<"\n\t\tClase economica: 3000k"<<endl;
		cout<<"\n\t\tClase media: 3500k"<<endl;
		cout<<"\n\t\tClase premium: 4000k"<<endl;
		cout<<"\n\n\tNiños: "<<endl;
		cout<<"\n\t\tClase economica: 2800k"<<endl;
		cout<<"\n\t\tClase media: 3300k"<<endl;
		cout<<"\n\t\tClase premium: 3800k"<<endl;
		cout<<"\n\t1. Economica\n\t2. Media\n\t3. Primera"<<endl;
		cout<<"\nSeleccione la clase que desaa tomar: "; getline(cin, clase);
		
		if(clase =="1"){
				
			precioadulto=3000;
			precioninja=2800;
			asientosmin = 1;
			asientomax = 96;		
		}
		else if(clase =="2"){	
				
			precioadulto=3500;
			precioninja=3300;
			asientosmin = 97;
			asientomax = 144;
		}
		else if(clase =="3"){
			
			precioadulto=4000;
			precioninja=3800;
			asientosmin = 145;
			asientomax = 165;					
	    }
		
				
	}
	
	
	string nombreadulto[100];
	string nombreninja[100];
	
//--------------------------------------------------------------------------------------------------------
	char adultoss[100];
	cout<<"\n¿Cuantos adultos desean viajar? "; cin.getline(adultoss, 100);
	
	strcpy(cadena, adultoss);
	mandato = "\n¿Cuantos adultos desean viajar? ";
	validanumeros();
	strcpy(cadena, "");
	adultos = numerocadena;
	
	for(int i =0; i<adultos; i++){
		
		cout<<"\nDigite el nombre de un adulto: "; getline(cin,nombreadulto[i]);		
	}
	char ninjass[100];
	
	cout<<"\n¿Cuanto niños van a viajar? "; cin.getline(ninjass, 100);
	
	strcpy(cadena, ninjass);
	mandato = "\n¿Cuantos niños desean viajar? ";
	validanumeros();
	
	ninjas = numerocadena;
	strcpy(cadena, "");
	for(int i =0; i<ninjas; i++){
		
		cout<<"\nDigite el nombre de un niño: "; getline(cin,nombreninja[i]);		
	}
	
	char asientoo[100];
	
	
	
	cout<<"\n¿Cuales asientos desea tomar?"<<endl;
	cout<<"\nNOTA: si elije un numero a partir de este es que se seleccionaran los demas."<<endl;
	cout<<"Ejemplo: si elije el asiento 1 y compra 5 boletos, se le dara los asientos 1, 2, 3, 4 y 5."<<endl;
	cout<<"---------> "; cin.getline(asientoo, 100);
	
	strcpy(cadena,asientoo);
	mandato="\n¿Cuales asientos desea tomar?";
	validanumeros();
	asiento = numerocadena;
		
	asientomax = asientomax-(adultos+ninjas);
	
	while(asiento < asientosmin || asiento > asientomax){
	
		cout<<"Esos asientos no corresponden a la clase elegida!\nElija otra vez."<<endl;	
		cout<<"\n¿Cuales asientos desea tomar?"<<endl;
		cout<<"---------> "; cin.getline(asientoo, 100);
		strcpy(cadena,asientoo);
		mandato="\n¿Cuales asientos desea tomar?";
		validanumeros();
		asiento = numerocadena;				
	}
	
	system("pause");
	membrete();

//---------------------------------------------------------------------------------------------------------------------
	cout<<"		. - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . -"<<endl;
	cout<<"		:A nombre de: "<<nombre<<" "<<apellido<<"\n\t\t:Telefono: "<<tel<<endl;
	cout<<"		. - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . -"<<endl;

	int i;
	
	for(i = 0; i<adultos; i++){
		
	cout<<"			 ___________                                                             ____________"<<endl;
	cout<<"			|  _________|                                                           |__________  |"<<endl;
	cout<<"			| |                                                                                | |"<<endl;
	cout<<"			|_|   ________                                                                     |_|"<<endl;
	cout<<"			     |  oooo  |   BOLETO: "<<i+1<<".                                                  "<<endl;
	cout<<"			     | oooooo |   Edad: ADULTO.                                                       "<<endl;
	cout<<"			     | oooooo |   Precio: "<<precioadulto<<"$.                                        "<<endl;
	cout<<"			     |  oooo  |   Vuelo: "<<vuelo<<".                                                 "<<endl;
	cout<<"			     |__/  \\__|   Desde: "<<puerto1<<" hacia "<<puerto2<<".                          "<<endl;
	cout<<"			                  Asiento: "<<asiento+i<<"                                            "<<endl;
	cout<<"			                  Nombre:"<<nombreadulto[i]<<"                                        "<<endl;
	cout<<"			                  Fecha: "<<dia1<<"/"<<mes1<<"/2019-"<<dia2<<"/"<<mes1<<"/2019                    "<<endl;
	cout<<"			 _                                                                                  _ "<<endl;
	cout<<"			| |                                                                                | |"<<endl;
	cout<<"			| |_________                                                             __________| |"<<endl;
	cout<<"			|___________|                                                           |____________|"<<endl<<endl;

	
	precio+=precioadulto;
		
	}
	
	
	int e;
	for(e = 0; e<ninjas; e++){
		
			
		cout<<"			 ___________                                                             ____________"<<endl;
		cout<<"			|  _________|                                                           |__________  |"<<endl;
		cout<<"			| |                                                                                | |"<<endl;
		cout<<"			|_|   ________                                                                     |_|"<<endl;
		cout<<"			     |  oooo  |   BOLETO: "<<e+1+i<<".                                                    "<<endl;
		cout<<"			     | oooooo |   Edad: MENOR.                                                       "<<endl;
		cout<<"			     | oooooo |   Precio: "<<precioninja<<"$.                                        "<<endl;
		cout<<"			     |  oooo  |   Vuelo: "<<vuelo<<".                                                 "<<endl;
		cout<<"			     |__/  \\__|   Desde: "<<puerto1<<" hacia "<<puerto2<<".                           "<<endl;
		cout<<"			                  Asiento: "<<e+asiento+i<<"                                                 "<<endl;
		cout<<"			                  Nombre: "<<nombreninja[e]<<"                                                                    "<<endl;
		cout<<"			                  Fecha: "<<dia1<<"/"<<mes1<<"/2019-"<<dia2<<"/"<<mes1<<"/2019                    "<<endl;
		cout<<"			 _                                                                                  _ "<<endl;
		cout<<"			| |                                                                                | |"<<endl;
		cout<<"			| |_________                                                             __________| |"<<endl;
		cout<<"			|___________|                                                           |____________|"<<endl<<endl;
	
		precio+=precioninja;
		
		
	}

//---------------------------------------------------------------------------------------------------------------------
	
	cout<<"\n\nEs UNA maleta por persona, desea pagar una maleta extra?(45$)"<<endl;
	 
	int maletas = adultos+ninjas, maletasextra=0; 
	string opcmale;
	cout<<"1. No\n2. Si\n---------> "; getline(cin,opcmale);
	
	while(opcmale != "1" && opcmale != "2"){
		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
		cout<<"Ingrese solo las opciones especificadas >:v"<<endl;
		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
		cout<<"1. No\n2. Si\n---------> "; getline(cin,opcmale);		
	}
	
	int numerisho;
	char maletasextraa[100];	
	if(opcmale == "2"){
	
		cout<<"Cuantas maletas extra desea pagar?: "<<endl;
		cout<<"---------> "; cin.getline(maletasextraa, 100);
		
		strcpy(cadena, maletasextraa);
		mandato="Cuantas maletas extra desea pagar?: ";
		validanumeros();
		
		maletasextra = numerocadena;
				
		numerisho = maletasextra;
		
		while(numerisho != 0){	
				
			precio = precio + 45;
			numerisho = numerisho - 1;		
		}
	
	}
	else if(opcmale == "1"){		
		
	}
	
	maletas += maletasextra; 
	
	system("pause");
	
	membrete();
	cout<<"\nVa a pagar: "<<maletas<<" maletas."<<endl;
	cout<<"\nSu precio total a pagar es de: "<<precio<<".00 $"<<endl;
	
	
		
	cout<<"	  \\----------------------------------\\                                      "<<endl;
	cout<<"	   \\                                  \\        __                           "<<endl;
	cout<<"	    \\                                  \\       | \\                         "<<endl;
	cout<<"	     >  Gracias por viajar con nosotros >------|  \\       ______             "<<endl; 
	cout<<"	    /                                  /       --- \\_____/**|_|_\____  |     "<<endl;
	cout<<"	   /                                  /          \\_______ --------- __>-}    "<<endl;  
	cout<<"	  /----------------------------------/              /  \\_____|_____/   |     "<<endl;
	cout<<"	                                                    *         |               "<<endl; 
	cout<<"	                                                             {O}              "<<endl;
	cout<<"	                                                                              "<<endl;
	cout<<"	       /*\\       /*\\       /*\\       /*\\       /*\\       /*\\       /*\\ "<<endl;
	cout<<"	      |***|     |***|     |***|     |***|     |***|     |***|     |***|       "<<endl; 
	cout<<"	       \\*/       \\*/ ____  \\*/       \\*/       \\*/       \\*/       \\*/ "<<endl;
	cout<<"	        |         |  |  |   |         |         |         |         |         "<<endl; 
	cout<<"	  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^     "<<endl;
	cout<<"   		                                                                      "<<endl;
	
	//bloc de notas	 
	ofstream archivo;
	
	archivo.open("registrar.txt");
	
	archivo<<"		. - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . -"<<endl;
	archivo<<"		:A nombre de: "<<nombre<<" "<<apellido<<"\n\t\t:Telefono: "<<tel<<endl;
	archivo<<"		. - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . -"<<endl;

	
	
	for(i = 0; i<adultos; i++){
		
	archivo<<"			 ___________                                                             ____________"<<endl;
	archivo<<"			|  _________|                                                           |__________  |"<<endl;
	archivo<<"			| |                                                                                | |"<<endl;
	archivo<<"			|_|   ________                                                                     |_|"<<endl;
	archivo<<"			     |  oooo  |   BOLETO: "<<i+1<<".                                                  "<<endl;
	archivo<<"			     | oooooo |   Edad: ADULTO.                                                       "<<endl;
	archivo<<"			     | oooooo |   Precio: "<<precioadulto<<"$.                                        "<<endl;
	archivo<<"			     |  oooo  |   Vuelo: "<<vuelo<<".                                                 "<<endl;
	archivo<<"			     |__/  \\__|   Desde: "<<puerto1<<" hacia "<<puerto2<<".                          "<<endl;
	archivo<<"			                  Asiento: "<<asiento+i<<"                                            "<<endl;
	archivo<<"			                  Nombre:"<<nombreadulto[i]<<"                                        "<<endl;
	archivo<<"			                  Fecha: "<<dia1<<"/"<<mes1<<"/2019-"<<dia2<<"/"<<mes1<<"/2019                    "<<endl;
	archivo<<"			 _                                                                                  _ "<<endl;
	archivo<<"			| |                                                                                | |"<<endl;
	archivo<<"			| |_________                                                             __________| |"<<endl;
	archivo<<"			|___________|                                                           |____________|"<<endl<<endl;

	
	
		
	}
	
	
	
	for(e = 0; e<ninjas; e++){
		
			
		archivo<<"			 ___________                                                             ____________"<<endl;
		archivo<<"			|  _________|                                                           |__________  |"<<endl;
		archivo<<"			| |                                                                                | |"<<endl;
		archivo<<"			|_|   ________                                                                     |_|"<<endl;
		archivo<<"			     |  oooo  |   BOLETO: "<<e+1+i<<".                                                    "<<endl;
		archivo<<"			     | oooooo |   Edad: MENOR.                                                       "<<endl;
		archivo<<"			     | oooooo |   Precio: "<<precioninja<<"$.                                        "<<endl;
		archivo<<"			     |  oooo  |   Vuelo: "<<vuelo<<".                                                 "<<endl;
		archivo<<"			     |__/  \\__|   Desde: "<<puerto1<<" hacia "<<puerto2<<".                           "<<endl;
		archivo<<"			                  Asiento: "<<e+asiento+i<<"                                                 "<<endl;
		archivo<<"			                  Nombre: "<<nombreninja[e]<<"                                                                    "<<endl;
		archivo<<"			                  Fecha: "<<dia1<<"/"<<mes1<<"/2019-"<<dia2<<"/"<<mes1<<"/2019                    "<<endl;
		archivo<<"			 _                                                                                  _ "<<endl;
		archivo<<"			| |                                                                                | |"<<endl;
		archivo<<"			| |_________                                                             __________| |"<<endl;
		archivo<<"			|___________|                                                           |____________|"<<endl<<endl;
	
		
		
		
	}

	archivo<<"\nVa a pagar: "<<maletas<<"maletas."<<endl;	
	archivo<<"\nSu precio total a pagar es de: "<<precio<<".00 $"<<endl;
	
	salir();
	return main();
	
}
