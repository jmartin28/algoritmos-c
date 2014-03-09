
#include <stdio.h>
/*ACCESO DIRECTO SOBRE ARRAYS
 * Cuando trabajamos con conjuntos numericos, acotados,
 * consecutivos y "razonablemente" pequeños podemos utilizar
 * los elementos del conjunto como indice de acceso al array
 * y asi, establecer una relacion unívoca entre estos elementos
 * y las variables del array.
 *
 * Problema 7.1
 * Dado un conjunto de números enteros mayores o iguales
 * a 0 y menores que 100 determinar e informar cuantas
 * veces aparece cada uno. El conjunto finaliza con la llegada
 * de un valor negativo.
 *
 * */
void inicializarContadores(int a[]){
	int i;
	for(i=0;i<100;i++){
		a[i]=0;
	}
}
void mostrarResultados(int a[]){
	int i;
	for (i=0; i<100; i++){
		if(a[i]>0){
			printf("\n%d aparece %d veces \n", i, a[i]);
		}
	}
}
