#include <stdio.h>

int main(){

	char a[100], c;
	int i=0,cont=0;
	
	printf("Ingrese una string: ");
	scanf("%s", a);
	printf("Ingrese el caracter a buscar: ");
	scanf(" %c", &c);
	for(;i<100;i++){
		if(a[i] == c){
			cont ++;
		}
	 }
	 printf("%d", cont);
	 return 0;
}
