/*DETERMINAR SI UNA CADENA ES PREFIJO DE OTRA(funci�n esPrefijo)
 *
 *la funcion esPrefijo recibira dos cadenas x y p, y retornar�
 *true o false seg�n p sea o no prefijo de x
 *
 * */

#include <string.h>

int esPrefijo(char* x, char* p){

		int len = strlen(p);

		return strncmp(x,p,len)==0;
}

int esSufijo(char* x, char* s){

	int desde = strlen(x) - strlen(s);


	return strcmp(s,x+desde)==0;

}
