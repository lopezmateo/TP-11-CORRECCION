#include <iostream>
#include <string>
using namespace std;
int main (){
	
	int dia;
	string mensaje;
	cout<<"ingrese un dia de la semana (del 1 al 7)"<<endl;
	cin>>dia;
	
	switch (dia){
		
		case 1:
            mensaje= "Lunes" ;
            break;
        case 2:
            mensaje=  "Martes" ;
            break;
        case 3:
            mensaje= "Miércoles";
            break;
        case 4:
            mensaje ="Jueves";
            break;
        case 5:
            mensaje = "Viernes" ;
            break;
        case 6:
            mensaje = "Sábado" ;
            break;
        case 7:
            mensaje ="Domingo" ;
            break;
        default:
            mensaje=  "Error: Por favor, introduzca un número del 1 al 7." ;
            break;
        }
        cout <<mensaje<<endl;
        
        return 0;
            
    }
			
		