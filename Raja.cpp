#include "Raja.h"

Raja::Raja()
{
	if(jugador == true){
		caracter = 'P';
	}else if (jugador == false ){
		caracter = 'R';
	}
}
bool Raja:: validar(int,int){
	return true;
}
Raja::Raja(int fil,int col, Piezas***table ,bool juga):Piezas(fil,col,table,juga){
	this->fila= fil;
	this->columna= col;
	this->tablero = table;
	this->jugador = juga ;
	
	if(jugador == true){
		caracter = 'P';
	}else if (jugador == false ){
		caracter = 'R';
	}
}

Raja::~Raja()
{
}
