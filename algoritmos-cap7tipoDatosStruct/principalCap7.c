#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main (){

	long nroFactura;
	int dia;
	double monto;
	char codCliente[5];

	double acumDia[31];
	inicializarArray(acumDia);

	printf("\n1Ingrese facturacion: ");
	scanf("%ld %d %lf %s", &nroFactura, &dia, &monto, codCliente);

	while(nroFactura != 0){
		acumDia[dia-1]+=monto;
		printf("\n2Ingrese facturacion: ");
		scanf("%ld %d %lf %s", &nroFactura, &dia, &monto, codCliente);
	}

	mostrarTotales(acumDia);//Total facturado por dia
	diaMayorFacturacion(acumDia);

	return 0;
}
