//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(int argc, const char *argv[]){
    char *x = new char[31];
    cin.getline(x, 200);
    int n = strlen(x);
    for (int i = 0; i < n; i++) {
        if ((x[i] == 'b')and(x[i+1] == 'a')) {
            for (int j=i+2; j<n+1; j++)
                x[j-1]=x[j];
        }
    }
    cout << x;
    return 0;
}
