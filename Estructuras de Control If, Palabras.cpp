#include <iostream>
using namespace std;
main(){
	string pais="";
	cout<<"Ingrese el pais de origen:";
	cin>>pais;
		if (pais=="Guatemala"){ //La condición solo se cumple si el pais es Guatemala
			cout<<"Yo soy de "<<pais<<" ese es mi pais"<<endl;
		}else{ //Si ingresamos otro pais no se cumplira la condición
			cout<<pais<<endl;	
	}
	system("pause");	
}
