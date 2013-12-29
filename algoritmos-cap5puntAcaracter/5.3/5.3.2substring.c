/*Dada la cadena definida:
 * char a[]= "Esto es una cadena";
 * Llamamos SUBCADENA a todo subconjunto de sus caracteres siempre cuando
 * estos sean consecutivos y mantengan el orden original.
 *
 * Por ejemplo: "esto es", "una cadena", "es", "a cad", "Est", "dena",  "es una",
 * "Esto es una cadena" y "" son algunas de las subcadenas que podemos obtener
 * a partir de A. Todos los prefijos y sufijos de una cadena son tambien subcadenas
 * de esta.
 *
 *Desarrollaremos una función SUBSTRING que recibirá una cadena y dos enteros
 *indicando las posiciones DESDE y HASTA (esta última será "no inclusive")
 *y retornará la subcadena compuesta por los caracteres comprendidos entre
 *dichas posiciones de la cadena original.
 *
 *
 *Por ejemplo:
 *	substring("Esto es una cadena", 0,4);
 *	substring("Esto es una cadena", 8,11);
 */


#include <stdlib.h>

char* substring(char* s, int desde, int hasta){

	int n = hasta-desde;
	char* ret = (char*) malloc(n+1);

	int j=0, i;
	for (i=desde; i<hasta; i++){
		ret[i]=s[i];
		j++;
	}
	ret[j]='\0';
	return ret;
}
