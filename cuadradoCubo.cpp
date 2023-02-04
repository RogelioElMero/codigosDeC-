//Rogelio Ramírez 
#include <iostream>
#include <conio.h>

using namespace std;

//funcion principal 
int main(int argc, char *argv[])
{
	int x,cubo,cuadrado;
	
	cout<<"ingrese un numero positivo para saber su cuadrado y su cubo: ";
	cin>>x;
	
	if(x>0){
	cuadrado=x*x;
	cubo=x*x*x;
	cout<<"el cuadrado es: "<<cuadrado<<"\nel cubo es: "<<cubo;
	}else{
	    cout<<"el numero no es un entero positivo ";
	}


	//detiene antes de que se cierre 
	getch();
	return 0;
}

//RRG
