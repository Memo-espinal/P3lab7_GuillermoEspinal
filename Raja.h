#ifndef RAJA_H
#define RAJA_H

#include "Piezas.h"

class Raja : public Piezas
{
	public:
		Raja();
		bool validar(int,int);
		Raja(int,int,Piezas***,bool);
		~Raja();
	protected:
};

#endif
