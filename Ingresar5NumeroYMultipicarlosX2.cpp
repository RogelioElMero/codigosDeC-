//Rogelio Ramírez 
#include <iostream>
#include <conio.h>

using namespace std;


//funcion principal 
int main(int argc, char *argv[])
{
	float num[5];
	float numX2[5];
	
	
	//solicita 5 numeros
	for(int i =0 ; i<5; i++){
		cout<<"ingrese un numero: ";
		cin>>num[i];
	}
	
	//pasa los valores del primer array al segundo multiplicandolos por 2
	for(int i=0; i<5; i++){
		numX2[i]=num[i]*2;
	}
	
	//muetra el segundo array
	for(int i=0; i<5; i++){
		cout<<"->"<<numX2[i]<<endl;
	}
	
	//detiene antes de que se cierre 
	getch();
	return 0;
}

//RRG
