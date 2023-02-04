//ROGELIO RAMIREZ
#include <iostream>
#include <conio.h>

using namespace std;

//funcion principal
int main(){
	
	float N, Tem;
	
	//solicita un numero de sonidos que iso un grillo
	cout<<"Ingrese el numero de grinidos de un grillo en un minuto: ";
	cin>>N;
	
	//aplica la ecuacion para calculcular la temparatura
	Tem=(N/4)+40;
	
	//muiestra la temperatura
	cout<<"\nla temperatura es de: "<<Tem<<"°";
	
	
	//detiene el programa antes de que cierre.
	getch();
	return 0;
}

//RRG
