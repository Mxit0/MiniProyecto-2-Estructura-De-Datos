#include <iostream>
#include "QuadTree.h"
#include <string>
#include <sstream>
#include <fstream>
#define NAME "worldcitiespop_fixed.csv"
using namespace std;

int main() {
    QuadTree* alerce = new QuadTree(Point(0, 0), Point(100, 100));
    ifstream archivo(NAME);
    if (!archivo) {
        cerr << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    
    //CODIGO DE PRUEBA #1
    /*
    string linea;
    char lim = ';';
    getline(archivo, linea);
    while(getline(archivo, linea)){
        stringstream stream(linea);
        City aux;
        string reserve;
        getline(stream, aux.country, lim);
        getline(stream, aux.name, lim);
        getline(stream, aux.accentCity, lim);
        getline(stream, aux.region, lim);
        getline(stream, reserve, lim);
        aux.population = stoi(reserve);
        getline(stream, reserve, lim);
        aux.latitude = stod(reserve);
        getline(stream, reserve, lim);
        aux.longitude = stod(reserve); 
        getline(stream, reserve, ',');
        aux.geopoint[0] = stod(reserve);
        getline(stream, reserve);
        aux.geopoint[1] = stod(reserve);
        alerce->insert(Point(aux.geopoint[0], aux.geopoint[1]), aux);
    }
    */





    //CODIGO DE PRUEBA #2
    /*
    vector<vector<string>> datos; // Vector para almacenar los datos del CSV

    string linea;
    while (getline(archivo, linea)) {
        vector<string> fila;
        stringstream ss(linea);
        string campo;
        while (getline(ss, campo, ';')) {
            fila.push_back(campo);
        }
        datos.push_back(fila);
    }

    archivo.close();

    // Ahora puedes hacer cualquier cosa con los datos leídos, por ejemplo, imprimirlos
    for (const auto& fila : datos) {
        for (const auto& campo : fila) {
            cout << campo << " ";
        }
        cout << endl;
    
    }*/

    // Comprobar los cuadrantes
    if (alerce->getRoot()->quad1 != nullptr) {
        cout << "Quad 1 tiene ciudades." << endl;
    } else {
        cout << "Quad 1 está vacío." << endl;
    }

    if (alerce->getRoot()->quad2 != nullptr) {
        cout << "Quad 2 tiene ciudades." << endl;
    } else {
        cout << "Quad 2 está vacío." << endl;
    }

    if (alerce->getRoot()->quad3 != nullptr) {
        cout << "Quad 3 tiene ciudades." << endl;
    } else {
        cout << "Quad 3 está vacío." << endl;
    }

    if (alerce->getRoot()->quad4 != nullptr) {
        cout << "Quad 4 tiene ciudades." << endl;
    } else {
        cout << "Quad 4 está vacío." << endl;
    }
    return 0;
}
