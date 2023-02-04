//Rogelio Ramírez 
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

//funcion principal 
int main(int argc, char *argv[])
{
	 float a, b, elevado, total;
		
	//solicita los valores a y b
    cout<<"Ingrese el valor de A y de B: ";
    cin>>a>>b;
    
    elevado=(a+b)*(a+b);
    total=elevado/3;
    
    cout<<"el resultado de la operacion es de: "<<total;

	//detiene antes de que se cierre 
	getch();
	return 0;
}

//RRG
