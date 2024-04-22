//main.cpp
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(int argc, const char *argv[]){
    string x;
    // cin >> x;
    getline(cin, x);
    int n = x.size();
    // x.insert(n, " ");
    // x.insert(0, " ");
    x = " " + x;
    x = x + " ";
    int p1 = 0 , p2 = 0, max = 0;
    int imaxword;
    cout <<"|" << x << "|";
    for (int i = 0; i <= n; i++) {
        if (x[i] == ' ') {
            p1 = p2;
            p2 = i;
        }
        if (p2-p1-1 > max) {
            max = p2-p1-1;
            imaxword = p1;
        }
    }
    cout << endl << x.substr(imaxword + 1, max) << endl << max;
    return 0;
}
