#include "Propietario.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion, fecha_nacimiento;
	int telefono;
    double cui;
	cout<<"Ingrese Nit: ";
	cin>>nit;
    cout<<"Ingrese Cui: ";
    cin>>cui;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
    cout<<"Ingrese Fecha de Nacimiento";
    cin>>fecha_nacimiento;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;

	Propietario obj = Propietario(nombres,apellidos,direccion,fecha_nacimiento,telefono,nit,cui);
	obj.mostrar();

    int opc;
    cout<<"ingrese la opcion que desea realizar: 1. agregar datos  2. Mostrar ";
    cin>>opc;
    switch (opc)
    {
    case 1:
 obj.agregar();    
    break;
    case 2:
 obj.mostrar();
    break;
default:
cout<<"Esa no es una opcion valida...";
    break;
}

}