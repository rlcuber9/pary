// var 22
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(){
    const int k = 10;
    const int a = 1;
    const int b = 2;
    for (int i = 0; i<=k; i++){
        cout << "y("<< a+i*(b-a)*1./k << ") = " << a*exp(a+i*(b-a)*1./k)*log10(1+pow(a+i*(b-a)*1./k, 2)) << endl;
    }
    return 0;
}
