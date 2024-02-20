#include <iostream>
using namespace std;
class persona{
	//atrinutos
	protected : string nombres, apellidos, direccion;
	int telefono;
	protected :
		persona(){
		}
		persona(string nom, string ape, string dir, int tel){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
		}
	void mostrar();
	
};
