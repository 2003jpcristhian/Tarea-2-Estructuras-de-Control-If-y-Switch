#include <iostream>
using namespace std;
main(){
	string pais="";
	cout<<"Ingrese el pais de origen:";
	cin>>pais;
		if (pais=="Guatemala"){ //La condici�n solo se cumple si el pais es Guatemala
			cout<<"Yo soy de "<<pais<<" ese es mi pais"<<endl;
		}else{ //Si ingresamos otro pais no se cumplira la condici�n
			cout<<pais<<endl;	
	}
	system("pause");	
}
