//Rogelio Ramírez 
#include <iostream>
#include <conio.h>

using namespace std;

//funcion principal 
int main(int argc, char *argv[])
{
	
    float c1, c2, c3, c4, c5, prom;
    string matricula;
    
    //solicita la matricula del alumno 
    cout<<"Ingresse la matricula: ";
    cin>>matricula;
    
    //solicita sus 5 calificaciomes 
    cout<<"ingrese sus 5 calificaciones: ";
    cin>>c1>>c2>>c3>>c4>>c5;
    //realiza el promedio 
    prom=(c1+c2+c3+c4+c5)/5;
    //imprime la matricula y el promedio de las calificaciones 
    cout<<"\nla matricula es: "<<matricula<<"\n el promedio de las calificaciones es: "<<prom;
    
    
	//detiene antes de que se cierre 
	getch();
	return 0;
}

//RRG
