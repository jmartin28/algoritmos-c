/*Como ya desarrollamos las funciones ltrim y rtrim para eliminar espacios
 * ubicados a izquierda y a derecha de una cadena podemos pensar ahora en
 * desarrollar la funcion trim para que retorne una cadena identica a la que
 * reciba como parametro, pero sin espacios en blanco en sus extremos. Esta funcion
 * se programa facilmente retornando el ltrim(rtrim(s)) siendo s la cadena que
 * recibe como parametro.
 * */

char* trim(char* s){

	return ltrim(rtrim(s));

}
