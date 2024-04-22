//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
#include <climits>
using namespace std;

int main(int argc, const char *argv[]){
    srand(time(0));
    int imin, min = INT_MAX, n = 20;
    cin >> n;
    int *p = new int[n];
    cout << "p = " << endl;
    for (int i = 0; i < n; i++) {
        p[i] = rand() % 101 - 50;
        cout << p[i]<< " ";
    }
    // int i=0;
    // while (i<n){
    for (int i = 0; i < n; i++) {
        if ((min>p[i]) &&(p[i]%2 == 0)) {
            imin = i;
            min = p[i];
        }
    }
    for (int i = n; i>=imin; i--) {
        p[i+1]=p[i];
    }
    p[imin+1]=min*min;
    cout << endl << endl;
    cout << "p' = " << endl;
    for (int i = 0; i < n+1; i++) {
        cout << p[i]<< " ";
    }
    return 0;
}
