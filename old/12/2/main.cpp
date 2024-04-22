//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(int argc, const char *argv[]){
    char *x = new char[30];
    cout << "Введите" << endl;
    cin.getline(x, 20);
    int n = strlen(x);
    int i = 0;

    for (i; i <= n; i++) {
        if (x[i] == '1')
        {
            for (int k = n; k >= i; k--)
            {
                x[k + 1] = x[k];
            }
            x[i] = '2';
            n++;
            i++;
        }
    }
    i = 0;
    cout << x;
    return 0;
}
