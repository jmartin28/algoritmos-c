#include <stdint.h>
#include <stdlib.h>

int main (){

	int aCont[100], v; //v es el valor
	inicializarContadores(aCont);

	printf("1Ingresar valores: ");
	scanf("%d", &v);


	while(v >= 0){
		aCont[v]=aCont[v]+1;
		printf("2Ingresar valores: ");
		scanf("%d", &v);
	}
	mostrarResultados(aCont);


	return 0;
}
