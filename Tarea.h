#ifndef TAREA_H_INCLUDED
#define TAREA_H_INCLUDED
#include <iostream>
#include "Fecha.h"
using namespace std;

class Tarea{
private:
    int _Id;
    string _Descripcion;
    string _Dificultad;
    Fecha _FechaLimite;
    string _Estado;

public:
    //CONSTRUCTOR
    Tarea();
    //SETTERS
    void Cargar();
    void setId(int id);
    void setDescripcion(string descripcion);
    void setDificultad(string dificultad);
    void setFechaLimite(Fecha fechaLimite);
    void setEstado(string estado);

    //GETTERS
    void Mostrar();
    int getId();
    string getDificultad();
    Fecha getFechaLimite();
    string getDescripcion();
    string getEstado();
};

#endif // TAREA_H_INCLUDED
