//Rogelio Ramírez 
#include <iostream>
#include <conio.h>

using namespace std;

//funcion principal 
int main(int argc, char *argv[])
{
    double c1,nomina;
    
    
    cout<<"ingrese el sueldo de 10 empleados para saber el total de la nomina: ";
    //guarda y almacena los sueldos de lls empleados 
    for(int i=0 ; i<10 ; i++){
       cin>>c1;
       nomina=nomina+c1;
        
    }
    
    //muestra el total de la nomina 
    cout<<"la nomina total es de: "<<nomina;

	//detiene antes de que se cierre 
	getch();
	return 0;
}

//RRG
