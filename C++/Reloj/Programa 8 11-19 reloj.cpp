#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<iostream>

using namespace std;

main(){
	
int hora, minuto, segundo;

	for(hora=0;hora<24;hora++){
	
		for(minuto=0;minuto<60;minuto++){
		
			for(segundo=0;segundo<60; segundo++){
				
				printf("\n");
				cout<<hora<<":"<<minuto<<":"<<segundo;
				Sleep(1000);
			}
		
		
		}
	
	
	
	}

return 0;	
}
