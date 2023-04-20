#include <iostream>
#include "Menu.h"
#include "Lista.h"
#include "Fecha.h"
#include "Tarea.h"
using namespace std;


int main(){
int opcion;
ListaDeTareas Lista;

do{
menu();
cout<<"OPCION: ";
cin>>opcion;
system("cls");
switch(opcion){
    case 1: Lista.Cargar();
            system("PAUSE");
            system("cls");
    break;
    case 2: Lista.ordenarTareasPorFecha();
            system("cls");
            Lista.Mostrar();
            system("PAUSE");
            system("cls");
    break;
    case 3: Lista.visualizarTarea();
            system("PAUSE");
            system("cls");
    break;
    case 4: Lista.marcarTarea();
            system("PAUSE");
            system("cls");
    break;
    case 5: Lista.mostrarDiasDisponibles();
            system("PAUSE");
            system("cls");
    break;
}

}while(opcion!=0);

return 0;
}

