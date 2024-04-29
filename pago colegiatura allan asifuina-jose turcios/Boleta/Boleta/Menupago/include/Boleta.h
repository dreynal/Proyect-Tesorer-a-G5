#ifndef BOLETA_H
#define BOLETA_H

#include <string>

using namespace std;

class Boleta {
private:
    string nombre;
    int matricula;
    float monto;

public:
    Boleta();
    Boleta(string nombre, int matricula, float monto);

    void setNombre(string nombre);
    void setMatricula(int matricula);
    void setMonto(float monto);

    string getNombre() const;
    int getMatricula() const;
    float getMonto() const;

    void mostrarBoleta() const;
    void editarBoleta();
    void guardarBoleta(const string& nombreArchivo) const;
};

#endif
