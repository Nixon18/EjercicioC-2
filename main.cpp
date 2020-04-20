#include <iostream>
#include <conio.h>


using namespace std;

int main(int argc, char** argv) {
	
	float temperatura;
	
	cout<<"Ingreso a la camara detectora del segundo sintoma del covid-19"<<endl;
	cout<<"------------------------------------------------------------------------"<<endl;	
	cout<<"Por favor ingrese su temperatura"<<endl;
	cin>>temperatura;
	
	
	
	if(temperatura >= 37){
		
		cout<<"necesitas chequeo de un medico, pues tienes uno de los sintomas de virus19"<<endl;
		
	}else{
		
		cout<<"cuidate"<<endl;
	}
	
	

	
	
	return 0;
}
