/*
 * 4.2.2.5.c
 *
 *  Created on: 14/09/2013
 *      Author: Usuario
 */

//Convertir un caracter a may�scula (funci�n aMayuscula)

char aMayuscula(char c){
	return esMinuscula(c)? c - 'a'+'A': c;
}
