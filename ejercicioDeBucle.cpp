//Rogelio Ramírez 
#include <iostream>
#include <conio.h>

using namespace std;

//funcion principal 
int main(int argc, char *argv[])
{
    float salario,sal_fin;
    char condi='s';
    
    do{
        cout<<"ingrese el salario: ";
        cin>>salario;
        
        sal_fin=salario*1.15;
		
		cout<<"el salario con aumento es: "<<sal_fin<<endl;
		        
        
       
        cout<<"si hay otro empleado ingrese <s>, si no ingrese <n>: ";
        cin>>condi;
        
    }while(condi!='n');
    
        
	//detiene antes de que se cierre 
	getch();
	return 0;
}

//RRG
