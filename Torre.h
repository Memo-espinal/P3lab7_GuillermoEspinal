#ifndef TORRE_H
#define TORRE_H

#include "Piezas.h"

class Torre : public Piezas
{
	public:
		Torre();
		Torre(int,int, Piezas***,bool);
		bool validar(int,int);
		
		~Torre();
	protected:
};

#endif
