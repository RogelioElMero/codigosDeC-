//Rogelio Ramírez 
#include <iostream>
#include <conio.h>

using namespace std;

//funcion principal 
int main(int argc, char *argv[])
{
    char letra;
    
    cout<<"Digite un caracter: ";
    cin>>letra;
    
    //conducionar variable
    switch(letra){
    	case 'a':
    	case 'e':
    	case 'i':
    	case 'o':
    	case 'u': cout<<"es una vocal minuscula";break;
    	default: cout<<"No, es una vocal minuscula";break;
	}
    
    
	//detiene antes de que se cierre 
	getch();
	return 0;
}

//RRG
