#include <iostream>
#include <string>
#include <vector>
#include <Nodo.h>
using namespace std;

class QuadTree{
    private:
        Nodo* raiz;
        int countPoints;
        int totalNodos;
    public:
        QuadTree(Point, Point);
        ~QuadTree();
        int totalPoints();
        int totalNodes();
        void insert(Point, City, int);
        void list();
        int countRegion(Point, int);
        int aggregateRegion(Point, int);
};