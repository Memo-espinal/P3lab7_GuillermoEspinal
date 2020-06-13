#include "Piezas.h"
#include <iostream>

Piezas::Piezas()
{
}
Piezas::Piezas(int fil ,int col ,Piezas*** table ,bool juga ){
	fila= fil;
	columna= col;
	tablero = table;
	jugador = juga ;
	
}		
bool Piezas:: movimiento(int fil,int col ){
	if(validar(fil,col)){
		
		if(Piezas*p=tablero[fil][col]){
			delete p ;
			tablero[fil][col]=NULL;
		} 
		tablero[fil][col]= tablero[fila][columna];
		tablero[fila][columna]= NULL;
		fila = fil;
		columna= col;
		
		return true;
	}
}
bool Piezas::validarDentro(int fil , int col){
	return (fil>=0 && fil<8) && (col>=0 && col<8 );
}
char Piezas::getCaracter(){
	return caracter;
}
bool Piezas::getJugador(){
	return jugador ;
	
}
int Piezas:: getFila(){
	return fila;
}
int Piezas:: getColumna(){
	return columna;
}

Piezas::~Piezas()
{
}
