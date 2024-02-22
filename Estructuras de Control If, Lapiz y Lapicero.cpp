#include <iostream>
using namespace std;
main(){
	//and (y) &&
	//or (o) //
	
	//puedes entrar a mi clase si traes un lapiz o un lapicero
	char lapiz, lapicero, cuaderno;
		cout<<"Trae lapiz (s/n):";
		cin>>lapiz;
		cout<<"Trae lapicero (s/n):";
		cin>>lapicero;
		cout<<"Trea cuaderno (s/n):";
		cin>>cuaderno;
		//and (y) = si ambas condiciones son verdaderas, el valor sera verdadero
		//or (o) = si una de las dos condiciones es verdadera, el valor sera verdadero
		//combinacion = Almenos una de los primeros requisitos y un cuaderno por obligación
		if((lapiz=='s' or lapicero=='s') && cuaderno=='s'){
			cout<<"Bienvenido a la clase"<<endl;
		}else{
			cout<<"Lo sentimos, no puedes ingresar a la clase"<<endl;
	}

	system("pause");	
}
