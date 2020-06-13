#ifndef CABALLO_H
#define CABALLO_H

#include "Piezas.h"

class Caballo : public Piezas
{
	public:
		Caballo();
		bool validar(int,int);
		Caballo (int,int,Piezas***,bool);
		~Caballo();
	protected:
};

#endif
