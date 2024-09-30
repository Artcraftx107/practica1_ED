/*******************************
* Prueba de la práctica
*/

#include <stdio.h>
#include <assert.h>
#include "practica.h"
#include "test_lista.h"

#define NPRUEBAS 1000000
#define LPRUEBA 100

void test_prueba(){
	Lista lista;
	bool ok;
	int v, a;
	
	test_iniciar( );
	
	vacia( &lista );

	for( unsigned k = 0; k < LPRUEBA; k++ ){
		assert( longitud( lista ) == k );
		v = test_generarValor();
		
		almacenaValor( &lista, v, &ok );
		assert( ok );
		a = obtieneValor( lista, k, &ok );
		assert( ok );
		assert( a == v );
	}
	
	assert( longitud( lista ) == LPRUEBA );
	
	a = obtieneValor( lista, LPRUEBA + 1, &ok );
	assert( a == 0);
	assert( !ok );
	
	assert( test_comparaLista( lista ) );
	
	assert( test_comparaSuma( sumaValores( lista ) ) );
	 
	liberaLista( &lista );
	assert( lista == NULL );
	
	test_finalizar();
}

int main() {
	for( unsigned k = 0; k < NPRUEBAS; k++ ){
		printf( "." );
		test_prueba();
	}

   printf("Todas las pruebas pasaron exitosamente.\n");
   return 0;
}

