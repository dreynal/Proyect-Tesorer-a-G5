#ifndef COLEGIATURA_H
#define COLEGIATURA_H

#include <string>
#include <vector>

class Colegiatura {
private:
    struct Boleta {
        std::string numeroBoleta;
        float monto;
    };
std::string numerosBoletas;
std::vector<float> montos;

public:
void registrarBoleta();
void mostrarBoletas();
void editarBoleta();
void borrarBoleta();
void guardarEnArchivo();
};

#endif // COLEGIATURA_H
