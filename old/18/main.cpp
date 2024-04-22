//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
struct comp {
    string nazv;
    float chast;
    int op;
    bool dvd;
    int st;
};

int main(int argc, const char *argv[]){
    int n;
    int st_s = 0;
    cout << "n = ";
    cin >> n;
    cin.ignore();
    comp *mcomp = new comp[n];
    for (int i = 0; i < n; i++) {
        cout << "nazv = ";
        getline(cin, mcomp[i].nazv);
        cout << "chast = ";
        cin >> mcomp[i].chast;
        cout << "op = ";
        cin >> mcomp[i].op;
        cout << "dvd = ";
        cin >> mcomp[i].dvd;
        cout << "st = ";
        cin >> mcomp[i].st;
        cin.ignore();
        cout << endl;
        st_s += mcomp[i].st;
    }
    for (int i = 0; i < n; i++) {
        cout << "nazv = ";
        cout << mcomp[i].nazv << "\t";
        cout << "chast = ";
        cout << mcomp[i].chast << "\t";
        cout << "op = ";
        cout << mcomp[i].op << "\t";
        cout << "dvd = ";
        cout << mcomp[i].dvd << "\t";
        cout << "st = ";
        cout << mcomp[i].st << "\t" << endl;
    }
    int max = -1;
    int imax;
    for (int i = 0; i < n; i++) {
        if (mcomp[i].st > max) {
            max = mcomp[i].st;
            imax = i;
        }
    }
    cout << "1." << endl;
    cout << "nazv = ";
    cout << mcomp[imax].nazv << "\t";
    cout << "chast = ";
    cout << mcomp[imax].chast << "\t";
    cout << "op = ";
    cout << mcomp[imax].op << "\t";
    cout << "dvd = ";
    cout << mcomp[imax].dvd << "\t";
    cout << "st = ";
    cout << mcomp[imax].st << "\t";
    cout << endl;
    cout << "2. st_s = " << st_s << endl;
    comp sort;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n; j++) {
            if (mcomp[i].chast>mcomp[i+1].chast) {
                sort = mcomp[i];
                mcomp[i] = mcomp[i+1];
                mcomp[i+1] = sort;
            }
        }
    }
    cout << "3." << endl;
    for (int i = 0; i < n; i++) {
        cout << "nazv = ";
        cout << mcomp[i].nazv << "\t";
        cout << "chast = ";
        cout << mcomp[i].chast << "\t";
        cout << "op = ";
        cout << mcomp[i].op << "\t";
        cout << "dvd = ";
        cout << mcomp[i].dvd << "\t";
        cout << "st = ";
        cout << mcomp[i].st << "\t" << endl;
    }
    return 0;
}
