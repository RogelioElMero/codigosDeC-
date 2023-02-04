//Rogelio Ramírez 
#include <iostream>
#include <conio.h>

using namespace std;

//funcion principal 
int main(int argc, char *argv[])
{
	string clave;
	float c1,c2,c3,c4,c5,c6,total,prom;
    //solicita su clave de empleado
    cout<<"Ingrese su clave de empleado: ";
    cin>>clave;
    //ingresa sus 6 sueldos 
    cout<<"\ningrese su sueldo de los 6 meses pasados: ";
    cin>>c1>>c2>>c3>>c4>>c5>>c6;
    
    //hace un promedio de los sueldos
    total=(c1+c2+c3+c4+c5+c6);
    prom=total/6;
    
    //muestra la clave seguido del promedio         de salario
    cout<<endl<<"la cave es "<<clave<<endl<<"el total es de   "<<total<<endl<<"el promedio es de  "<<prom<<endl;

	//detiene antes de que se cierre 
	getch();
	return 0;
}

//RRG
