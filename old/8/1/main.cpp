// var 22
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
    int k, n, p;
    cout << "k = ";
    cin >> k;
    n = 2;
    p = 1;
    while (n < k) {
        p *= n;
        n += 3;
    }
    cout << "P = " << p;
    return 0;
}
