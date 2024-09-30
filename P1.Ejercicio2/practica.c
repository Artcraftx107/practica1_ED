/*******************************
* Práctica
* Implementa los siguientes subalgoritmos
* Incluir aquí la implementación de cualquier otro subalgoritmo que se considere necesario
*/

#include "practica.h"
#include <stdlib.h>


/*
* Crea un lista enlazada de números enteros vacía
* Parámetros:
*   lista :    estructura de datos
*/
void vacia( Lista* lista ){

}

/*
* Almacena un valor al final de la lista
* Parámetros:
*   lista :    lista enlazada donde almacenar el valor al final
*   valor :     valor que se almacena
*   ok :        devuelve verdadero si se pudo almacenar el valor. Falso en caso contrario
*/
void almacenaValor( Lista* lista, int valor, bool* ok ){

}

/*
* Obtiene un valor en una posición de la lista
* Parámetros:
*   lista :  lista enlazada
*   pos :    posición que se quiere devolver
*   ok  :    devuelve verdadero si la posición es válida. Falso en caso contrario
* Devuelve:
*   Valor almacenado en la lista en la posición recibida o 0 si la posición no es válida
*/
int obtieneValor( Lista lista, unsigned pos, bool* ok ){
	return 0;
}
 
 
/* 
* Devuelve cuantos números hay en la lista
* Parámetros:
*   lista :   lista enlazada
* Devuelve:
*   El número de nodos de la lista
*/
unsigned longitud( Lista lista ){
	return 0;
}


/*
* Suma todos los valores almacenados en la lista
* Parámetros:
*   lista :    lista enlazada
* Devuelve:
*   La suma de todos los elementos almacenados en la lista
*/
int sumaValores( Lista lista ){
	return 0;
}


/* 
* Libera la memoria asignada a la lista
* Debe dejar el puntero de la lista a NULL
*/
void liberaLista( Lista* lista ){

}
