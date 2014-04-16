#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main (){

	int arr[50];
	int len = 0;
	int enc = 0;

	printf("\nPosicion es: %d", buscarYagregar(arr, &len, 40, &enc));
	printf("\nPosicion es: %d", buscarYagregar(arr, &len, 50, &enc));
	printf("\nPosicion es: %d", buscarYagregar(arr, &len, 60, &enc));


	return 0;
}
