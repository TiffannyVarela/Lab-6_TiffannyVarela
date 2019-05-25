#ifndef PINTURA_H
#define PINTURA_H

#include <string>
using std::string;

class Pintura
{
	private:
		string color;
		string acabado;
	public:
		Pintura();
		Pintura(string, string);

		/*string getcolor();
		void setcolor(string);

		string getacabado();
		void setacabado(string);*/

		virtual string toString();
		//~PINTURA();
	
};
#endif