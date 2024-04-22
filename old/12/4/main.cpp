//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(int argc, const char *argv[]){
    char *x = new char[61];
    cin.getline(x, 200);
    int n = strlen(x);
    int p2 = 0, max = 0, p1 = 0;
    int imaxword;
    for (int i = n; i>=0; i--) {
        x[i+1] = x[i];
    }
    x[0] = ' ';
    x[n+1] = ' ';
    n++;
    cout << "'";
    int i = 0;
    while (x[i]!='\0') {
        cout << x[i];
        i++;
    }
    cout << "'";
    for (i = 0; i <= n; i++) {
        if (x[i] == ' ') {
            p1 = p2;
            p2 = i;
        }
        if (p2-p1-1 > max) {
            max = p2-p1-1;
        	imaxword = p1;
        }
    }
    cout << endl << max;
    i = imaxword+1;
    cout << endl;
    while (x[i] != ' ') {
        cout << x[i];
        i++;
    }
    return 0;
}
