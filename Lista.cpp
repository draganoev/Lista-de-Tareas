#include <iostream>
#include "Lista.h"
using namespace std;

//SETTERS
void ListaDeTareas::Cargar(){
int x;

for(x=0;x<3;x++){
    cout<<"Cargue la lista de tareas numero "<<x+1<<endl;
        _Listado[x].Cargar();
        system("cls");
    }
}

//GETTERS
Tarea ListaDeTareas::Mostrar(){
int x;

for(x=0;x<3;x++){
    _Listado[x].Mostrar();
    cout<<endl;
    }

}

void ListaDeTareas::ordenarTareasPorFecha(){
int x,y;


for(x=0;x<3;x++){
        for(y=0;y<3;y++){
            if(_Listado[x].getFechaLimite().getAnio()<_Listado[y].getFechaLimite().getAnio()){
            swap(_Listado[x],_Listado[y]);
            }else if(_Listado[x].getFechaLimite().getMes()<_Listado[y].getFechaLimite().getMes()){
            swap (_Listado[x],_Listado[y]);}else if(_Listado[x].getFechaLimite().getDia()<_Listado[y].getFechaLimite().getDia()){
            swap(_Listado[x],_Listado[y]);}
        }
    }
}

void ListaDeTareas::visualizarTarea(){
int id,x;

cout<<"Ingrese codigo de tarea para visualizar: ";
cin>>id;

for(x=0;x<3;x++){
    if(_Listado[x].getId()==id){
        _Listado[x].Mostrar();
        }
    }
}

void ListaDeTareas::marcarTarea(){
int id,x;
string completado="Hecho";

cout<<"Ingrese la tarea que desea marcar como hecha: ";
cin>>id;

for(x=0;x<3;x++){
    if(_Listado[x].getId()==id){
        _Listado[x].setEstado(completado);
        }
    }
}

void ListaDeTareas::mostrarDiasDisponibles(){
Fecha evaluador;
int x,auxDia,auxMes,auxAnio;

cout<<"Ingrese la fecha en la que se encuentra: "<<endl;
evaluador.Cargar();

cout<<"Dias para su vencimiento: "<<endl;

for(x=0;x<3;x++){
    auxDia=_Listado[x].getFechaLimite().getDia()-evaluador.getDia();
    auxMes=_Listado[x].getFechaLimite().getMes()-evaluador.getMes();
    auxAnio=_Listado[x].getFechaLimite().getAnio()-evaluador.getAnio();
    if(auxDia<0){
        auxDia=auxDia*-1;
    }
    if(auxMes<0){
        auxMes*-1;
    }
    if(auxAnio<0){
        auxAnio*-1;
    }
    cout<<"A la tarea numero "<<x+1<<" le quedan "<<auxDia<<" dias "<<auxMes<<" meses "<<auxAnio<<" anios para su vencimiento"<<endl;
}

}
