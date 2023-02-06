//Rogelio Ramírez 
#include <iostream>
#include <conio.h>

using namespace std;

//funcion principal 
int main(int argc, char *argv[])
{
	string matric;
	float c1,c2,c3,c4,c5,prom;
    //solicita su clave de empleado
    cout<<"Ingrese la matricula del alumno: ";
    cin>>matric;
    //ingresa sus 6 sueldos 
    cout<<"\ningrese las 5 calificaciones del alumno: ";
    cin>>c1>>c2>>c3>>c4>>c5;
    
    //hace un promedio de los sueldos
    prom=(c1+c2+c3+c4+c5)/5;
    
    //muestra la clave seguido del promedio         de salario
    cout<<endl<<"la matricula es: "<<matric<<endl<<"el promedio de la calificacion es:  "<<prom<<endl;

	//detiene antes de que se cierre 
	getch();
	return 0;
}

//RRG
