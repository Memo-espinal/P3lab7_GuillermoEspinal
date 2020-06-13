#include "Caballo.h"

Caballo::Caballo()
{
	if (jugador == true ){
		caracter ='O';
	}else if (jugador== true ){
		caracter = 'C';
	}
}
bool Caballo ::validar(int,int){
	return true ;
}
Caballo::Caballo(int fil,int col, Piezas***table ,bool juga):Piezas(fil,col,table,juga){
	this->fila= fil;
	this->columna= col;
	this->tablero = table;
	this->jugador = juga ;
	
	if (jugador == true ){
		caracter ='O';
	}else if (jugador== false ){
		caracter = 'C';
	}
}

Caballo::~Caballo()
{
}
