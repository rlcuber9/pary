//1.cpp
#include <iostream>
#include <string.h>
#include <math.h>
#include <fstream>
#include <ctime>
using namespace std;

int main(int argc, const char *argv[]){
    srand(time(0));
    ofstream g;
    ifstream f;
    g.open("input", ios::binary);
    int i;
    int j;
    int k = 0;
    for (j = 0; j < 3; j++) {
        i = rand()%19-9;
        cout << i << " ";
        g.write((char*)&i, sizeof i);
    }
    g.close();
    cout << "\n";
    f.open("input", ios::binary);
    while (!f.read((char*)&i, sizeof i).eof()) {
        cout << i << " ";
        if ((i>-2) and (i<5)) {
            k += 1;
        }
    }
    f.close();
    cout << endl << k;
    return 0;
}
