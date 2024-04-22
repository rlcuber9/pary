// var 22
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(){
    const int a = 1;
    const int k = 4;
    double s;
    s = 0;
    for (int i = 1; i<=k; i+=3){
        s += i;
    }
    cout << s;
    return 0;
}
