#include <iostream>
#include <string>
using namespace std;

struct City{
    string Country;
    string name;
    string AccentCity;
    string region;
    int population;
    int latitude;
    int longitude;
    int[2] coords;
};

class QuadTree{
    private:
        struct Node{
            Node* Quad1;
            Node* Quad2;
            Node* Quad3;
            Node* Quad4;
            int x, y;
            City Leicester;
            bool typeNode;
            Node(int a, int b, City Manchester){
               x = a;
               y = b;
               Leicester = Manchester; 
            }
        };
    public:
        QuadTree(int, int, int, int);
        ~QuadTree();
        int totalPoints();
        int totalNodes();
        void insert(Point, int);
        void list();
        int countRegion(Point, int);
        int aggregateRegion(Point, int);
}