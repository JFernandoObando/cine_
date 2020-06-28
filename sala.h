#ifndef SALA_H
#define SALA_H

#include "boleto.h"

#include <iostream>
using namespace std;

class Sala{
	private:
			//Atributos privados clase Sala
		int numero;
		bool asientos[5][5];
		char filas[5];
		char columna[5];

	public:
		explicit Sala();    							  			//Constructor por defecto
		Sala(int);													//Constructor
		//Metodos clase Sala	
		void mostrarAsientos();							//Metodo para mostrar el vector asientos	
		bool asientoLibre(int fila,int columna);		//Valida que el asiento este Libre
		void ocupar(int fila,int columna); 				//Ocupa el asiento y marca la X
};

#endif 
