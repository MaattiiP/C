#include <stdio.h>


int main(){

	char a[3] = {0}, b[4];
	int i=3,o, cont=0;
	
	printf("Ingrese una string: ");
	scanf("%s", a);
	
	for(o=0; o<4; i--,o++){
		b[o] = a[i];
	}
	b[o] = '\0';
	printf("%s", b);
	for(i=0;i<4; i++){
		for(o=0; o < 4; o++){
			if(a[i] == b[o]){
				cont ++;
			}
		}
	}
	if(cont == 4){
		printf("Capicua");
	}
	else {
		printf("No capicua");
	}
	return 0;
}

