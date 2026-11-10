#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    char referencia[20];
    char descripcion[60];
    int talla;
    char disponibilidad;
    float costo;
    float precio;

    cout << "ADMINISTRAR VENTA DE ZAPATOS" << endl;

    cout << "Digite la referencia del zapato..." << endl;
    cin.getline(referencia, 20);

    cout << endl;
    cout << "Digite una descripcion del zapato..." << endl;
    cin.getline(descripcion, 60);

    cout << endl;
    cout << "Digite la talla..." << endl;
    cin >> talla;

    cout << endl;
    cout << "Digite la letra si esta disponible o no para la venta S/N..." << endl;
    cin >> disponibilidad;

    cout << endl;
    cout << "Digite el costo del zapato..." << endl;
    cin >> costo;

    cout << endl;
    cout << "Digite el precio de venta del zapato..." << endl;
    cin >> precio;

    
    system("cls");

    cout << "LOS DATOS REGISTRADOS SON LOS SIGUIENTES" << endl;

    cout << "REFERENCIA: " << referencia << endl;
    cout << "DESCRIPCION: " << descripcion << endl;
    cout << "TALLA: " << talla << endl;
    cout << "DISPONIBILIDAD: " << disponibilidad << endl;
    cout << "COSTO: " << costo << endl;
    cout << "PRECIO: " << precio << endl;

    cout << endl;
    cout << "Gracias por digitar la informacion" << endl;

    cout << endl;
    cout << "Desarrollado por: Brayan Camilo Castiblanco" << endl;

    system("pause");

    return 0;
}
