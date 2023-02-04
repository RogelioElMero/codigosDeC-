//Rogelio Ramírez 
#include <iostream>
#include <conio.h>

using namespace std;

//funcion principal 
int main(int argc, char *argv[])
{
	int N, num, cero;
	//solicita el total de numeros
	cout<<"ingrese el total de numeros a ingresar: ";
	cin>>N;
	
	//cuenta cuanos ceros se han ingresado 
	for(int i=0; i<N ;i++){
	    cin>>num;
	    if(num==0){
	        cero++;
	    }
	}
    
    //muestra la cantidad de ceros 
    cout<<"la cantidad de ceros en la lista es de: "<<cero;

	//detiene antes de que se cierre 
	getch();
	return 0;
}

//RRG
