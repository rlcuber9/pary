//1.cpp
#include <iostream>
#include <string.h>
#include <math.h>
#include <ctime>
using namespace std;

int main(int argc, const char *argv[]){
    srand(time(0));
    int n, sum = 0, max = -6, p = 1, k = 0;
    cout << "n = ";
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand()%11 -5;
        }
    }
    cout << "1.\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j]%2 == 0) {
                sum += a[i][j];
            }
        }
    }
    cout << endl;
    cout << "2.sum = " << sum;
    cout << endl;
    cout << "3.\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j]%2 != 0 and a[i][j] > max) {
                max = a[i][j];
            }
        }
        cout << "max" << i+1 << " = " << max << endl;
        max = -6;
    }
    cout << "4.\n";
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (j%2 == 0) {
                p *= a[i][j];
            }
        }
        if (j%2 == 0) {
            cout << "p" << j+1 << " = " << p << endl;
        }
        p = 1;
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (i<j and a[i][j]%2 == 0) {
                k += 1;
            }
        }
    }
    cout << "5.\nk = " << k << endl;
    for(int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1; j++) {
            if  (a[3][j]>a[3][j+1]) { 
                int t=a[3][j];
                a[3][j] = a[3][j+1];
                a[3][j+1] =t;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
