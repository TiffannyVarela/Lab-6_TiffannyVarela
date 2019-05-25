#include "Carro.h"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
Carro::Carro(string nom_modelo1, int n_modelo1, Chasis* chasis1, Motor* motor1, Pintura* pintura1){
	this->nom_modelo=nom_modelo1;
	this->n_modelo=n_modelo1;
	this->chasis=chasis1;
	this->motor=motor1;
	this->pintura=pintura1;
}

Carro::Carro(){

}

/*string Carro::toString(){
	 cout<<"Nombre del modelo: "<<nom_modelo<<endl
	 <<"Numero de modelo: "<< n_modelo<<endl
	 <<"Chasis: "<<chasis->toString()<<endl
	 <<"Motor: "<<motor->toString()<<endl
	 <<"Pintura: "<<pintura->toString()<<endl;
	 return " ";
}*/