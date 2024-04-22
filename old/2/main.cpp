#include <iostream>
#include <string.h>
using namespace std;

int main(){
    double x, y;
    setlocale(LC_ALL, "Russian");
    cin >> x >> y;
    if (x > y){
        x *= 2*y;
        y = (x+y)/2;
    }
    else{
        y *= 2*x;
        x = (x+y)/2;
    }
    cout << "x = " << x << "\n" << "y = " << y;
    return 0;
}
