#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

struct City{
    string country;
    string name;
    string accentCity;
    string region;
    int population;
    double latitude;
    double longitude;
    double* geopoint = new double[2];
};

struct Point{
    double x;
    double y;
    Point(double x, double y){
        this->x = x;
        this->y = y;
    }
    Point() {
        x = 0;
        y = 0;
    }
};

class Nodo{
    public:
        Nodo* quad1;
        Nodo* quad2;
        Nodo* quad3;
        Nodo* quad4;
        Point topIzq;
        Point botDer;
        vector<City> region;
        string tipo;
    
        Nodo(Point topIzq, Point botDer);        
        bool inBoundary(Point p);
        void insert(Point geopoint, City Luton);
        vector<City>* getCities(Nodo*, vector<City>*);
        int getNumNodos();
};

