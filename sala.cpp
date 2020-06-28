#include <iostream>
#include <string>
#include "sala.h"
#include "boleto.h"
#include"pelicula.h"

//Defino 2 variables constantes
#define numeroFilas 5  		
#define numeroColumnas 5

using namespace std;

//Constructor por defecto de la clase Sala
Sala::Sala(){
	
	this->numero = 0;

		// inicializando los asientos
		for (int i = 0; i< 5; i++)
		{
			for (int j=0; j<5; j++)
			{
				this->asientos[i][j] = false;
			}
		}
		

			// inicializando las filas
			this->filas[0] = 'A';
			this->filas[1] = 'B';	
			this->filas[2] = 'C';
			this->filas[3] = 'D';
			this->filas[4] = 'E';
	
			//inicializando las columnas
			
			this->columna[0]= '1';
			this->columna[1]='2';
			this->columna[2]= '3';
			this->columna[3]= '4';
			this->columna[4]= '5';
}

//Constructor de la clase Sala
Sala::Sala(int numero):numero(numero){

	
	
	// inicializando los asientos
	for (int i = 0; i< 5; i++)
	{
		for (int j=0; j<5; j++)
		{
			this->asientos[i][j] = false;
		}
	}
			// inicializando las filas
			this->filas[0] = 'A';
			this->filas[1] = 'B';	
			this->filas[2] = 'C';
			this->filas[3] = 'D';
			this->filas[4] = 'E';
	
			//inicializando las columnas
			this->columna[0]= '1';
			this->columna[1]= '2';
			this->columna[2]= '3';
			this->columna[3]= '4';
			this->columna[4]= '5';

}

//Implementacion del metodo mostrarAsientos clase Sala
void Sala::mostrarAsientos(){
	char asiento;	
		cout<<" [X]= Asiento Ocupado\n";
		cout<<" [O]= Asiento Libre \n";
	  	cout<<"===========================================\n";
		cout<<"	   P  A  N  T  A  L  L  A\n";
		cout<<"-------------------------------------------\n";
		
		//Imprime Las columnas inicializadas en cada posicion
  		for (int i=0; i<numeroFilas ; i++)
		{
     		 cout << " 	(" << this->columna[i] << ")";
   		}
   		
   		//Recorre las posiciones del vector
	for(int i=0; i<numeroFilas ; i++)
	{
		for(int j=0;j<numeroColumnas ; j++)
		{
			if(j==0)
			{
				cout << "\n\n-" <<this->filas[i];
			}
			 
				if(!this->asientos[i][j])
				{
				asiento = 'O';
		
				}else{
					asiento = 'X';
					}
					cout <<" 	{" << asiento << "} "; //Imprime la matriz con los asientos libres u ocupados
		}
	}
	cout<<"\n";
}

//Implementacion del metodo asientoLibre
bool Sala::asientoLibre(int fila,int columna){
	
	return !this->asientos[fila][columna];
}
//Implementacion del metodo ocupar
void Sala::ocupar(int fila,int columna){

	 this->asientos[fila][columna]=true;
	
}

//commit final

