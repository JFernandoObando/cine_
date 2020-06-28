//Autores : 
//			Arias Joel
//			Casa Jean Pierre
//			Coronel Robbi
//			Juan Obando
//Proyecto Cine ©

#include <vector>
#include <iostream>
#include "cine.h"
#include "pelicula.h"
#include <string>



using namespace std;

int main(){
system("color 0b");   		 //Da color al sistema

		Cine obj1("Multicine UPS");	//Creo Objeto de Clase cine

		int op;
	
	do
	{	
			cout<<"***********CINE UPS**************\n";	
			cout<<"========MENU PRINCIPAL========\n";
			cout<<"1.) MOSTRAR CARTELERA: \n";
			cout<<"2.) MOSTRAR SALA: \n";
			cout<<"3.) COMPRAR BOLETOS: \n";
			cout<<"4.) SALIR: \n";
			cout<<" =PORFAVOR DIGITE UNA OPCION= \n";
		    cin>>op;
		    cout<<"\n";
		    system ("cls");  //Limpia la consola de aplicacion mostrando menu principal
			
	    switch(op)
		{
			//Muestra la cartelera
	    	case 1:
				obj1.mostrarCartelera();
				break;	
			//Muestra la sala de cine	
			case 2:
				obj1.mostrarSala();
				break;
			//Metodo para comprar boletos	
			case 3:
				obj1.comprarBoletos();
				break;
			//Salir del programa	
			case 4:
				cout<<"----------Gracias por utilizar este programa----------\n";	
				break;
			default :
				cout<<"\nLa opcion ingresada es incorrecta por favor digite de nuevo: \n";
				break;	
			
		}
	
	}while(op!=4);

	return 0;
}

