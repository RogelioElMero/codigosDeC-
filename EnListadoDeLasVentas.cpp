//Rogelio Ramírez 
#include <iostream>
#include <conio.h>


using namespace std;

//funcion principal 
int main(int argc, char *argv[])
{
	int min=0,med=0,max=0;
	double venta ;
	string condi="y";
	//solicita el costo de la venta y lo repite hasta que el usuario indeque otra cosa que no sea y
	
	do{
	    
	    cout<<"ingrese el costo de la venta: ";
	    cin>>venta;
	    
	    if(venta<=200){
	        min++;
	    }else if (venta>=400){
	        max++;
	    }else{
	        med++;
	    }
	    
	    
	    cout<<"quiere repetir la venta ingrese <y> : ";
	    cin>>condi;
	    
	    
	}while(condi=="y");
    
    //muestra el total acumulado 
    cout<<"\nlas ventas menores a 200 o igual son: "<<min;
    cout<<"\nlas ventas mayores a 400 o igual son: "<<max;
    cout<<"\nlas ventas menores a 400 pero mayores a 200 son: "<<med;
    
    
    
	//detiene antes de que se cierre 
	getch();
	return 0;
}

//RRG
