#include "Elefante.h"

Elefante::Elefante()
{
	if(jugador == true){
		caracter = '3';
	}else if (jugador == false ){
		caracter = 'E';
	}
}
bool Elefante::validar(int,int){
	return true;
}
Elefante::Elefante(int fil,int col, Piezas***table ,bool juga):Piezas(fil,col,table,juga){
	this->fila= fil;
	this->columna= col;
	this->tablero = table;
	this->jugador = juga ;
	
	if(jugador == true){
		caracter = '3';
	}else if (jugador == false ){
		caracter = 'E';
	}
}
Elefante::~Elefante()
{
}
