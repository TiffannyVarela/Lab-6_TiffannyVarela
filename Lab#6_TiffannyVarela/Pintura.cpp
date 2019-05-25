#include "Pintura.h"
#include <string>
#include <iostream>
using std::cout;
using std::endl;
Pintura::Pintura(string color1, string acabado1){
	this->color=color1;
	this->acabado=acabado1;

}

Pintura::Pintura(){

}

/*string toString(){
	cout<<"Color: "<<color<<endl
	<<"Acabado: "<<acabado<<endl;
	return " ";
}*/