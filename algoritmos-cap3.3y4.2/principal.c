/*
 * principal.c
 *
 *  Created on: 31/08/2013
 *      Author: Juan M Ruiz
 */
#include <stdio.h>

 int main(){

	/*****permutar******/
//	int a, b;
//	printf("ingrese dos valores: ");
//	scanf("%d %d", &a,&b);
//	permutar(&a,&b);
//	printf("\nlos valores son: %d y %d", a,b);

/***Se pide informar cual de las dos fechas es posterior***/
//	int d1, m1, a1, d2, m2, a2;//dia, mes, año
//	long f1, f2;
//
//	printf("Ingrese fecha 1: ");
//	scanf("%d %d %d", &d1, &m1, &a1);
//	printf("Ingrese fecha 2: ");
//	scanf("%d %d %d", &d2, &m2, &a2);
//
//	f1=unificarFecha(d1,m1,a1);
//	f2=unificarFecha(d2,m2,a2);
//
//	if(f1>f2) printf("La fecha posterior es: %ld", f1);
//	else printf("La fecha posterior es: %ld", f2);

//	 int contMarzo=0, contBisiesto=0, contBiError=0, dia, mes, anio;
//
//	 long n;
//
//	 do{
//		 printf("\nIngreser fecha (0 p/terminar): ");
//		 scanf("%ld", &n);
//
//		 dividirFecha(n, &dia, &mes, &anio);
//
//		 if(mes==3){
//			 contMarzo+=1;
//		 }
//		 if(esAnioBisiesto(anio)){
//			 contBisiesto+=1;
//		 }
//		 if(dia==29 && mes==2 && !esAnioBisiesto(anio)){
//			 contBiError+=1;
//		 }
//
//
//	}while(n!=0);
//
//	 printf("\nCantidad de meses de Marzo es: %d", contMarzo);
//	 printf("\nCantidad de anios bisiestos es: %d", contBisiesto);
//	 printf("\nCantidad de errores de anio bisiesto es: %d", contBiError);


//	 int dinero;
//
//	 printf("\nIngrese cantidad dinero: ");
//	 scanf("%d", &dinero);
//
//	 procesarBilletes(&dinero, 100);
//	 procesarBilletes(&dinero, 50);
//	 procesarBilletes(&dinero, 20);
//	 procesarBilletes(&dinero, 10);
//	 procesarBilletes(&dinero, 5);
//	 procesarBilletes(&dinero, 2);
//	 procesarBilletes(&dinero, 1);

	 /**Determinar si un caracter es un digito numerico**/
//	 char a;
//
//	 printf("Ingrese caracter para ver si es numero: ");
//	 scanf("%s", &a);
//
//	 if(esDigito(a)){
//		 printf("es numerico");
//	 }else{
//		 printf("es caracter");
//	 }

	 /**Determinar si un caracter es una letra (función esLetra)**/
//		 char a;
//
//	 	 printf("\nIngrese caracter para ver si es letra: ");
//	 	 scanf("%s", &a);
//
//	 	 if(esLetra(a)){
//	 		 printf("es letra");
//	 	 }else{
//	 		 printf("es numero");
//	 	 }

	 /**Determinar si un caracter es una letra mayuscula o minuscula**/

//			 char a;
//
//		 	 printf("\nIngrese caracter para ver si es mayúscula: ");
//		 	 scanf("%s", &a);
//
//		 	 if(esMayuscula(a)){
//		 		 printf("es mayúscula");
//		 	 }else if(esMinuscula(a)){
//		 		 printf("es minúscula");
//		 	 }

	 /********Convertir un caracter a minúscula***********/
//		 char a;
//
//		 printf("\nIngrese mayúscula para pasarlo\na minúscula: ");
//		 scanf("%s", &a);
//
//		 char b= aMinuscula(a);
//
//		 printf("\n%c", b);
	/********Convertir un caracter a mayúscula***********/
//		 char a;
//
//		 printf("\nIngrese minúscula para pasarlo\na mayúscula: ");
//		 scanf("%s", &a);
//
//		 char b	= aMayuscula(a);
//
//		 printf("\n%c", b);

	/********PONER A PRUEBA TODAS LAS FUNCIONES********/
	char c = 'A';

	printf("esDigito(%c) = %d\n ", c, esDigito(c));
	printf("esLetra(%c) = %d\n ", c, esLetra(c));
	printf("esMayuscula(%c) = %d\n ", c, esMayuscula(c));
	printf("esMinuscula(%c) = %d\n ", c, esMinuscula(c));

	printf("aMinuscula(%c) = %c\n ", c, aMinuscula(c));
	printf("aMayuscula(%c) = %c\n ", c, aMayuscula(c));

	return 0;
 }
