/*******************************
* Ejemplo de uso de la práctica
* Este programa lee una cantidad de números de teclado, los muestra por pantalla y muestra su suma.
*/

#include <stdio.h>
#include <stdlib.h>
#include "practica.h"


void leerLista( Lista* lista ){
	int v;
	bool ok;

	vacia( lista );	

	printf( "Teclea números enteros y finaliza con un valor 0\n" );
	
	scanf( "%d", &v );
	while (v != 0){
		almacenaValor( lista, v, &ok );
		if (!ok){
			printf( "Error al almacenar valor\n" );
			exit( 1 );
		}
		scanf( "%d", &v );
	}
}

void imprimirLista( Lista lista ){
	bool ok;
	
	printf( "Números en la lista:\n" );
	for( unsigned k = 0; k < longitud( lista ); k++ ){
		printf( "%d ", obtieneValor( lista, k, &ok ) );
		if (!ok){
			printf( "Error al obtener valor\n" );
			exit( 1 );
		}
	}
	printf( "\n" );
}


int main(){
	Lista lista;
	
	leerLista( &lista );

	printf( "Los números que has tecleado son:\n" );
	imprimirLista( lista);
	
	printf( "La suma de los números tecleados es: %d\n", sumaValores( lista ) );
	
	liberaLista( &lista );
	return 0;
}


