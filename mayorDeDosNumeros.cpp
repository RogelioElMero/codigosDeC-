//Rogelio Ramírez 
#include <iostream>
#include <conio.h>

using namespace std;

//prototipo de la funcion
int encontrarMax(int x,int y);

//funcion principal 
int main(int argc, char *argv[])
{
    int n1,n2;
      
    cout<<"Digite 2 numeros: ";
    cin>>n1>>n2;
    
    cout<<"el numero mayor de los 2 numeros es: "<<encontrarMax(n1,n2)<<endl;
	
	      
	//detiene antes de que se cierre 
	getch();
	return 0;
}

//devolver 1 de los 2 numeros mayores
int encontrarMax(int x,int y){
	int numMax;
	if(x>y){
		numMax=x;
	}else{
		numMax=y;
	}
	return numMax;
}


//RRG
