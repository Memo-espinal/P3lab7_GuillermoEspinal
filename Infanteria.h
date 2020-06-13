#ifndef INFANTERIA_H
#define INFANTERIA_H

#include "Piezas.h"

class Infanteria : public Piezas
{
	public:
		Infanteria();
		Infanteria(int,int, Piezas***,bool);
		bool validar(int,int);
		
			bool operator==(Piezas* pieza){
			return this->getCaracter()==pieza->getCaracter();
		}
		bool operator==(char carac){
			return this->getCaracter()==carac;
		}
		
		~Infanteria();
	protected:
};

#endif
