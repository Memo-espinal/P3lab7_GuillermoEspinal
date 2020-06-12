#ifndef PIEZAS_H
#define PIEZAS_H

class Piezas
{
	public:
		Piezas();
		
		
		Piezas(int,int,Piezas***,bool);
		
		virtual bool validar (int, int )=0  ;
		//virtual bool movimiento ();
		
		bool movimiento(int ,int);
		bool validarDentro(int, int );
		
		
		
		~Piezas();
	protected:
		
		int fila;
		int columna;
		char caracter;
		bool jugador ;
		Piezas*** tablero;
		
};

#endif
