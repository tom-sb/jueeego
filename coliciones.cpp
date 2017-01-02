// Listados: Colisiones.cpp
//
// Implementación de funciones dedicadas a la detección
// de colisiones
// Esta función devuelve true si existe colisión entre los dos
// personajes que recibe como parámetros

#include <iostream>
#include "carro.h"
#include "mainprueba.cpp"

using namespace std;

bool colision_superficie(Carro& uno, Carro& otro) 
{

	int w1,h1,w2,h2,x1,y1,x2,y2;

	w1 = uno.ancho();
	h1 = uno.alto();

	w2 = otro.ancho();
	h2 = otro.alto();

	x1 = uno.posx();
	y1 = uno.posy();

	x2 = otro.posx();
	y2 = otro.posy();

	if(((x1+w1) > x2) && ((y1+h1) > y2) && ((x2+w2) > x1) && ((y2+h2) > y1))
		return true ;
	return false ;

}
