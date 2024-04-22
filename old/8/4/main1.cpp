#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
    float a, n, s;
    s = 0;
    n = 0;
    a = 0;
    do {
        n += 1;
        a += sin(n);
        s += a;
    } while (a < .01);
    cout << "s = " << 1/s;
    return 0;
}
