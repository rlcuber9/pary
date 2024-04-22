//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(int argc, const char *argv[]){
    string alf = "abcdefghiiklmnopqrstuvwxyz";
    string inp = "abcd";
    int key = 1;
    cout << endl;
    for (int i = 0; i < inp.size(); i++) {
        if (key+alf.find(inp[i]) >= 26) {
            cout << alf[key+alf.find(inp[i])-26];// коунт в другую сторону
        }
        else {
            cout << alf[key+alf.find(inp[i])];
        }
    }
    cout << endl;
    for (int i = 0; i < inp.size(); i++) {
        int k = alf.find(inp[i]);
        if (k-key > 0) {
            cout << alf[alf.find(inp[i])-key+26];
        }
        else {
            cout << alf[alf.find(inp[i])-key];
        }
    }
    return 0;
}
