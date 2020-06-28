#ifndef BOLETO_H
#define BOLETO_H  

#include"pelicula.h"
#include<vector>

using namespace std;


class Boleto{
	private:
		
	    Pelicula pelicula;     //Asociacion con clase pelicula
		
		//Atributos Privados de clase Boleto
		int sala;
		int boleto;
	    char fila;
		char columna;
	public:
		
		explicit Boleto();				//Constructor por defecto
		Boleto(int sala,int boleto,char fila, char columna,Pelicula pelicula);   //Constructor clase Boleto
		
	//Metodos clase Boleto
		void resumendeCompra();		
		int getNumeroSala();
		void preciodelBoleto();

};

#endif 
