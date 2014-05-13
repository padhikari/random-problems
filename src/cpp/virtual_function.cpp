#include <iostream>
using namespace std;

class Shape{
    protected:
        int width, height;
    public:
        Shape( int a = 0, int b= 0){
            width = a;
            height = b;
        }
        virtual int area(){
            cout<<"Parent class area: "<<endl;
            return 0;
        }
};

class Rectangle: public Shape{
    public:
    Rectangle( int a=0, int b=0):Shape(a,b){ }
    int area(){
        return(width * height);
    }
};

class Triangle: public Shape{
    public:
    Triangle(int a=0, int b=0):Shape(a,b){ }
    int area(){
        return(width * height/2);
    }
};

int main(){
    
    Shape *shape;
    Rectangle rec(10,7);
    Triangle tri(10,5);
    
    //store the address of rectangle
    shape = &rec;
    // call rectangle area
    int recarea = shape->area();
    cout<< "Rectangle class area:" <<recarea <<endl;
    
    
    //store the address of Triangle
    shape = &tri;
    //call triangle area
    int triarea = shape->area();
    cout<< "Triangle class area: "<<triarea <<endl;
    
    return 0;
}