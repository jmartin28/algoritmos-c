/*
 * 4.2.2.c
 *
 *  Created on: 09/09/2013
 *      Author: Usuario
 */

// Determinar si un caracter es un digito numerico (función esDigito)


int esDigito(char x){
	int boolean;
	if((x>='0') && (x<='9')){
		boolean = 1;
	}else{
		boolean = 0;
	}
	return boolean;
}
