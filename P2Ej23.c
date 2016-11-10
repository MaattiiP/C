#include <stdio.h>

int longitudes(char cadena[]){
	int longitud = 0;
	while(cadena[longitud] != '\0'){
		longitud++;
	}
	return longitud;
}


int main(){
	
	char a[20], b[20];
	int i, cantidad_encontrada=0, longA, longB;
	
	printf("Ingrese la 1ra palabra: ");
	scanf("%s", a);
	printf("Ingrese la 2da palabra: ");
	scanf("%s", b);
	
	longA = longitudes(a);
	longB = longitudes(b);
	
	if (longA >= longB){
		for(i=0; i < longA; i++){
			while (b[cantidad_encontrada] == a[i+cantidad_encontrada] && cantidad_encontrada < longB){
				cantidad_encontrada++;
			}
			if (cantidad_encontrada == longB){
				printf("La palabra %s esta contenida en %s", b, a);
				return 1;
			} else {
				cantidad_encontrada = 0;
			}
		}
	}
	if (longB > longA){
		for(i=0; i < longB; i++){
			while (a[cantidad_encontrada] == b[i+cantidad_encontrada] && cantidad_encontrada < longA){
				cantidad_encontrada++;
			}
			if (cantidad_encontrada == longA){
				printf("La palabra '%s' esta contenida en %s", a, b);
				return 1;
			} 
			else {
				cantidad_encontrada = 0;
			}
		}
	}
		printf("La palabra '%s' no esta contenida en '%s'", b, a);
	return 0;
}
	
