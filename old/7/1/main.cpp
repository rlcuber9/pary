// var 22
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int fact(int n){
    if (n == 1) {
        return 1;
    }
    else {
        return n*fact(n-1);
    }
}
int main(){
    const float e = .000001;
    double x, f, s;
    cout << "x = ";
    cin >> x;
    f = 1;
    for(int n=1; ; n++) {
        // p = 1;
        // for (int i = 1; i <= 2*n; i++) {
        //     p*=i;
        // }
        if (fabs(pow((-1.), n)*((2*n*n + 1)/fact(n))*pow(x, 2*n)) > e){
            f += (pow((-1.), n)*((2*n*n + 1)/fact(n))*pow(x, 2*n));
        }
        else break;
    }
    cout << "f(x) = S = " << f << endl;
    cout << "f(x) = " << (1-x*x/2)*cos(x)-x*sin(x)/2;
    return 0;
}
