/*
 * 4.4.2.1.c
 *
 *  Created on: 16/09/2013
 *      Author: Usuario
 */

/*Asignar o copiar una cadena a un char[]
(función copiarCadena)
El objetivo sera asignar uno a uno los caracteres de
s en los caracteres de t. La capacidad de t debe ser
mayor o igual a la longitud de s mas 1.
*/


//Version Compacta
void copiarCadena(char* t,char* s){
	while(*t++=*s++);
}
