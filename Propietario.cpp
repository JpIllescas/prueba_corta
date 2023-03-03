#include "Persona.cpp"
#include <iostream>
using namespace std;

class Propietario : Persona {

    private : string nit; double cui;


  public :
  Propietario(){
  }
  Propietario(string nom,string ape,string dir,string fech,int tel,string n, double c) : Persona(nom,ape,dir,fech,tel){ 
  nit = n;
  cui = c;
  }
  
  // METODOS
  //set (modificar)
  void setNit(string n){nit = n;}
  void setCui(double c){cui = c;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setFecha_nacimiento(string fech){fecha_nacimiento = fech;}
  void setTelefono(int tel){telefono = tel;}

 //get (mostrar)
  string getNit(){	return nit;}
  double getCui(){ return cui;}
  string getNombres(){	return nombres;}
  string getApellidos(){	return apellidos;}
  string getDireccion(){	return direccion;}
  string getFecha_nacimiento(){return fecha_nacimiento;}
  int getTelefono(){	return telefono;}

// metodo  

void mostrar(){
	cout<<"______________________"<<endl;
	cout<<nit<<","<<cui<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_nacimiento<<"."<<telefono<<endl;
}
void agregar(){
    cout<<"atributos agregados exitosamente: ";
}


};  