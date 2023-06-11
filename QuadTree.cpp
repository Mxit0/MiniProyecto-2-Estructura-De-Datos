#include"QuadTree.h"
#include <iostream>

QuadTree :: QuadTree(Point a, Point b){
    raiz = new Nodo(a, b);
    countPoints = 0;
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
    delete ciudades;
}
int QuadTree :: countRegion(Point p, int d){
    int count = 0;
    return count;
}
int QuadTree :: aggregateRegion(Point p, int d){
    int aggregate = 0;
    return aggregate;
}

Nodo* QuadTree :: getRoot(){
    return raiz;
}