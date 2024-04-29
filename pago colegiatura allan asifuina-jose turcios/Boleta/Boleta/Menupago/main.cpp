#include "Boleta.h"
#include <iostream>

using namespace std;
int main() {
    string nombre;
    int matricula;
    float monto;

    cout << "Ingrese nombre del estudiante: ";
    cin >> nombre;
    cout << "Ingrese matrícula del estudiante: ";
    cin >> matricula;
    cout << "Ingrese monto de colegiatura: ";
    cin >> monto;

    Boleta boleta(nombre, matricula, monto);

    boleta.mostrarBoleta();
    boleta.editarBoleta();
    boleta.mostrarBoleta();

    boleta.guardarBoleta("boleta.txt");

    return 0;
}
