#include "Piezas.h"

Piezas::Piezas()
{
}
Piezas::Piezas(int fil ,int col ,Piezas*** table ,bool juga ){
	fila= fil;
	columna= col;
	tablero = table;
	jugador = juga ;
	
}		
bool Piezas:: movimiento(int , int ){
	return true;
}
bool Piezas::validarDentro(int, int ){
	return true;
}

Piezas::~Piezas()
{
}
