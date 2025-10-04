#include <iostream>
using namespace std;

class empleado
{
    char nombre[10];     //10b
    int edad;
    char direccion[255];
    int telefono;

    public:

        int leeredad()
        {
            return edad;
        }

}   ;

int main (int argc, char const *argv[])
{
    // enteros
    cout << "tamaño de int " << sizeof(int) << endl;
    cout << "tamaño de long " << sizeof(long) << endl;
    // punto flotante
    cout << "tamaño de float " << sizeof(float) << endl;
    cout << "tamaño de double " << sizeof(double) << endl;
    // bytes
    cout << "tamaño de char " << sizeof(char) << endl;
    cout << "tamaño de byte " << sizeof(byte) << endl;
    cout << "tamaño de bool " << sizeof(bool) << endl;

    cout << "tamaño del puntero " << sizeof(int *) <<endl;

    empleado empleados[10];  //espacio 2730B
    cout << "tamaño empleado " << sizeof(empleado) <<endl;
    cout << "empleados " << empleados[0].leeredad() <<endl;

    int a = 64;
    char b =(char) a;
    cout << b << endl;


    return 0;
}