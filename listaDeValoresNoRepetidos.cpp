//Rogelio Ramírez 
#include <iostream>
#include <conio.h>

using namespace std;

//prototipo de la funcion 
	
bool verificarExistencia(int num, int array[]);
//funcion principal 
int main(int argc, char *argv[])
{
	//array ingresado
	int n=0, array[]={1,2,3,4,5,6,4,3,1,2,38,5,6,12,17,12378,3,1,2,2,4,5,76,3,1,23,4,5,4,3234,};	
	
	n=sizeof(array)/sizeof(*array);
	
	//cambia los valores de array
	int array2[n];
	
	//inicioaliza el array 2 en ceros
	for(int i=0; i<n; i++){
		array2[i]=0;
	}
	
	//guarda los datos no repetidos
	for(int i =0 ; i<n; i++){
		
		if(!verificarExistencia(array[i],array2)){
			array2[i]=array[i];
		}	
	}
	
	//muestras los datos guardados que no sean cero
	for(int i =0 ; i<n; i++){
		
		if(array2[i]!=0){
		cout<<"->"<<array2[i]<<endl;
		}
				
	}	
	
	//detiene antes de que se cierre 
	getch();
	return 0;
}

//devuelve true en caso de que el numeroexista en el array
bool verificarExistencia(int num, int array[]){
	bool valor=false;
		
	for(int i=0; i<sizeof(array);i++){
		if(array[i]==num){
			valor=true;
		}
	}
	return valor;	
}

//RRG
