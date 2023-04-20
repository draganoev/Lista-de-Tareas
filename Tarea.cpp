#include <iostream>
#include "Tarea.h"
#include "string.h"
using namespace std;

//CONSTRUCTOR
Tarea::Tarea(){
    _Id=0;
    _Descripcion="Nada";
    _Dificultad="Nada";
    Fecha _FechaLimite;
    _Estado="Pendiente";

}
//SETTERS
void Tarea::Cargar(){
int id;
string descripcion,dificultad,fechaLimite, estado;

cout<<"Ingrese el ID: ";
cin>>id;
setId(id);
cout<<"Ingrese la descripcion: ";
cin.ignore();
getline(cin,descripcion);
setDescripcion(descripcion);
cout<<"Ingrese la dificultad: ";
cin>>dificultad;
setDificultad(dificultad);
cout<<"Ingrese la fecha limite"<<endl;
cout<<"-----------------------"<<endl;
_FechaLimite.Cargar();
cout<<"Ingrese el estado: ";
cin>>estado;
setEstado(estado);


}
void Tarea::setId(int id){
    _Id=id;
}
void Tarea::setDescripcion(string descripcion){
    _Descripcion=descripcion;
}
void Tarea::setDificultad(string dificultad){
    _Dificultad=dificultad;
}
void Tarea::setFechaLimite(Fecha fechaLimite){
    _FechaLimite=fechaLimite;
}
void Tarea::setEstado(string estado){
    _Estado=estado;
}

//GETTERS
int Tarea::getId(){
    return _Id;
}
string Tarea::getDificultad(){
    return _Dificultad;
}
Fecha Tarea::getFechaLimite(){
    return _FechaLimite;
}
string Tarea::getDescripcion(){
    return _Descripcion;
}
string Tarea::getEstado(){
    return _Estado;
}
void Tarea::Mostrar(){

cout<<"ID: "<<getId()<<endl;
cout<<"Descripcion: "<<_Descripcion<<endl;
cout<<"Dificultad: "<<_Dificultad<<endl;
cout<< "Fecha limite: "<<getFechaLimite().getDia()<<"/"<<getFechaLimite().getMes()<<"/"<<getFechaLimite().getAnio()<<endl;
cout<<"Estado: "<<getEstado()<<endl;

}


