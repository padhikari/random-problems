// derived classes
#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;
public:
    void set_values (int a, int b)
    { width=a; height=b;}
};

class Rectangle: public Polygon {
public:
    int area ()
    { return width * height; }
};

class Triangle: public Polygon {
public:
    int area ()
    { return width * height / 2; }
};

int main () {
    Rectangle rect;
    Triangle trgl;
    rect.set_values (4,5);
    trgl.set_values (4,5);
    cout << "Rect area:"<< rect.area() << '\n';
    cout << "Trgl area:"<<trgl.area() << '\n';
    return 0;
}