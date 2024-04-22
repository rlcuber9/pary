//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
#include <ctype.h>
using namespace std;

int main(int argc, const char *argv[]){
    string str;
    int k = 0;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++) {
        if (isdigit(str[i])) {
            k++;
        }
    }
    cout << endl;
    cout << "k = " << k << endl;
    return 0;
}
