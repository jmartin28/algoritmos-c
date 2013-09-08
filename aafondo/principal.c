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


	 int dinero;

	 printf("\nIngrese cantidad dinero: ");
	 scanf("%d", &dinero);

	 procesarBilletes(&dinero, 100);
	 procesarBilletes(&dinero, 50);
	 procesarBilletes(&dinero, 20);
	 procesarBilletes(&dinero, 10);
	 procesarBilletes(&dinero, 5);
	 procesarBilletes(&dinero, 2);
	 procesarBilletes(&dinero, 1);

	 return 0;
 }
