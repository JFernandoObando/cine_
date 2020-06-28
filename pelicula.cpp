#include <iostream>
#include <string>
#include "pelicula.h"

using namespace std;

//Implementacion del contructor por defecto
  Pelicula::Pelicula(){
	this->id=0;
	this->titulo="";
	this->duracion=0;
	this->estreno=false;
	this->hora="";	
}

//Implementacion del constructor Pelicula
Pelicula::Pelicula(int id,string titulo,int duracion,bool estreno,string hora):id(id),titulo(titulo),duracion(duracion),estreno(estreno),hora(hora){}

//Implementacion de metodos de la clase Pelicula

string Pelicula::estaDeEstreno(){
	return this->estreno ? "  **Estreno**":"";
}

int Pelicula::getID(){
	return this->id;
}

string Pelicula::getDatos(){
	return to_string(this->id)+".-"+
	this->hora + this->titulo + "(" +
	to_string(this->duracion) + ")" + this->estaDeEstreno() + "\n";
	
}

string Pelicula::getHora(){
return	this->hora;
}

string Pelicula::getTitulo(){
	return this->titulo;
}

