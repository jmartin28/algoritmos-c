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


int compararCadenas(char t[], char s[]){

	int i=0;
	int j=0;
	int igualdad;

	while(t[i] != '\0' && s[j] != '\0'){

		if(t[i] > s[j]){
			igualdad = 1;
		}else if(t[i] < s[j]){
			igualdad = -1;
		}else{
			igualdad = 0;
		}

		i++;
		j++;
	}
	return igualdad;
}
