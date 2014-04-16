/*
 * 7.4.4_Buscar_y_Agregar.c
 *
 *  Created on: 16/03/2014
 *      Author: juan.martin.ruiz@gmail.com
 */

/*
Esta operación es una combinación de las dos
anteriores .La idea es buscar un elemento en un array
y retornar la posición donde se encontró o bien
agregarlo al final en caso de no haberlo encontrado.

Encabezado:
int buscarYagregar(int a[], int* len, int v, int* enc)

 */
int buscarYagregar(int a[], int* len, int v, int* enc){
	*enc  = buscar(a, len, v);//mi implementación
	return *enc == 1 ? *enc : agregar(a, len, v);
//	int post = buscar(a, len, v); libro Algoritmos a fondo
//	  if(post >= 0){
//	 		*enc = 1;
//	  }else{
//	  		*enc = 0;
//	  		post = agregar(a, &len, v);
//	  }
//	  return post;
}
