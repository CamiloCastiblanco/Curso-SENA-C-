#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    
    char referencia[20];
    char descripcion[60];
    char tipo;
    int talla;
    char disponibilidad;
    int cantidad;
    float costo;
    float porcentajeUtilidad;
    float precio;

    float costoTotal;
    float precioTotal;
    float utilidadUnidad;
    float utilidadTotal;

    cout << "ADMINISTRAR VENTA DE ZAPATOS" << endl;
    cout << "Digite la referencia del zapato..." << endl << endl;
    cin.getline(referencia, 20);

    cout << endl;
    cout << "Digite una descripcion del zapato..." << endl << endl;
    cin.getline(descripcion, 60);

    cout << endl;
    cout << "Digita la talla..." << endl << endl;
    cin >> talla;

    cout << endl;
    cout << "Digita la letra si esta disponible o no para la venta S/N..." << endl << endl;
    cin >> disponibilidad;

    cout << endl;
    cout << "Digita la cantidad de Zapatos que existen de esta referencia..." << endl << endl;
    cin >> cantidad;

    cout << endl;
    cout << "Digita el costo del zapato..." << endl << endl;
    cin >> costo;

    int rango;
    rango = (costo > 30000) + (costo > 60000);
    
    switch (rango) {
        case 0:
            tipo = 'A';
            porcentajeUtilidad = 50;
            break;
        case 1:
            tipo = 'B';
            porcentajeUtilidad = 40;
            break;
        default:
            tipo = 'C';
            porcentajeUtilidad = 30;
            break;
    }

    precio = costo + (costo * porcentajeUtilidad / 100);
    costoTotal = costo * cantidad;
    precioTotal = precio * cantidad;
    utilidadUnidad = precio - costo;
    utilidadTotal = precioTotal - costoTotal;

    
    system("cls");

    cout << "LOS DATOS REGISTRADOS SON LOS SIGUIENTES" << endl << endl;
    cout << "REFERENCIA: " << referencia << endl;
    cout << "TIPO: " << tipo << endl;
    cout << "DESCRIPCION: " << descripcion << endl;
    cout << "TALLA: " << talla << endl;
    cout << "DISPONIBILIDAD: " << disponibilidad << endl;
    cout << "CANTIDAD DE ZAPATOS: " << cantidad << endl;
    cout << "COSTO UNIDAD: " << costo << endl;
    cout << "COSTO TOTAL: " << costoTotal << endl;
    cout << "PRECIO UNIDAD: " << precio << endl;
    cout << "PRECIO TOTAL DE " << cantidad << " UNIDADES: " << precioTotal << endl;
    cout << "UTILIDAD POR UNIDAD: " << utilidadUnidad << endl;
    cout << "UTILIDAD TOTAL: " << utilidadTotal << endl;
    cout << "PORCENTAJE DE UTILIDAD: " << porcentajeUtilidad << endl << endl;

    cout << "Gracias por digitar la informacion" << endl << endl;

    
    cout << "Desarrollado por: Brayan Camilo Castiblanco" << endl;

    system("pause");
    return 0;
}
