//Rogelio Ramírez 
#include <iostream>
#include <conio.h>

using namespace std;


//funcion principal 
int main(int argc, char *argv[])
{
	int numero[100],n;
	cout<<"Digite el numero de elementos que va a tener el arreglo: ";
	cin>>n;
	
	for(int i =0 ; i<n; i++){
		cout<<"Digite un numero: ";
		cin>>numero[i];
	}

	for(int i=0 ; i<n; i++){
		cout<<i<<" -> "<<numero[i]<<endl;
	}
 
	//detiene antes de que se cierre 
	getch();
	return 0;
}

//RRG
