#ifndef CINE_H
#define CINE_H

#include <iostream>
#include "pelicula.h"
#include "sala.h"
#include"boleto.h"
#include <string>
#include <vector>

using namespace std;

class Cine {
	
	private:
			//Atributos privados clase Cine
		string nombre;
		string cartelera;
		Pelicula peliculas[5];		//Composicion de 5 objetos de clase Pelicula
		Sala salas;   				//Composicion de objeto de clase Sala 
		vector<Boleto>boletos;		//Asociacion con clase Boleto
	
	public:
		explicit Cine();							//Constructor por defecto
		Cine(string);					//Constructor clase Cine
		//Metodos
		void mostrarCartelera();			
		void mostrarSala();
		void comprarBoletos();

		
};

#endif
