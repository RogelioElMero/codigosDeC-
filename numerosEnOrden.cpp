//ROGELIO RAMIREZ
#include <iostream>
#include <conio.h>

using namespace std;

//funcion principal
int main(){
	
	int A,B,C;
	//solicita 3 numeros 
	cout<<"Ingrese 3 numeros para mostrar en orden decendente: ";
	cin>>A>>B>>C;
	//verifica el si el mayor es A antes que B o C
	if(A>B && A>C){
		if(B>C){
			cout<<"\n"<<A<<" - "<<B<<" - "<<C;
		}else{
			cout<<"\n"<<A<<" - "<<C<<" - "<<B;
		}
		//verifica el si el mayor es B antes que C o A
	}else if(B>C && B>A){
		if(C>A){
			cout<<"\n"<<B<<" - "<<C<<" - "<<A;
		}else{
			cout<<"\n"<<B<<" - "<<A<<" - "<<C;
		}
	}
	//verifica el si el mayor es C antes que A o B
	if(C>B && C>A){
		if(B>A){
			cout<<"\n"<<C<<" - "<<B<<" - "<<A;
		}else{
			cout<<"\n"<<C<<" - "<<A<<" - "<<B;
		}
	}
	
	//detiene el programa para que no se cierre.
	getch();
	return 0;
}

//RRG
