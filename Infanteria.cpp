#include "Infanteria.h"
#include <iostream>

Infanteria::Infanteria()
{
	if (jugador==true){
		caracter= 'L';
	}else if (jugador == false) {
		caracter = 'I'; 
	}
}
Infanteria::Infanteria(int fil,int col, Piezas***table ,bool juga):Piezas(fil,col,table,juga){
	this->fila= fil;
	this->columna= col;
	this->tablero = table;
	this->jugador = juga ;
	
	if (jugador==true){
		caracter= 'L';
	}else if (jugador == false) {
		caracter = 'I'; 
	}
}
bool Infanteria::validar(int fil ,int col){
	if (fil>this->getFila()+1) {
		return false;
	}else if (fil>this->getFila()-1){
		return false;
	}else if (fil==this->getFila()+1 && (col==this->getColumna()+1 || col==this->getColumna()-1) &&tablero[fil][col]!=NULL) {
		return true;
//		if (this->getJugador()==true){
//			Piezas* pieza = tablero[fil][columna]
//			if (pieza=='I' ||pieza=='T'|| pieza=='C'|| pieza=='E'||pieza=='M'||pieza=='R'){
//				return true;
//			}
////			
//		}else{
//			
//		}
		
	}else{
		return true;
	}
}
Infanteria::~Infanteria()
{
}
