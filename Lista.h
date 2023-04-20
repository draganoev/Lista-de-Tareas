#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include <iostream>
#include "Tarea.h"
using namespace std;

class ListaDeTareas{
private:
    Tarea _Listado[3];

public:
    //SETTERS
    void Cargar();
    //GETTERS
    Tarea Mostrar();
    void ordenarTareasPorFecha();
    void visualizarTarea();
    void marcarTarea();
    void mostrarDiasDisponibles();

};

#endif // LISTA_H_INCLUDED
