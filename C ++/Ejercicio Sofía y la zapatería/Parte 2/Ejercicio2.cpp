#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    
    char referencia[20];
    char descripcion[60];
    int talla;
    char disponibilidad;
    int cantidad;
    float costo;
    float precio;

    
    float costoTotal;
    float precioTotal;
    float utilidadUnidad;
    float utilidadTotal;
    double porcentajeUtilidad;

    
    cout << "ADMINISTRAR VENTA DE ZAPATOS" << endl << endl;

    cout << "Digite la referencia del zapato: ";
    cin.getline(referencia, 20);

    cout << endl;
    cout << "Digite una descripcion del zapato: ";
    cin.getline(descripcion, 60);

    cout << endl;
    cout << "Digite la talla: ";
    cin >> talla;

    cout << endl;
    cout << "Hay disponibilidad (S/N): ";
    cin >> disponibilidad;

    cout << endl;
    cout << "Digite la cantidad de zapatos: ";
    cin >> cantidad;

    cout << endl;
    cout << "Digite el costo por unidad: ";
    cin >> costo;

    cout << endl;
    cout << "Digite el precio por unidad: ";
    cin >> precio;

    
    costoTotal = costo * cantidad;
    precioTotal = precio * cantidad;
    utilidadUnidad = precio - costo;
    utilidadTotal = precioTotal - costoTotal;
    porcentajeUtilidad = (utilidadUnidad / (double)costo) * 100;

    
    system("cls");

    cout << "LOS DATOS REGISTRADOS SON LOS SIGUIENTES" << endl << endl;
    cout << "REFERENCIA: " << referencia << endl;
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