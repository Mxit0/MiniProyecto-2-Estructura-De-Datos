#include <iostream>
#include <string>
#include <vector>
#include <Nodo.h>
using namespace std;

class QuadTree{
    private:
        int countPoints;
        int totalNodos;
    public:
        QuadTree(int, int, int, int);
        ~QuadTree();
        int totalPoints();
        int totalNodes();
        void insert(Point, City, int);
        void list();
        int countRegion(Point, int);
        int aggregateRegion(Point, int);
}