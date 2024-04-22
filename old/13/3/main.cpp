//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(int argc, const char *argv[]){
    string str;
    string str1;
    int k = 0;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++) {
        if ((str[i] == ' ')and(str[i+1] == ' ')) {
            str.erase(i, 1);
            i--;
        }
    }
    int max = 0;
    for (int i = 0; i < str.size(); i++) {
        if (isdigit(str[i])) {
            int j = i;
            while (isdigit(str[j])) {
                k++;
            	j++;
            }
            if (max < k) {
                max = k;
            }
        }
        i += k;
        k = 0;
    }
    cout << endl << str;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            str.erase(i, 1);
            i--;
        }
    }
    str.erase(str.size()-1);
    for (int i = str.size()-1; i >= 0; i--) {
        str1 = str1 + str[i];
    }
    for (int i = 0; i < str.size(); i++) {
        if (isdigit(str[i])) {
            k++;
        }
    }
    // cout << endl << str;
    // cout << endl << str1;
    if (str == str1) {
        cout << endl;
        cout << "mozno tuda-suda";
    }
    else {
        cout << endl;
        cout << "nezja tuda-suda";
    }
    cout << endl;
    cout << "k = " << k << endl;
    cout << "max = " << max << endl;
    return 0;
}
