#include "persona.cpp"
#include <iostream>
using namespace std;

class cliente : persona{
 // atributos
 private : string nit;
 
 //constructor
 public :
 	cliente (){
	 }
	 
	 cliente(string nom, string ape, string dir, int tel, string n): persona (nom, ape, dir, tel){
	 	nit =n;
	 }
	 //set (modificar)
	 void setNit (string n){nit = n;}
	 void setNombres (string nom){nombres = nom;}
	 void setApellidos (string ape){apellidos = ape;}
	 void setDireccion (string dir){direccion = dir;}
	 void setTelefono (int tel){telefono = tel;}
	 //get (mostrar)
	 string getNit (){return nit;}
	 string getNombres (){return nombres;}
	 string getApellidos (){return apellidos;}
	 string getDirreccion (){return direccion;}
	 int getTelefono (){return telefono;}
	 //metodos
	 void mostrar (){
	 	cout<<"____________________________________"<<endl;
	 	cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
	 	
	 }
};

