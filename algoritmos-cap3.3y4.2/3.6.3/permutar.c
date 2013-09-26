/*
 * permutar.c
 *
 *  Created on: 01/09/2013
 *      Author: Usuario
 */
#include <stdio.h>

void permutar(int* x, int* y){
	 int aux = *x;
	 *x = *y ;
	 *y = aux;

	 printf("\nlos valores dentro de la funcion permutar son: %d y %d", *x,*y);
 }
