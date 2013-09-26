/*
 * 4.4.2.4.c
 *
 *  Created on: 19/09/2013
 *      Author: Usuario
 */

/*
 * CONCATENAR CADENAS (función concatenarCadena)
 *
 *recibe los parametros char t[] y char s[] y
  agrega los caracteres de s al final del ultimo caracter
 *de t
 */
void concatenarCadena(char t[], char s[]){

	int i=0;
	int j=0;

	j=longitud(t);

	while (s[i]!='\0'){

		 t[j]=s[i];
		 i++;
		 j++;

	}
}
