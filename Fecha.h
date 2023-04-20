#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

class Fecha{
private:
    int _Dia;
    int _Mes;
    int _Anio;

public:
    //CONSTRUCTOR
    Fecha();
    //SETTERS
    void Cargar();
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);
    //GETTERS
    void Mostrar();
    int getDia();
    int getMes();
    int getAnio();
};

#endif // FECHA_H_INCLUDED
