//1.cpp
#include <iostream>
#include <string.h>
#include <math.h>
#include <fstream>
#include <ctime>
#define write(n) f.write((char*)&n,sizeof n)
#define read(n) f.read((char*)&n,sizeof n)
using namespace std;

int main(int argc, const char *argv[]){
    srand(time(0));
    fstream f("input.txt", ios::binary | ios::out | ios::in);
    int n=5;
    int i;
    int j;
    int k = 0;
    int max=-100;
    int imax;
    write(n);
    // g.write((char*)&n,sizeof n);
    for (j = 0; j < n; j++) {
        i = rand()%19-9;
        write(i);
    }
    cout << "\n";
    f.seekg(ios::beg);
    read(n);
    for (int i = 0; i < n; i++) {
        read(j);
        cout << j << ' ';
        if ((j%2==0) and (max<j)) {
            max = j;
            imax = i;
        }
    }
    cout << endl << max << endl;
    f.seekg(sizeof(int), ios::beg);
    read(j);
    f.seekg((imax+1)*sizeof(int), ios::beg);
    write(j);
    f.seekg(ios::beg);
    read(n);
    for (j = 0; j < n; j++) {
        read(i);
        cout << i << " ";
    }
    f.seekg(0);
    read(n);
    for (j = 0; j < n; j++) {
        read(i);
        cout << endl << "i = " << i << endl;
        if ((i%2 != 0)) {
            f.seekg(ios::end);
            write(i);
            f.seekg((j+2)*sizeof(int), ios::beg);
            k++;
        }
    }
    f.seekg(0);
    read(n);
    for (j = 0; j < n; j++) {
        read(i);
        cout << i << " ";
    }
    cout << endl << "k = " << k << endl;
    f.seekg(0);
    read(j);
    cout << endl << "j = " << j << endl;
    n += k;
    for (j = 0; j < n; j++) {
        read(i);
        cout << i << " ";
    }
    f.close();
    return 0;
}
