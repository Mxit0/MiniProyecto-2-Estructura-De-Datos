#include <iostream>
#include <string>
#include "Nodo.h"

using namespace std;

Nodo :: Nodo(Point topIzq, Point botDer){
    this->topIzq = topIzq;
    this->botDer = botDer;
    quad1 = nullptr;
    quad2 = nullptr;
    quad3 = nullptr;
    quad4 = nullptr;
}
bool Nodo ::inBoundary(Point coord){
    return (coord.x >= topIzq.x && coord.x <= botDer.x && coord.y >= topIzq.y && coord.y <= botDer.y);
}
void Nodo :: insert(Point geopoint, City Luton){
    if (!inBoundary(geopoint))
        return;
    if (fabs(topIzq.x - botDer.x) <= 1 && fabs(topIzq.y - botDer.y) <= 1){
        region.push_back(Luton);
        return;
    }

    if (geopoint.x <= (topIzq.x + botDer.x) / 2) {
        if (geopoint.y <= (topIzq.y + botDer.y) / 2) {
            if (quad1 == nullptr)
                quad1 = new Nodo(topIzq, Point((topIzq.x + botDer.x) / 2, (topIzq.y + botDer.y) / 2));
            quad1->insert(geopoint, Luton);
        } else {
            if (quad3 == nullptr)
                quad3 = new Nodo(Point(topIzq.x, (topIzq.y + botDer.y) / 2), Point((topIzq.x + botDer.x) / 2, botDer.y));
            quad3->insert(geopoint, Luton);
        }
    } else {
        if (geopoint.y <= (topIzq.y + botDer.y) / 2) {
            if (quad2 == nullptr)
                quad2 = new Nodo(Point((topIzq.x + botDer.x) / 2, topIzq.y), Point(botDer.x, (topIzq.y + botDer.y) / 2));
            quad2->insert(geopoint, Luton);
        } else {
            if (quad4 == nullptr)
                quad4 = new Nodo(Point((topIzq.x + botDer.x) / 2, (topIzq.y + botDer.y) / 2), botDer);
            quad4->insert(geopoint, Luton);
        }
    }
}

vector<City>* Nodo :: getCities(Nodo *raiz, vector<City>* resultado) {
    if(raiz != nullptr){
        if(raiz->region.size() == 1){
            resultado->insert(resultado->begin(), raiz->region.at(0));
        }else{
            getCities(raiz->quad1, resultado);
        }
        getCities(raiz->quad2, resultado);
        getCities(raiz->quad3, resultado);
        getCities(raiz->quad4, resultado);
    }
    return resultado;  
}