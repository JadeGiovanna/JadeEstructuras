#include <iostream>
using namespace std;
int main() {
    int Torta = 20;
    int Palomitas = 15;
    int Agua = 10;
    int eleccion=0;

do {
    cout<< "menú: Torta(1), Palomitas(2), Agua(3), Salir(4)" << endl;
    cout << "Escoja un alimento del menú(1, 2, 3):" << endl;
    cin >> eleccion;
    if (eleccion == 1)
    {
        cout << "Has elegido torta, está a 20 pesos " << endl;
        break;
    }
    else if (eleccion == 2)
    {
        cout << "Has elegido palomitas, está a 15 pesos " << endl;
        break;
    }
    else if (eleccion == 3)
    {
        cout << "Has elegido agua, está a 10 pesos " << endl;
        break;
    }
    else
    {
        cout << "Opción no válida" << endl;
    }
} while (eleccion != 4);
cout << "Hasta luego" << endl;
    return 0;
}