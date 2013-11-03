/*
 * 4.4.2.5.c
 *  Created on: 21/09/2013
 *      Author: Usuario
 */

/*
 * Comparar cadenas (función comapararCadenas)
 *
 *determinar si una cadena es alfabeticamente
 *mayor, menor o igual que otra tenemos que
 * comparar uno a uno sus caracteres
 *
 * */

int compararCadenas(char a[], char b[]){

	int i=0;

	while(a[i]!='\0' && b[i]!='\0' && a[i]==b[i]){
		i+=1;
	}

	return a[i]-b[i];
}
