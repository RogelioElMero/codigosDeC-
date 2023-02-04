//Rogelio Ramírez 
#include <iostream>
#include <conio.h>

using namespace std;


//funcion principal 
int main(int argc, char *argv[])
{
	char letras1[]={'a','b','c','d','e'};
	char letras2[]={'f','g','h','i','j'};
	char letras3[10];
	
	//pasa los valores del primer array al tercero
	for(int i =0 ; i<5; i++){
		letras3[i]=letras1[i];
	}
	
	//pasa los valores del segund array al tercero
	for(int i=0; i<5; i++){
		letras3[i+5]=letras2[i];	
	}
	
	//muetra el array 3
	for(int i=0; i<10; i++){
	cout<<"->"<<letras3[i]<<endl;	
	}
	
	//detiene antes de que se cierre 
	getch();
	return 0;
}

//RRG
