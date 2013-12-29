#import <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main (){
	long nroFactura;
	int dia;
	double importe;
	char codCliente[5];

	int acumDia[31];

	while(nroFactura != 0){
		printf("Ingrese nroFactura, dia, importe y codCliente: ");

		scanf("%l %d %f %s", &nroFactura, &dia, &importe, &codCliente);
		acumDia[dia-1] += importe;
	}

	int i;
	for(i=0;i<acumDia;i++){

		printf("Se facturo el dia %d la suma de: %d ", acumDia[i]);

	}




	return 0;
}
