#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
    int b, n, a, x;
    cin >> n;
    cin >> x;
    b = 0;
    do {
        b += 1;
        a = pow(n, b);
    } while (a <= x);
    cout << "a = " << a;
    return 0;
}
