#include <stdio.h>

int main(){

	char a[20], c;
	int i=0;
	
	printf("Ingrese una string: ");
	scanf("%s", a);
	printf("Ingrese el caracter a buscar: ");
	scanf(" %c", &c);
	
	while(a[i] != '\0'){	
		printf("%c\n", a[i]);
		if (a[i] == c){
			printf("if: ");
			printf("%c\n", a[i]);
			printf("0");
			return 0;
		}
		i ++;
	}
	printf("1");
	return 1;
}
