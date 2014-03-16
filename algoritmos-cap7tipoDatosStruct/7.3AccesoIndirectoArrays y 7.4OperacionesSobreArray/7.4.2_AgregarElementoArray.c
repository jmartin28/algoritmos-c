/*
 * 7.4.2_AgregarElementoArray.c
 *
 *  Created on: 16/03/2014
 *      Author: JMR
 */


/*
 Esta operaci�n permite agregar un elemento sobre en
 la primera posicion libre del array. Es decir, al
 final.
 Si el array esta vacio entonces su longitud (len o length)
 ser� cero y este valor coincidir� con la posicion
 en la que el elemento debe ser agregado. Luego de
 esto tendremos que incrementar length (len) ya que la
 longitud del array pasar� a ser 1.
 Desarrollaremos la funci�n agregar() con el siguiente
 encabezado:
	 int agregar(int a[], int* len, int v)
 Donde a[] es el array en cuya primer posici�n libre
 asignaremos el valor v.
 La funcion retornar� la posici�n en la que se agreg�
 a v, que siempre coincidir� con el valor de len-1, e
 incrementar� el valor de len ya que al agregar un nuevo
 elemento al array su longitud debe ser incrementada.
 */
int agregar(int a[], int* len, int v){
	a[(*len)++]=v;
	return *len-1;
}
