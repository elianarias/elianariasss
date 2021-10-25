#include <stdio.h>
#include <stdlib.h>


int main(){
	int precio=0;
	int descuento=0;
	int pfinal=0;



	printf("Ingrese el precio: ");
	scanf("%d", &precio);
	printf("Ingrese el descuento: ");
	scanf("%d", &descuento);

	pfinal = precio - ((descuento * precio) / 100);
	printf("El precio final con descuento es: %d", pfinal);


	return 0;
	}
