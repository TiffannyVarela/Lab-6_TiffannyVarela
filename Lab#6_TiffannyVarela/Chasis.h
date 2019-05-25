#ifndef CHASIS_H
#define CHASIS_H

#include <string>
using std::string;

class Chasis
{
	private:
		string tipo_ruedas;
		string transmision;

	public:
		Chasis(string, string);
		Chasis();

		virtual string toString();

		//~Chasis();
	
};

#endif