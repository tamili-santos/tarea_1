#include "cliente.cpp"
#include <iostream>
using namespace std;

main (){
	string nit, nombres, apellidos, direccion;
	int telefono;
	
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	//instancia de un objeto
	cliente obj = cliente(nombres, apellidos, direccion, telefono, nit);
	obj.mostrar();
	
	/*cout<<"Datos del Cliente: "<<obj.getNit()<<","<<obj.getNombres()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono()<<endl;
	
	/*cliente obj = cliente(nombres, apellidos, direccion, telefono, nit);
	obj.mostrar();
	
	cout<<"Ingrese Nit: ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();*/
	cliente obj = cliente ();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();
	
}
