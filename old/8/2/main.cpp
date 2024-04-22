// var 22
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
    int n, s;
    s = 0;
    n = 0;
    do {
        s += n;
        cin >> n;
    } while (n%5 != 0);
    cout << "S = " << s;
    return 0;
}
