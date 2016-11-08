#include <stdio.h>

int main(){

	char a[20] = {0};
	int i=19;
	
	printf("Ingrese una string: ");
	scanf("%s", a);
	for(i; i >= 0; i --){
		printf("%c", a[i]);
	}
	return 0;
}
	
