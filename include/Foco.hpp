#pragma once
#include <EstadoFoco.hpp>

class Foco
{
private:
    EstadoFoco estado;
public:
    Foco() {}
    ~Foco() {}
    void encender(){}
    void Apagar(){}
    EstadoFoco MostrarEstado(){}
};