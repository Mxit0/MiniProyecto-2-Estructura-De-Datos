#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct City{
    string Country;
    string name;
    string AccentCity;
    string region;
    int population;
    double* geopoint = new double[2];
};

struct Point{
    int x,y;
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }
};

class Nodo{
    private:
        Nodo* quad1;
        Nodo* quad2;
        Nodo* quad3;
        Nodo* quad4;
        Point topIzq;
        Point botDer;
        vector<City> region;
        bool typeNode;
    public:
        Nodo(Point topIzq, Point botDer);        
        bool inBoundary(Point p);
        void insert(Point geopoint, City Luton);
};

