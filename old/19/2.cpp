//2.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int sum(int *a, int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if ((a[i]<0)and(a[i]%2!=0)) {
            sum += a[i];
        }
    }
    return sum;
}

int main(int argc, const char *argv[]){
    srand(time(0));
    int na, nb;
    cout << "na = ";
    cin >> na;
    cout << "nb = ";
    cin >> nb;
    int *a = new int[na];
    int *b = new int[nb];
    for (int i = 0; i < na; i++) {
        a[i] = rand()%11 -5;
    }
    for (int i = 0; i < nb; i++) {
        b[i] = rand()%101 -50;
    }
    for (int i = 0; i < na; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < nb; i++) {
        cout << b[i] << "\t";
    }
    cout << endl << "sum = " << sum(a, na) + sum(b, nb);
    return 0;
}
