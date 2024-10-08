/*******************************
* Práctica
* Implementa los siguientes subalgoritmos
*/

#include "practica.h"
#include <stdlib.h>


/*
* Crea un buffer de números enteros con la capacidad recibida como parámetro y lo inicializa al valor 0
* Parámetros:
*   capacidad : número de enteros que caben en el buffer
*   buffer :    estructura de datos con el buffer de memoria y su capacidad
*   ok :        devuelve verdadero si la reserva de memoria fue correcta
*/
void creaBuffer( unsigned capacidad, Buffer* buffer, bool* ok ){
	// Inicializamos el buffer con la capacidad dada
    buffer->capacidad = capacidad;
    
    // Reservamos memoria para el buffer
    buffer->buffer = (int*)malloc(capacidad * sizeof(int));
    
    // Verificamos si la reserva de memoria fue exitosa
    if (buffer->buffer != NULL) {
        // Inicializamos todos los elementos del buffer a 0
        for (unsigned i = 0; i < capacidad; i++) {
            buffer->buffer[i] = 0;
        }
        *ok = true;  // La operación fue exitosa
    } else {
        *ok = false;  // Fallo en la asignación de memoria
    }
}

/*
* Almacena un valor en el buffer recibido como parámetro en la posición pos
* Parámetros:
*   buffer :    buffer donde almacenar el valor
*   pos :       posición donde almacenar el valor en el buffer. Si no es válida el subalgoritmo
*               no almacena nada
*   valor :     valor que se almacena en el buffer
*   ok :        devuelve verdadero si la posición es válida. Falso en caso contrario
*/
void almacenaValor( Buffer* buffer, unsigned pos, int valor, bool* ok ){
	if(pos < buffer->capacidad){
		buffer->buffer[pos]=valor; 
		*ok =true; //Posicion valida 
	}else{
		*ok=false; //Posicion invalida
	}
}

/*
* Obtiene un valor en una posición del buffer
* Parámetros:
*   buffer : buffer de memoria
*   pos :    posición que se quiere leer del buffer
*   ok  :    devuelve verdadero si la posición es válida. Falso en caso contrario
* Devuelve:
*   Valor almacenado en el buffer en pos o 0 si la posición no es válida
*/
int obtieneValor( Buffer* buffer, unsigned pos, bool* ok ){
	int value = 0; 
	if(pos<buffer->capacidad){
		value=buffer->buffer[pos]; 
		*ok = true; 
	}else{
		*ok = false; 
	}
	return value; 
}

/*
* Suma todos los valores almacenados en un buffer de números enteros
* Parámetros:
*   buffer :    buffer de memoria de números enteros
* Devuelv:
*   La suma de todos los elementos almacenados en el buffer
*/
int sumaValores( Buffer* buffer ){
	int totalSum = 0; 
	for(unsigned i = 0; i<buffer->capacidad; i++){
		totalSum+=buffer->buffer[i]; 
	}
	return totalSum;
}

/* 
* Libera la memoria asignada a un buffer
* Debe dejar el puntero del buffer a NULL y su capacidad a 0
*/
void liberaBuffer( Buffer* buffer ){
	if(buffer->buffer!=NULL){
		free(buffer->buffer); 
		buffer->buffer=NULL; 
	}
	buffer->capacidad=0; 
}