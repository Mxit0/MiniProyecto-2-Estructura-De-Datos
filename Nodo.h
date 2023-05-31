#include <iostream>
struct City{
    string Country;
    string name;
    string AccentCity;
    string region;
    int population;
    int latitude;
    int longitude;
    double[2] coords;
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
        Nodo* Quad1;
        Nodo* Quad2;
        Nodo* Quad3;
        Nodo* Quad4;
        Point punto;
        City Leicester;
        bool typeNode;
    public:
        Node(Point p, City Manchester){
            punto = p;
            Leicester = Manchester; 
        }
    
}

