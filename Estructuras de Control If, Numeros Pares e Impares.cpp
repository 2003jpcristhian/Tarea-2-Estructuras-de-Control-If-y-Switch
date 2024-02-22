#include <iostream>
using namespace std;
main(){
	//Ejemplo de numeros pares e impares
	int num=0;
	cout<<"Ingresa el numero:";
	cin>>num;
	 //Si dividimos un numero entre dos y su residuo es 0, entonces es par, en caso contrario es impar
	if ((num%2)==0){
		cout<<"Par"<<endl;
	}else{
		cout<<"Impar"<<endl;
	}
	
	system("pause");	
}
