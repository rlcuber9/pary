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
    int n=4;
    int i;
    int j;
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
    int k, s = 0;
    cout << endl << max << endl;
    // если чисел меньше ничего не делаем
    // if (!(imax+1-3<1)) {
    //     k = imax+1-3;
    //     f.seekg(k*sizeof(int), ios::beg);
    //     for (int i = k; i < imax+1; i++) {
    //         read(j);
    //         s+=j;
    //     }
    //     f.seekg((imax+1)*sizeof(int), ios::beg);
    //     write(s);
    // }

    // если чисел меньше складываем ИХ
    // если их нет ничего не делаем
    if (imax+1-3<1) {
        k = 1;
    }
    else {
        k = imax+1-3;
    }
    if (k!=imax+1) {
        f.seekg(k*sizeof(int), ios::beg);
        for (int i = k; i < imax+1; i++) {
            read(j);
            s+=j;
        }
        f.seekg((imax+1)*sizeof(int), ios::beg);
        write(s);
    }
    f.seekg(ios::beg);
    read(n);
    for (int i = 0; i < n; i++) {
        read(j);
        cout << j << ' ';
    }
    f.close();
    return 0;
}
