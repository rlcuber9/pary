//1.cpp
//09-12-2022
#include <iostream>
#include <string.h>
#include <math.h>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

class kvitok {
private:
public:
    string shet;
    int n;
    float s;
    float dolg;
    kvitok(){
    }
    void input(){
        string shet_;
        int n_;
        float s_;
        float dolg_;
        cout << "Введите shet\n";
        cin >> shet_;
        cout << "Введите n\n";
        cin >> n_;
        cout << "Введите s\n";
        cin >> s_;
        cout << "Введите dolg\n";
        cin >> dolg_;
        shet = shet_;
        n = n_;
        s = s_;
        dolg = dolg_;
    }
    void print(){
    cout << shet << "\t";
    cout << n << "\t";
    cout << s << "\t";
    cout << dolg << "\n";
    }
};
class min_s {
    
public:
    bool operator()(const kvitok& a, const kvitok& b){
        return a.s < b.s;
    }
};
int main(int argc, const char *argv[]){
    vector<kvitok> v;
    int n;
    cin >> n;
    kvitok kvit = kvitok();
    for (int i = 0; i < n; i++) {
        kvit.input();
        v.push_back(kvit);
    }
    cout << endl;
    for (int i = 0; i <n; i++) {
        v[i].print();
    }
    sort(v.begin(), v.end(), min_s());
    cout << endl;
    for (int i = 0; i <n; i++) {
        v[i].print();
    }
    return 0;
}
