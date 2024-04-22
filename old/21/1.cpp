//1.cpp
#include <iostream>
#include <string.h>
#include <math.h>
#include <fstream>
using namespace std;

int main(int argc, const char *argv[]){
    ifstream f ("input");
    int i;
    int k = 0;
    while (!f.eof()) {
        f >> i;
        if ((i>-2) and (i<5)) {
            k += 1;
        }
    }
    f.close();
    cout << k;
    return 0;
}
