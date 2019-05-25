#include "Chasis.h"
#include <string>
#include <iostream>
using std::cout;
using std::endl;

Chasis::Chasis(string tipo_ruedas1, string transmision1){
	this->tipo_ruedas=tipo_ruedas1;
	this->transmision=transmision1;

}

Chasis::Chasis(){

}


/*string toString(){
	cout<<"Tipo de ruedas: "<<tipo_ruedas<<endl
	<<"Transmision: "<<transmision<<endl;
	return " ";
}*/