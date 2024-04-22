//main2.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
#define PI (3.14159265358979323846)
#define L(r) (r*PI*2)
#define S(r) (r*r*PI)
#define MAXL(x, y) ((x<y)? ("okr 2") : ("okr 1"))
#define MINS(x, y) ((x<y)? ("okr 1") : ("okr 2"))

int main(int argc, const char *argv[]){
    float r1,r2;
    cout << "r1 = ";
    cin >> r1;
    cout << "r2 = ";
    cin >> r2;
    cout << "L1 = " << L(r1);
    cout << "\nL2 = " << L(r2);

    cout << "\nS1 = " << S(r1);
    cout << "\nS2 = " << S(r2);
    cout << "\nL > u " << MAXL(r1, r2);
    cout << "\nS < u " << MINS(r1, r2);
    return 0;
}
