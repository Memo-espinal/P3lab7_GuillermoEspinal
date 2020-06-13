#ifndef CHATARUNGA_H
#define CHATARUNGA_H
#include "Piezas.h"

class Chatarunga
{
	public:
		Chatarunga();
		
		void jugar();
		void printTablero();
		void crear();
		
		
		~Chatarunga();
	protected:
		Piezas*** Tablero ;
		int size;
		
};

#endif
