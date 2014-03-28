/*
 * 7.4.3_BusquedaSecuencial.c
 *
 *  Created on: 16/03/2014
 *      Author: JMR
 */

/*
 Esta operacion consiste en recorrer secuencialmente
 el array para determinar si esta contiene o no un
 determinado valor
 */
int buscar(int a[], int len, int v){
	int i=0;
	while(i<len && a[i]!=v){
		i++;
	}
	return i<len? i:-1;
	/*o for(i=0;i<len && a[i]!=v;i++);
	 * 	return i<len? i:-1;
	 * */
}
