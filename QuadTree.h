#include <iostream>
#include <string>
#include <vector>
#include "Nodo.h"
using namespace std;

class QuadTree{
    private:
        int countPoints;
        int totalNodos;
        Nodo* raiz;
    public:
        QuadTree(Point, Point);
        ~QuadTree();
        int totalPoints();
        int totalNodes();
        void insert(Point, City);
        void list();
        int countRegion(Point, int);
        int aggregateRegion(Point, int);
        Nodo* getRoot();
};