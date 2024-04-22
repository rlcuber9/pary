//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(int argc, const char *argv[]){
    char *x = new char[30];
    cin.getline(x, 2020);
    int n = strlen(x);
    int i = 0;

    for (i; i <= n; i++) {
        if (x[i-1] == ' ')
        {
            for (int k = n; k >= i; k--)
            {
                x[k + 1] = x[k];
            }
            x[i] = x[i+1];
            n++;
            i++;
        }
    }
    for (int k = n; k >= 0; k--){
        x[k + 1] = x[k];
    }
    x[0] = x[1];
    i = 0;
    cout << x;
    return 0;
}
