#include <string.h>
#include <stdio.h>

struct unContacto{
	char nombre[30];
	char apellido[30];
	char direccion[35];
	int edad;
	char mail[30];
};

void muestralistadecontactos(struct unContacto listadecontactos[], int longitud){
	int i=0;
	for( ; i<longitud; i++){
		printf("Los datos del conctacto %d son: ", i+1);
		printf("\n nombre: %s \n apellido: %s \n direccion: %s \n edad: %d \n mail: %s \n", listadecontactos[i].nombre, listadecontactos[i].apellido,
		listadecontactos[i].direccion, listadecontactos[i].edad, listadecontactos[i].mail);
	}
}

struct unContacto ingreseContacto(){
	struct unContacto temp;
	printf("Ingrese el nombre del contacto: ");
	gets(temp.nombre);
	printf("Ingrese el apellido del contacto: ");
	gets(temp.apellido);
	printf("Ingrese la direccion del contacto: ");
	gets(temp.direccion);
	printf("Ingrese la edad del contacto: ");
	scanf("%d",&temp.edad);
	printf("Ingrese el mail del contacto: ");
	gets(temp.mail);
	return temp;
}

	
int main(){
	struct unContacto listadecontactos[5];
	int i = 0;
	char c;
	for ( ; i <5 ; i ++){
		printf("Ingrese el nombre del contacto %d : ", i+1);
		gets(listadecontactos[i].nombre);
		printf("Ingrese el apellido del contacto: ");
		gets(listadecontactos[i].apellido);
		printf("Ingrese la direccion del contacto: ");
		gets(listadecontactos[i].direccion);
		printf("Ingrese el mail del contacto: ");
		gets(listadecontactos[i].mail);
		printf("Ingrese la edad del contacto: ");
		scanf("%d", &listadecontactos[i].edad);
		scanf("%c", &c);
		}
	for ( ; i <5 ; i ++){
		listadecontactos[i]=ingreseContacto();
		}
	muestralistadecontactos(
		listadecontactos, 5);
		return 1;
	}
