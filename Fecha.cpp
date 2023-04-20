#include <iostream>
#include "Fecha.h"
using namespace std;

Fecha::Fecha(){
_Dia=1;
_Mes=1;
_Anio=1900;
}
//SETTERS
void Fecha::setDia(int dia){
    _Dia=dia;
}
void Fecha::setMes(int mes){
    _Mes=mes;
}
void Fecha::setAnio(int anio){
    _Anio=anio;
}

void Fecha::Cargar(){
int dia,mes,anio;

cout<<"Ingrese dia: ";
cin>>dia;
setDia(dia);
cout<<"Ingrese mes: ";
cin>>mes;
setMes(mes);
cout<<"Ingrese anio: ";
cin>>anio;
setAnio(anio);
}

//GETTERS
int Fecha::getDia(){
    return _Dia;
}
int Fecha::getMes(){
    return _Mes;
}
int Fecha::getAnio(){
    return _Anio;
}
void Fecha::Mostrar(){
cout<<getDia()<<"/"<<getMes()<<"/"<<getAnio();
}





