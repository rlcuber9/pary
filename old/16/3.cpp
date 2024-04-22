//main1.cpp
#include <iostream>
#include <string.h>
#include <math.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(int argc, const char *argv[]){
    int n = 6,m = 6, i,j;
    int a[6][6];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i+j<n-1) {
				a[i][j] = 2;
            }
            if (i+j>=n-1) {
				a[i][j] = 3;
            }
            if (i+j== n-1) {
				a[i][j] = 3;
            }
            if ((i <= 2)and(j <= 2)) {
				a[i][j] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}
