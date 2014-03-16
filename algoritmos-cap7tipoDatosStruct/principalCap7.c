#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main (){

	int arr[50];
	int len = 0;

	agregar(arr, &len, 10);
	agregar(arr, &len, 20);
	agregar(arr, &len, 30);
	agregar(arr, &len, 40);

	int i;
	for(i=0; i<len ;i++){
		printf("\n%d", arr[i]);
	}


	return 0;
}
