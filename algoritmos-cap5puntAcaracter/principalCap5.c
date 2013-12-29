
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void procesarBilletes(int*, int);

int main(){



//	char x[10]="hola que tal";
//	char y[10]="hola";
//	int verofalso = esPrefijo(x,y);
//
//	printf("%n", verofalso);


//	char* a = obteberSaludo();
//
//	printf("%s", a);


//	char a[20]="esto es una cadena";
//
//	char* b = substring(a,5,10);
//
//	printf("%s", b);

//	char* a=" hola";
//
//	char* b = ltrim(a);

//	char* c = "hola  ";
//	char* d = rtrim(c);

//	char* z = "  buenas  ";
//	trim(z);
//	printf("%s", trim(z));

//	char s[] = "Juan|Marcos|Carlos|Matias";
//
//	char* tok = strtok(s, "|");
//
//	while (tok!=NULL){
//		//NULL de stdio.h representa el valor de una dirección de memoria nula
//		printf("%s \n", tok);
//
//		//llamadas subsiguientes
//		tok = strtok(NULL, "|");
//
//	}


	/********************TOKEN***********************/
	int billete = 355;
	char denominaciones[] = "100|50|20|10|5|2|1";

	char* tok = strtok(denominaciones, "|");//"TOKENIZAR"

	while(tok != NULL){

		int n = atoi(tok);
		procesarBilletes(&billete, n);
		tok = strtok(NULL, "|");
	}
	return 0;
}
void procesarBilletes(int* v, int denom){
	int cant = *v /denom;
	*v = *v % denom;
	printf("%d billetes de $%d\n", cant, denom);
}
