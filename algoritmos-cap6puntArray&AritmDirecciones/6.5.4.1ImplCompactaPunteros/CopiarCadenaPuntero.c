/*Como t y s son punteros al primer caracter entonces al incrementarlos pasar�n
 * a apuntar al car�cter siguiente.
 *
 *
 *
 *
 *
 * */


void copiarCadena(char* t, char* s){

	while (*s){
		*t++ = *s++;
	}
	/*
	 * mas compacto
	 * while(*t++=s++);
	 * */
}
