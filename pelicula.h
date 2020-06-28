#ifndef PELICULA_H
#define PELICULA_H

#include<vector>
#include<iostream>
using namespace std;


class Pelicula{
	private:
		//Atributos privados clase Pelicula
		int id;
		string titulo;
		int duracion;
		bool estreno;
		string hora;
	public:
		explicit Pelicula();			//Constructor por defecto
		Pelicula(int, string, int, bool, string); //Constructor clase Pelicula
		string getDatos(); 			//Obtengo los datos de la pelicula
		string getTitulo();			//Obtengo el titulo de la pelicula
		string estaDeEstreno();		//Si esta de estreno o no
		int getID();				//Obtengo el Id de la pelicula
		string getHora();			//Obtengo la Hora de la pelicula
};


#endif
