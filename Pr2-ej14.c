#include <stdio.h>

int mayor(int array[]){
	int m, numMay=0;
	for(m=1; m<100;m++){
		if (array[m] > 0){
			if (array[m] > array[numMay]){
				numMay = m;
				}
			}
		}
	return numMay;
}
int main (){
	int numIn, neg, a[100], i;
	
	for(i = 0; i< 100; i++){
		a[i] = 0;
	}
	
	printf("Ingrese números positivos, uno negativo para parar:\n");	
	scanf("%d", &numIn);
	
	while(numIn > 0){
		if (numIn < 100){
			a[numIn] ++;
	}
		printf("Ingrese un nro: ");
		scanf("%d", &numIn);
	}
	printf("El numero mas ingresado es %d", mayor(a));
	return 0;
}

	
