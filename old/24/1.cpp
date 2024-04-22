//1.cpp
#include <iostream>
#include <string.h>
#include <math.h>
#include <ctime>
using namespace std;
int proz(int** a, int n){
    int p = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i+j == n-1)and(a[i][j]>0)) {
                p *= a[i][j];
            }
        }
    }
    return p;
}
float proz(float** a, int n){
    float p = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i+j == n-1)and(a[i][j]>0)) {
                p *= a[i][j];
            }
        }
    }
    return p;
}

int main(int argc, const char *argv[]){
    srand(time(0));
    int n;
    cout << "n = ";
    cin >> n;
    int i, j; 
    int **a1 = new int* [n];
    for (int i = 0; i < n; i++) {
       a1[i] = new int [n];
    }
    float **a2 = new float* [n];
    for (int i = 0; i < n; i++) {
       a2[i] = new float [n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a1[i][j] = rand()%11 -5;
            cout << a1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a2[i][j] = (rand()%101)/10. -5;
            cout << a2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "proz1 = " << proz(a1, n) << "\n";
    cout << "proz2 = " << proz(a2, n);
    return 0;
}
