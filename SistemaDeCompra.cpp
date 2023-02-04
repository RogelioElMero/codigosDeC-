//Rogelio Ramírez 
#include <iostream>
#include <conio.h>

using namespace std;

//funcion principal 
int main(int argc, char *argv[])
{
	float precio,pagoa,pago,cambio;
	//solicita el precio del articulo y el pago del cliente 
	cout<<"Ingrese el precio del articulo: ";
	cin>>precio;
	
	cout<<"ingrese el pago del ciente: ";
	cin>>pagoa;
	
	//solicita mas dinero en caso de necesitarse
	    while(pagoa<precio){
	       	
	       	cout<<"pida mas dinero ya que no cubre el costo: ";
	       	cin>>pago;
	       	pagoa=pagoa+pago;
	       	}
	      //devuelve el cambio del producto  	
	 cambio=pagoa-precio;
	 cout<<"\ncompra exitosa, el cambio es: "<<cambio<<endl;
	       		
	
	
	


	//detiene antes de que se cierre 
	getch();
	return 0;
}

//RRG
