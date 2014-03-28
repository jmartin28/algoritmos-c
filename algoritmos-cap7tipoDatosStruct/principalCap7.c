#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main (){

	int arr[50];
	int len = 0;

	agregar(arr, &len, 40);
	agregar(arr, &len, 50);
	agregar(arr, &len, 60);

	printf("\nPosicion es: %d", buscar(arr, len, 40));
	printf("\nPosicion es: %d", buscar(arr, len, 50));
	printf("\nPosicion es: %d", buscar(arr, len, 60));


	return 0;
}
