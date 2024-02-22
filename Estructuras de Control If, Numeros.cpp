#include <iostream>
using namespace std;
main(){
	//Cuando el num>0 = Positivo o Cuando el num<0 = Negativo
	int num=0;
	cout<<"Ingresar numero:";
	cin>>num;
	if(num>0){ //Cuando el numero es mayor a 0, esta es su funcion
		cout<<"El numero es positivo"<<endl;
	}else{ //En esta estructura if else entran todos los menores o iguales a 0
		//Ahora, anidar estructuras
		if(num==0){ //Esta funcion se utiliza cuando 0 es igual a 0
			cout<<"0 es un numero neutro"<<endl;
		}else{ //Y en esta funciòn cuando el numero es menor a 0
			cout<<"El numero es negativo"<<endl;
		}		
	}

	system("pause");	
}
