
#include<stdio.h>

using namespace std;

int main(){
	

	int i, suma=0;
	
	for(i=1;i<=100;i++){
		
		if(i%2==0){
		
		suma += i;
		
		}
		
	}
	
	printf("\n La suma de los pares es: %i",suma);
	
	return 0;
	
}
