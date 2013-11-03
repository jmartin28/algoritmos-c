/*
 * La funcion malloc() permite direccionar n bytes consecutivos de memoria
 * siendo n un entero que le pasamos como argumento.
 * La memoria que gestionamos con malloc permanece asignada durante toda
 * la ejecucion del programa y trasciende a la funcion que la invocó.
 * */

#include <stdlib.h> // para función malloc()
#include <string.h>

/*En esta implementacion de obtenerSaludo invocamos a la funcion malloc() para crear
 * dinamicamente un char[] de n+1 caracteres, donde n es la longitud de la cadena
 * que queremos retornar mas 1 para el caracter '\0'
 * */
char* obteberSaludo(){

	char a[]= "hola gente";

	int n = strlen(a);

	char* r = (char*) malloc(n+1);

	strcpy(r, a);

	return r;

}
