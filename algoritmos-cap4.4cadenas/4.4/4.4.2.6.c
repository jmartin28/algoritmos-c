/*
 * 4.4.2.6.c
 *
 *  Created on: 28/09/2013
 *      Author: Usuario
 */

/*
 * CONVERTIR CADENAS A NUMEROS ENTEROS (función cadenaAEntero)
 *
 *
 *
 * */

#include <math.h>

long cadenaAEntero(char s[]){

	int i=0;

	double num;

	int longit = longitud(s);

	for(int i=0; s[i] != '\0'; i++){

		num += pow(10, longit - i -1) * s[i]-'\0';
	}

	return num;
}
