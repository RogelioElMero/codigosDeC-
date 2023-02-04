//Rogelio Ramírez 
#include <iostream>
#include <conio.h>

using namespace std;

//funcion principal 
int main(int argc, char *argv[])
{
    float costo,aux;
    char condi='s';
    
    do{
        
        cout<<"Ingrese un gasto: ";
        aux=costo;
        cin>>costo;
        costo=aux+costo;
        
        cout<<"para ingresar otro costo ingrese <s>: ";
        cin>>condi;
        
    }while(condi=='s');
    
    cout<<"\nel costo total es de: "<<costo;
    
	//detiene antes de que se cierre 
	getch();
	return 0;
}

//RRG
