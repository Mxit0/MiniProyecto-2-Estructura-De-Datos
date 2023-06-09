#include"QuadTree.h"
#include <iostream>

QuadTree :: QuadTree(Point a, Point b){
    raiz = new Nodo(a, b);
}
QuadTree :: ~QuadTree(){

}
int QuadTree :: totalPoints(){
    return countPoints;
}
int QuadTree :: totalNodes(){
    return raiz->getNumNodos();
}
void QuadTree :: insert(Point geopoint, City Cardiff){
    raiz->insert(geopoint, Cardiff);
    countPoints++;
}
void QuadTree :: list(){
    vector<City>* ciudades = new vector<City>();
    ciudades = raiz->getCities(raiz, ciudades);
    for(int i = 0; i < ciudades->size(); i++){
        cout << "City: " << ciudades->at(ciudades->size()-1-i).name << ", Country: " << ciudades->at(ciudades->size()-1-i).country << ", Population: " << ciudades->at(ciudades->size()-1-i).population << endl;
    }
}
int QuadTree :: countRegion(Point p, int d){
    vector<City>* ciudades = new vector<City>();
    ciudades = raiz->getCities(raiz, ciudades);
    int countPoint = 0;
    for (const auto& city : *ciudades) {
        double distancia = sqrt(pow((city.geopoint[0] - p.x), 2) + pow((city.geopoint[1] - p.y), 2));
        if (distancia <= d) {
            countPoint++;
        }
    }

    return countPoint;
}
int QuadTree :: aggregateRegion(Point p, int d){
    vector<City>* ciudades = new vector<City>();
    ciudades = raiz->getCities(raiz, ciudades);
    int population = 0;
    for (const auto& city : *ciudades) {
        double distancia = sqrt(pow((city.geopoint[0] - p.x), 2) + pow((city.geopoint[1] - p.y), 2));
        if (distancia <= d) {
            population += city.population;
        }
    }

    return population;
}

Nodo* QuadTree :: getRoot(){
    return raiz;
}