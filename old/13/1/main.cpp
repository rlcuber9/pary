//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(int argc, const char *argv[]){
    string str;
    string str1;
    getline(cin, str);
    for (int i = 0; i < str.size()-1; i++) {
        if (str[i] == ' ') {
            str.erase(i, 1);
            i--;
        }
    }
    str.erase(str.size()-1);
    for (int i = str.size()-1; i >= 0; i--) {
        str1 = str1 + str[i];
    }
    cout << str;
    cout << endl << str1;
    if (str == str1) {
        cout << endl;
        cout << "mozno tuda-suda";
    }
    else {
        cout << endl;
        cout << "nelzja tuda-suda";
    }
    return 0;
}
