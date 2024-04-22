#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
    float a, n, s;
    s = 0;
    n = 0;
    do {
        n += 1;
        a = 1/(n*(n+2));
        s += a;
    } while (a < .01);
    cout << "s = " << s;
    return 0;
}
