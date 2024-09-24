// Mi primer programa en C++
#include <iostream>
#include <string>

using namespace std;

int main ()
{
    // Declaramos variables tipo string, double y le asignamos el valor ingresado por el usuario.
    string nombre, asignatura;
    double c1, c2,  c3, c4, c5, nf;

    cout << "Ingresar el nombre del estudiante: ";
    cin >> nombre;
    cout << "Ingresar el nombre de la asignatura: ";
    cin >> asignatura;
    cout << "Ingresar calificación 1: ";
    cin >> c1;
    cout << "Ingresar calificación 2: ";
    cin >> c2;
    cout << "Ingresar calificación 3: ";
    cin >> c3;
    cout << "Ingresar calificación 4: ";
    cin >> c4;
    cout << "Ingresar calificación 5: ";
    cin >> c5;

    // Calculamos la nota final
    nf = (c1 * 0.15) + (c2 * 0.25) + (c3 * 0.15) + (c4 * 0.25) + (c5 * 0.20);
    // Mostramos nota final
    cout << "La nota final es: " << nf;

    return 0;
}