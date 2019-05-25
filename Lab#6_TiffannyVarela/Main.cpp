#include "Carro.h"
#include "Chasis.h"
#include "Motor.h"
#include "Pintura.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;

int menu();
//Provisionar la matriz de chars
char** provisionarMatriz(int, int);

//liberar memoria de la matriz
void liberarMatriz(char**&,int);

//imprimir la matriz
void printMatrix(char**,int, int);

//leer primera fila de la matriz
char** readMatriz(char**,int);

void revisaproto(char**, int,int, int);

void avanzar (char**, int, int,vector<Carro*>,vector<Carro*>);

void verproduccion (vector<Carro*>);

int cont=0, cont2=0;
int size=5, size2=4;
char** matriz = provisionarMatriz(size,size2);
vector <Carro*> produccion;
vector <Carro*> producidos;
int main()
{
        int opc;
        string nom_modelo;
        int n_modelo;
        Chasis* chasis;
        string tipo_ruedas,transmision;
        Motor* motor;
        string electrico, config;
        Pintura* pintura;
        string color,acabado;
        Carro* carro;
	do{
		switch(opc=menu()){
			case 1: 
                                
                                cout<<"Nombre del modelo: "<<endl;
                                cin>>nom_modelo;
                                cout<<"Numero del modelo"<<endl;
                                cin>>n_modelo;
                                cout<<"Chasis"<<endl;
                                cout<<"Tipo de ruedas"<<endl;
                                cin>>tipo_ruedas;
                                cout<<"Transmision"<<endl;
                                cin>>transmision;
                                chasis = new Chasis(tipo_ruedas,transmision);
                                cout<<"Motor"<<endl;
                                cout<<"Electrico"<<endl;
                                cin>>electrico;
                                cout<<"Configuracion"<<endl;
                                cin>>config;
                                motor = new Motor(electrico, config);
                                cout<<"Pintura"<<endl;
                                cout<<"Color"<<endl;
                                cin>>color;
                                cout<<"Acabado"<<endl;
                                cin>>acabado;
                                pintura = new Pintura(color, acabado);
                                cont++;
                                carro = new Carro(nom_modelo, n_modelo, chasis,motor, pintura);
                                produccion.push_back(carro);
			break;

			case 2:
                                revisaproto(matriz, size, size2, cont);
                                printMatrix(matriz, size, size2);
			break;

			case 3:
                                verproduccion(produccion);
			break;

			case 4:
                                verproduccion(producidos);
			break;

                        case 5:
                                avanzar(matriz, size, size2, produccion,producidos);
			break;

			case 6:
                                cout<<"Saliendo"<<endl;
                                liberarMatriz(matriz,size);
			break;

		}
	}while(opc!=6);
	
	return 0;
}

int menu(){
        while(true){
        cout<<"MENU"<<endl
        <<"1.- Agregar Prototipo"<<endl
        <<"2.- Ver Produccion"<<endl
        <<"3.- Ver Produccion Detallada"<<endl
        <<"4.- Ver Listado Producido"<<endl
        <<"5.- Avanzar"<<endl
        <<"6.- Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 6){
                return opcion;
          }
          else{

        cout<<"La opcion elegida no es valida, ingrese un valor entre 1 y 5"<<endl;
  }
  }//end del while
        return 0;
}

char** provisionarMatriz(int size2, int size){
        char** matrix = new char* [size];
        for(int i=0; i<size2; i++){
                matrix[i]=new char[size2];
                for (int j = 0; j < size2; j++)
                {
                       matrix[i][j]=' ';
                }
                
        }
        return matrix;
}

char** readMatriz(char** matriz, int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(i==0){
				cout<<"Ingrese el valor de casilla ["<<i<<","<<j<<"]"<<endl;
				cin>>matriz[i][j];
			}
		}
	}
	return matriz;
}

void liberarMatriz(char**& matrix, int size){
        for(int i=0;i<size;i++){
                if (matrix[i]!=NULL){
                         delete[]matrix[i];
                        matrix[i]=NULL;
                }
        }

        if(matrix!=NULL){
                delete[] matrix;
                matrix=NULL;
        }
}

void printMatrix(char** matriz, int size, int size2){
        for(int i=0;i<size;i++){
                for(int j=0;j<size2;j++) {
                        cout<<"[ "<<matriz[i][j]<<" ] ";
                        // cout << "i: " << i << ", j: " << j << endl;
                }

                cout<<endl;
        }
}

void revisaproto(char** matriz, int size, int size2, int cont){
        for(int i=0;i<size;i++){
                for(int j=0;j<size2;j++) {
                        if (i<cont)
                        {
                                if (j==0)
                                {
                                        if (matriz[i][j]==' ')
                                        {
                                                matriz[i][j]='P';
                                        }
                                        
                                }
                        }
                        
                }
        }
}


void avanzar(char** matriz, int size, int size2,vector<Carro*> produccion,vector<Carro*> producidos){
        for (int i = 0; i < size; i++)
        {
                for (int j = 1; j <= size2; j++)
                {
                        if (matriz[i][0]=='P'&& matriz[i][j]==' ')
                        {
                                matriz[i][j]='C';
                                break;
                        }  

                        if (matriz[i][3]=='C')
                        {
                                producidos.push_back(produccion[i]);
                                produccion.erase(produccion.begin()+i);
                        }
                                              
                } 
        }  
}

void verproduccion(vector<Carro*> produccion){
        for (int i = 0; i < produccion.size(); i++)
        {
                cout<<produccion[i]->toString()<<endl;
        }
        
}