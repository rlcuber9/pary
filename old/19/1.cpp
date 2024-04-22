//1.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

double f(double x, double y){
    return cos(x)+exp(y);
}
int main(int argc, const char *argv[]){
    double x, y;
    cout << "a = ";
    cin >> x;
    cout << "b = ";
    cin >> y;
    cout << "z = " << (f(x,y))/(pow((f(x+3,y)+pow(x,2)),2));
    return 0;
}
