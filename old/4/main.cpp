// var 3
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(){
    int d;
    double x, y, f, c;
    x = 1;
    y = 2;
    cout << "1. sinx" << endl;
    cout << "2. x^2" << endl;
    cout << "3. e^x" << endl;
    cin >> d;
    switch (d){
        case 1:
            f = sin(x);
        break;
        case 2:
            f = pow(x, 2);
        break;
        case 3:
            f = exp(x);
        break;
    }
    if (x-y == 0)
        c = pow(f,2)+pow(y,1/3)+sin(y);
    else if (x-y > 0)
        c = pow(f-y,2)+log(x);
    else if (x-y < 0)
        c = pow(y-f,2)+tan(y);
    cout << "c = " << c;
    return 0;
}
