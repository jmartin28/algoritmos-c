/*
 * principal.c
 *
 *  Created on: 16/09/2013
 *      Author: Usuario
 */

#include <stdio.h>

int main (){

//	char x [20] = " juan carlos";
//
//	char y [20];
//
//	copiarCadena(y, "Pablo");
//
//	printf("el valor de Y es: %s", y);

//	char nom[15];
//	copiarCadena(nom, "Juan");
//
//	printf("La longitud de la cadena es: %d",  longitud(nom));
//	fflush(stdin);

//	char a[20]={'\0'};
//
//	if(esVacia(a)){
//		printf("Cadena es vacia");
//	}else{
//		printf("Cadena NO es Vacia");
//	}

//	char x[10]="Hola";
//	char y[10]="q tal";
//
//	concatenarCadena(x,y);
//
//	printf("%s", x);

	char a[20]="za";
	char b[20]="zb";

	int resul = compararCadenas(a,b);

	if(resul > 0) {
		printf("A es mayor");
	}else if(resul < 0){
		printf("B es mayor");
	}else if(resul == 0){
		printf("Iguales");
	}


	return 0;
}
