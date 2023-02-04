//Rogelio Ramírez 
#include <iostream>
#include <conio.h>

using namespace std;


//prototipo de la funcion
template <class TIPOD>
void mostrarAbs(TIPOD numero);

//funcion principal 
int main(int argc, char *argv[])
{
   int num1=-4;
   float num2=56.67;
   double num3=123.5678;
   mostrarAbs(num1);
   mostrarAbs(num2);
   mostrarAbs(num3);
   
   
   
   
   
	//detiene antes de que se cierre 
	getch();
	return 0;
}
template <class TIPOD>
void mostrarAbs(TIPOD numero){
	
	if(numero<0){
		numero=numero*-1;
	}
cout<<"El valor absoluto del numero es: "<<numero<<endl;
} 

//RRG
