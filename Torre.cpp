#include "Torre.h"

Torre::Torre()
{
	if(jugador == true){
		caracter ='Y';
		
	}else if(jugador == false){
		caracter= 'T';
	}
}
bool Torre::validar(int,int){
	return true ;
}
Torre::Torre(int fil,int col, Piezas***table ,bool juga):Piezas(fil,col,table,juga){
	this->fila= fil;
	this->columna= col;
	this->tablero = table;
	this->jugador = juga ;
	
	if(jugador == true){
		caracter ='Y';
		
	}else if(jugador == false){
		caracter= 'T';
	}
}

Torre::~Torre()
{
}
