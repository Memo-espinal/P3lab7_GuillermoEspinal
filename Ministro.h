#ifndef MINISTRO_H
#define MINISTRO_H

#include "Piezas.h"

class Ministro : public Piezas
{
	public:
		Ministro();
		bool validar(int,int);
		Ministro(int,int , Piezas***, bool);
		~Ministro();
	protected:
};

#endif
