#include"QuadTree.h"
#include <iostream>

QuadTree :: QuadTree(Point a, Point b){
    raiz = new Nodo();
}
QuadTree :: ~QuadTree(){

}
int QuadTree :: totalPoints(){
    return countPoints;
}
int QuadTree :: totalNodes(){
    return totalNodos;
}
void QuadTree :: insert(Point geopoint, City Cardiff){
    raiz->insert(geopoint, Cardiff);
    countPoints++;
}
void QuadTree :: list(){
    
}
int QuadTree :: countRegion(Point, int){

}
int QuadTree :: aggregateRegion(Point, int){
    
}