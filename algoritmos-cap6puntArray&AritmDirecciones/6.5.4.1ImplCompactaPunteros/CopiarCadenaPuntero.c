/*Como t y s son punteros al primer caracter entonces al incrementarlos pasarán
 * a apuntar al carácter siguiente.
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
