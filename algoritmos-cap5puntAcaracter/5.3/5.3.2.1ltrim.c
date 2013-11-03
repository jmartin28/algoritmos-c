/*Definiremos una funcion ltrim cuyo objetivo será retornar una cadena
 * identica a la que reciba como parametro, pero sin espacios en blanco
 * a la izquierda. Por ejemplo:
 *
 * ltrim(" Hola") retorna "hola"
 * ltrim("Hola ") retorna "hola "
 *
 * */
#include <string.h>
#include <strings.h>

char* ltrim(char* s){

	int n = strlen(s);
	int i=0;
	while(s[i]==' '){
		i++;
	}
	return substring(s,i,n);

}
