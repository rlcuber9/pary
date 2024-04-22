//1.cpp
//28-11-2022
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class vector {
protected:
    float x,y;
public:
    vector (float x_, float y_){
        x = x_;
        y = y_;
    }
    ~vector (){
        
    };
    float length(){
        return pow(x*x+y*y,0.5);
    }
    void print(){
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "l = " << vector::length() << endl;
    }
};

class vector3d : public vector {
private:
    float z;
public:
    vector3d (float x, float y, float z_):
    vector(x, y){
        z = z_;
    }
    ~vector3d (){
        
    };
    float length(){
        return pow(x*x+y*y+z*z,0.5);
    }
    void print(){
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
        cout << "l = " << vector3d::length() << endl;
    }
};
int main(int argc, const char *argv[]){
    vector v1 = vector(2.25, 1.15);
    vector3d v2 = vector3d(2.25, 1.15, 3.75);
    v1.print();
    cout << endl;
    v2.print();
    return 0;
}
