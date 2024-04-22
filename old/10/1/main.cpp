//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(){
    srand(time(0));
    int io, n = 10;
    cin >> n;
    int *p = new int[n];
    cout << "p = " << endl;
    for (int i = 0; i < n; i++) {
        p[i] = rand() % 101 - 50;
        cout << p[i]<< " ";
    }
    for (int i = 0; i < n; i++) {
        if (p[i] < 0) {
            io = i;
            for (io; io<n; io++) p[io]=p[io+1];
            break;
        }
    }
    n = n-1;
    cout << endl << endl;
    cout << "p' = " << endl;
    for (int i = 0; i < n; i++) {
        cout << p[i]<< " ";
    }
    return 0;
}
