//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(int argc, const char *argv[]){
    srand(time(0));
    int io, n = 20;
    cin >> n;
    int *p = new int[n];
    cout << "p = " << endl;
    for (int i = 0; i < n; i++) {
        p[i] = rand() % 101 - 50;
        cout << p[i]<< " ";
    }
    // for (int i = 0; i < n; i++) {
    int i=0;
    while (i<n){
        if ((p[i] <= 2) && (p[i] >= -2)) {
            io = i;
            for (io; io<n; io++) {
                p[io]=p[io+1];
            }
            n--;
        }
        else {
            i++;
        }
    }
    cout << endl << endl;
    cout << "p' = " << endl;
    for (int i = 0; i < n; i++) {
        cout << p[i]<< " ";
    }
    return 0;
}
