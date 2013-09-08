/*
 * fecha3.3.c
 *
 *  Created on: 07/09/2013
 *      Author: Usuario
 */

/*Se dispone de un conjunto de valores que representan
 *fechas expresadas como numeros enteros de 8 digitos
 *con formato aaaammdd.
 *
 *Se pide informar:
 *1) cuantas fechas corresponden al mes de marzo?
 *2) cuantas fechas corresponden a años bisiestos?
 *3) Verificar que si una fecha el dia es 29 y el mes
 *es 2 entonces que el año sea bisiesto.
 *En caso contrario, mostrar un mje de error e informar, al
 *final del proceso, la cantidad de veces que
 *se registraron errores de este tipo   */

void dividirFecha(long f, int* d , int* m, int* a){

	int res;

	*a=f/10000;

	res=f%10000;

	*m=res/100;

	*d=res%100;

}
int esAnioBisiesto(int a){
	int boolean = 0;
	if((a%4==0) && (!a%100==0) || (a%400==0)){
		boolean=1;

	}else{
		boolean=0;
	}
	return boolean;

}

