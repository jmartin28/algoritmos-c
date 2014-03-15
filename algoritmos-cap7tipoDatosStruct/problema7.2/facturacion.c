/*
 * facturacion.c
 *
 *  Created on: 09/03/2014
 *      Author: JMR
 */

#include <stdio.h>

/*Problema 7.2
Se tiene una tabla que detalla la facturacion emitida por
un comercio durante el periodo de un mes, con el siguiente
formato:
	nroFactura (entero 8 digitos)
	dia (entero entre 1 y 31)
	importe (numero real)
	codCliente (alfanumerico, 5 caracteres)

Los datos no necesariamente estan ordenados y puede haber
mas de una factura emitida en un mismo dia. Finaliza cuando
se ingresa un nroFactura igual a cero.

Se pide determinar e informar:
	1-Total facturado por dia, solo para aquellos dias en los
	que hubo facturación.
	2-Dia de mayor facturacion (sera unico) y monto total
	facturado ese dia
*/

void inicializarArray(double arr[]){
	int i;
	for(i=0; i<31; i++){
		arr[i]=0;
	}
}
void mostrarTotales(double arr[]){
	int i;
	for(i=0; i<31 ; i++ ){
		if(arr[i]>0){
			printf("\nTotal facturado el dia %d: $%lf", i+1, arr[i]);
		}
	}
}
void diaMayorFacturacion(double arr[]){
	int i, dia;
	double mayor = 0;
	for(i=0; i<31; i++){
		if(arr[i] > mayor){
			mayor = arr[i];
			dia = i+1;
		}
	}
	printf("\nEl dia de mayor facturacion fue el %d: $%lf", dia, mayor);
}
