//1.cpp
//09-12-2022
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(int argc, const char *argv[]){
    float m, n;
    // cout <<"z1 = " << 1/m << endl;
    // cout <<"z1 = " << (pow(m, 1/2)-(n-1)*pow(m,3))/(pow(m*n,1/2)+m*n-m+m);
    while (true) {
    cout << "\nm?\n";
    cin >> m;
    cout << "n?\n";
    cin >> n;
    try{
        if (m<0 or n<0){
            throw 0;
        };
        if (m==0 or pow(m*n,1/2)+m*n-m+m==0){
            throw 1;
        };
        cout <<"z1 = " << (pow(m, 1/2)-(n-1)*pow(m,3))/(pow(m*n,1/2)+m*n-m+m);
        cout <<"z2 = " << (pow(m,1/2)-pow(n,1/2))/(m); 
        break;
    }
    catch(int b){
        switch(b){
            case 0: cout << "думайте головой<\n"; break;
            case 1: cerr << "думайте головой0\n"; break;
        };
    }
    }
    return 0;
}
