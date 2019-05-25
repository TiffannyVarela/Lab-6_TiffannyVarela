#ifndef MOTOR_H
#define MOTOR_H

#include <string>
using std::string;

class Motor
{
	private:
		string electrico;
		string config;
	public:
		Motor(string, string);
		Motor();

		/*string getElectrico();
		void setElectrico(string);

		string getConfig();
		void setConfig(string);*/
		
		string toString();

		//~Motor();
	
};
#endif