#include "boleto.h"

#include "pelicula.h"
#include <iostream>
#include<string>


using namespace std;
//Implementar el Costructor por defecto
Boleto::Boleto(){
	this->pelicula ;
	this->sala=0;
	this->fila=' ';
	this->columna=' ';
	this->boleto=0;
}
//Implementacion del Constructor de clase Boleto
Boleto::Boleto(int sala,int boleto, char fila,char columna,Pelicula pelicula){
	this->sala = sala;
	this->fila=fila;
	this->columna=columna;
	this->pelicula=pelicula;
	this->boleto=boleto;
}
 //Implementacion del Metodo de clase Boleto
int Boleto::getNumeroSala(){
	return this->sala+1;
}

//Implementacion del metodo de clase Boleto
void Boleto::resumendeCompra(){
	
			cout<<	"+--------------Boleto N"<<this->boleto<<"---------------------+\n";
		  	cout<<  "|  Sala:"<< this->sala<<  "           		             |\n";
		 	cout<<  "|  Hora:"<< this->pelicula.getHora() << "   		             |\n"; 
		 	cout<<  "|  Asiento:" << this->fila<<this->columna << "                                |\n";
		 	cout<<  "|  Pelicula:" << this->pelicula.getTitulo()<< "     	             |\n";
		  	cout<<  "+--------------------------------------------+\n";
}

void Boleto::preciodelBoleto(){
	if(this->boleto==1 ){
		cout << "TOTAL A PAGAR DE "<<this->boleto <<" BOLETO: " << this->boleto * 3.15 << "$" << endl;
	}else{
		cout << "TOTAL A PAGAR DE "<<this->boleto <<" BOLETOS: " << this->boleto * 3.15 << "$" << endl;
	}
}
