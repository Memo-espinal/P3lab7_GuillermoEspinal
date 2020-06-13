#include "Ministro.h"

Ministro::Ministro()
{
		if(jugador == true){
		caracter = 'W';
	}else if (jugador == false ){
		caracter = 'M';
	}
}
bool Ministro :: validar(int,int){
	return true ;
}
Ministro::Ministro(int fil,int col, Piezas***table ,bool juga):Piezas(fil,col,table,juga){
	this->fila= fil;
	this->columna= col;
	this->tablero = table;
	this->jugador = juga ;
	
	if(jugador == true){
		caracter = 'W';
	}else if (jugador == false ){
		caracter = 'M';
	}
}
Ministro::~Ministro()
{
}
