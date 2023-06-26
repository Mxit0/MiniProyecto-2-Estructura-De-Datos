#include <iostream>
#include <string>
using namespace std;


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

    void showPoint() const {
        cout << this->x << " , " << this->y << endl;
    }
};

struct City{
    string country;
    string name;
    string accentCity;
    string region;
    int population;
    double latitude;
    double longitude;
    Point geopoints;
};