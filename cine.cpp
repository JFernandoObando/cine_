#include <string>
#include "boleto.h"
#include "cine.h"
#include "sala.h"
#include <vector>
#include <iostream>
using namespace std;

//Constructor por defecto clase CINE
Cine::Cine():nombre(" ")
{
	this->salas;
}

//Constructor clase CINE
Cine::Cine(string nombre): nombre(nombre)
{
	this->salas;
}


//Metodo para mostrar Cartelera
void Cine::mostrarCartelera(){
		cout<<"--------CARTELERA---------\n";

        cout<<"ID  "<<"HORA "<<" TITULO  "<<" 		  		DURACION (minutos) \n\n";
		//Creo objetos de tipo Pelicula	y guardo en el vector
		this->peliculas[0]=Pelicula(1,"El Rey Leon				",117 ,true,"[14:30] ");
		cout<<this->peliculas[0].getDatos();
	
		this->peliculas[1]=Pelicula(2,"Spiderman: Lejos de Casa		",130 ,true,"[16:00] ");
		cout<<this->peliculas[1].getDatos();
		
		this->peliculas[2]=Pelicula(3,"Annabelle 3: Vuelve a Casa		",106 ,false,"[18:20] ");
		cout<<this->peliculas[2].getDatos();
	
		this->peliculas[3]=Pelicula(4,"Avengers: End Game			",188 ,false,"[16:15] ");
		cout<<this->peliculas[3].getDatos();
		
		this->peliculas[4]=Pelicula(5,"Toy Story 4				",100 ,false,"[11:30] ");
		cout<<this->peliculas[4].getDatos();
		cout<<"\n";
}


//Implementacion del metodo mostrarSala de la clase Cine
void Cine::mostrarSala(){
		cout<<"M I  S A L A:	\n\n";
		
		//Metodo mostrar asientos
 		this->salas.mostrarAsientos();
 			cout<<"\n";
}


//Implementacion del Metodo comprarBoletos de la clase Cine
void Cine::comprarBoletos(){
	Boleto b1;					//Creo objeto de tipo Boleto				
	char fila;  						
	char columna;
	string selecciondeAsiento;
	int k=0;					//Inicializo la variable k (bucle de numero de boletos)
	bool reserva=false;			//Inicializo la variable reserva(bluce asiento disponible)	
	int numeroBoletos;
	int ide;
	int boleto;
	int transformarColumna;
	int transformarFila;
	Pelicula peliSeleccionada; 	//Creo objeto de tipo Pelicula
	
		cout<<"\n-----Compra de boletos-------- \n";
			
			mostrarCartelera( );   // Invoco metodo mostrar cartelera
	
		//Bucle para un ingreso correcto del ID
		do
		{
			cout<<"Ingrese el ID de la pelicula : \n";
				cin >> ide;
					if(ide<=0||ide>5)
					{
						cout<<"ID incorrecto\n";	
						cout<<"Vuelva a ingresar el ID porfavor\n";	
					}
		}while(ide<=0||ide>5);
			
			
		for(int i=0;i<5;i++)
		{

			
				if(ide==this->peliculas[i].getID())
				{
					peliSeleccionada=this->peliculas[i];
						cout<<"A escogido la pelicula\n ";
						cout<<this->peliculas[i].getDatos();
				}	
			
		}

	//Bucle para ingreso correcto de la cantidad de boletos	
	do
	{
		cout<<"Cuantos boletos desea comprar\n";
		cin>>numeroBoletos;	
		if(numeroBoletos<=0)
		{
			cout<<"Tiene una cantidad incorrecta de boletos porfavor intente de nuevo\n";
		}
			else
			{
				cout<<"Usted va a comprar "<<numeroBoletos<<" Boletos\n\n";
			}
	}while  (numeroBoletos<=0);

		
		cout<<"*********Seleccione los asientos******** \n\n";
		mostrarSala();				//Invoco al metodo mostrar sala
	
	
		//Bucle para cantidad de Boletos 
	for( k=0;k<numeroBoletos;k++)
	{

		do{

				cout<<"\nBoleto #"<<k+1;
				cout <<"\nIngrese el asiento (Ejemplo: A3): \n";
				cin>> selecciondeAsiento;
				fila=selecciondeAsiento[0];
				columna=selecciondeAsiento[1];
				cout<<"Fila:"<<fila <<"\n";
				cout<<"Columna:"<<columna<<"\n";


						if(fila=='A'||fila=='a'){
						transformarFila=0;
						}
										
						if(fila=='B'||fila=='b'){
						transformarFila=1;
						}
										
						if(fila=='C'||fila=='c'){
						transformarFila=2;
						}
										
						if(fila=='D'||fila=='d'){
						transformarFila=3;
						}
										
						if(fila=='E'||fila=='e'){
						transformarFila=4;
						}

						if(columna=='1'){
						transformarColumna=0;
						}
										
						if(columna=='2'){
						transformarColumna=1;
						}
										
						if(columna=='3'){
						transformarColumna=2;
						}
										
						if(columna=='4'){
						transformarColumna=3;
						}
										
						if(columna=='5'){
						transformarColumna=4;
						}
						
							//Valida si el asiento esta disponible

					if(this->salas.asientoLibre(transformarFila,transformarColumna))
					{
						this->salas.ocupar(transformarFila,transformarColumna);
					
							b1=Boleto(1,k+1,fila,columna,peliSeleccionada);
							boletos.push_back(b1);
							reserva=true;
	
					}	else
						{
							cout<<"\nEl asiento [ "<< fila<<columna <<" ] se encuentra ocupado o no existe\n";
							cout<<"Porfavor elija nuevamente el asiento \n";
							reserva=false;
						
						}

			}while(reserva==false);
	}

				//Permite imprimir el resumen de la compra
			for(Boleto a : boletos)
			{
				a.resumendeCompra();
			}
			b1.preciodelBoleto();
			cout<<"\n      Gracias por su compra \n\n";
			boletos.clear(); // Limpia el buffer del vector(Para que al imprimir no vuelva a salir la compra anterior)
}




						
					

	
	
	




