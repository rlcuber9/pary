//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

#define SQR(x) (x)*(x)
#define SQRT(x) pow(x, 0.5) 
#define IS_TR(a, b, c) ((((a+b)>c)&&((b+c)>a)&&((a+c)>b)) ? true : false)
int main(int argc, const char *argv[]){
    float x1, y1, x2, y2, x3, y3;
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;

    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;

    cout << "x3 = ";
    cin >> x3;
    cout << "y3 = ";
    cin >> y3;

    cout << "d = " << SQRT(SQR(x2-x1)+SQR(y2-x1));
    float a,b,c;
    a = SQRT(SQR(x3-x1)+SQR(y3-y1));
    b = SQRT(SQR(x2-x3)+SQR(y2-y3));
    c = SQRT(SQR(x2-x1)+SQR(y2-y1));
    if (IS_TR(a, b, c)) {
        cout << "\np = " << a+b+c;
        cout << "\ns = " << SQRT(((a+b+c)/2)*((a+b+c)/2-a)*((a+b+c)/2-b)*((a+b+c)/2-c));
    }
    return 0;
}
