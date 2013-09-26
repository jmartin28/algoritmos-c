/*
 * billetes.c
 *
 *  Created on: 07/09/2013
 *      Author: Usuario
 */
#include <stdio.h>

void procesarBilletes(int* v, int denom){

	int cant=*v/denom;
	*v = *v%denom;

	printf("\n%d billetes de %d", cant, denom);

}
