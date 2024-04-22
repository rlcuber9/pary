#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
    int b, n, a, m;
    cin >> m;
    cin >> n;
    b = -1;
    do {
        b += 1;
        a = 2 + pow(n, b);
    } while (a <= m);
    cout << "a = " << a;
    return 0;
}
