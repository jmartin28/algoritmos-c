/*
 * 4.4.2.2.c
 *
 *  Created on: 17/09/2013
 *      Author: Usuario
 */

/*DETERMINAR LA LONGITUD DE LA CADENA (función longitud)
 *
 *recibe un char[] y retorna la longitud de
 *la cadena que lo contiene
 * */

int longitud(char s[]){

	int i=0;

	while(s[i]!='\0'){
		i+=1;
	}
	return i;
}
