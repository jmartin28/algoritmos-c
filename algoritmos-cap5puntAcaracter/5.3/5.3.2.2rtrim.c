/*Esta funcion es analoga a la anterior solo que debe retornar una cadena
 * sin espacios en blanco a la derecha.
 */

char* rtrim(char* s){

	int n = strlen(s)-1;

	int i = n;

	while(s[i]==" "){
		i--;
	}

	return substring(s,0,i+1);
}
