#include <iostream>
#include "Nodo.h"
using namespace std;
int main() {
    Nodo root(Point(0, 0), Point(100, 100));

    // Crear algunas ciudades de ejemplo
    City city1;
    city1.name = "Talca";
    city1.population = 10;
    city1.geopoint[0] = 25.0;
    city1.geopoint[1] = 80.0;

    City city2;
    city2.name = "Paris";
    city2.population = 2161000;
    city2.geopoint[0] = 65.0;
    city2.geopoint[1] = 30.0;

    City city3;
    city3.name = "Londres";
    city3.population = 333333333;
    city3.geopoint[0] = 31.0;
    city3.geopoint[1] = 80.0;

    // Insertar las ciudades en el árbol
    root.insert(Point(city1.geopoint[0], city1.geopoint[1]), city1);
    root.insert(Point(city2.geopoint[0], city2.geopoint[1]), city2);
    root.insert(Point(city3.geopoint[0], city3.geopoint[1]), city3);

    //Imprimir ciudades:
    vector<City> PataDeGallina;
    vector<City>* Tome = root.getCities(&root, &PataDeGallina);
    for (const auto& city : PataDeGallina) {
        cout << "City: " << city.name << ", Country: " << city.country << ", Population: " << city.population << endl;
    }


    // Comprobar los cuadrantes
    if (root.quad1 != nullptr) {
        cout << "Quad 1 tiene ciudades." << endl;
    } else {
        cout << "Quad 1 está vacío." << endl;
    }

    if (root.quad2 != nullptr) {
        cout << "Quad 2 tiene ciudades." << endl;
    } else {
        cout << "Quad 2 está vacío." << endl;
    }

    if (root.quad3 != nullptr) {
        cout << "Quad 3 tiene ciudades." << endl;
    } else {
        cout << "Quad 3 está vacío." << endl;
    }

    if (root.quad4 != nullptr) {
        cout << "Quad 4 tiene ciudades." << endl;
    } else {
        cout << "Quad 4 está vacío." << endl;
    }

    return 0;
}
