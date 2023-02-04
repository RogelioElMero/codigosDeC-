//ROGELIO RAMIREZ
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;


//funcion principal
int main(){
	
	float A,B,C,x1,x2,contRaiz,raiz;
	
	cout<<"Ingrese los coeficientes de su operacion";
	cout<<"\nIngrese el valor del cuadrado: ";
	cin>>A;
	cout<<"Ingrese el valor del lineal: ";
	cin>>B;
	cout<<"Ingrese el valor independiente: ";
	cin>>C;
	
	contRaiz=(pow(B,2))-(4*A*C);
	
	//cout<<"el resultado dentro de la raiz es: "<<contRaiz;
	
	if(contRaiz<0){
		cout<<"\nLa solucion a esa ecuacion son raizes imaginarias :c";
	}else{
		raiz=sqrt(contRaiz);
	
	//		cout<<"el contenido de la raiz es: "<<raiz;
		
		x1 = (-B + raiz)/(2*(A));
		x2 = (-B - raiz)/(2*(A));
	
		cout<<"\n\tel valor de x1 es: "<<x1;
		cout<<"\n\tel valor de x2 es: "<<x2;
	}
	
	
	//detiene el sistema antes de que se cierre
	getch();
	return 0;
}

//RRG
