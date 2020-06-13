#ifndef ELEFANTE_H
#define ELEFANTE_H

#include "Piezas.h"

class Elefante : public Piezas
{
	public:
		Elefante();
		bool validar(int,int);
		Elefante(int, int , Piezas***,bool);
		~Elefante();
	protected:
};

#endif
