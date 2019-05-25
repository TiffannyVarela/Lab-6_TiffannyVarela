#ifndef CARRO_H
#define CARRO_H
#include <string>
using std::string;
#include "Chasis.h"
#include "Motor.h"
#include "Pintura.h"

class Carro{
	private:
		string nom_modelo;
		int n_modelo;
		Chasis* chasis = new Chasis();
		Motor* motor = new Motor();
		Pintura* pintura = new Pintura();

	public:

		Carro(string, int, Chasis*, Motor*, Pintura*);
		Carro();

		virtual string toString();

		//~Carro();
};

#endif