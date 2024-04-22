//2.cpp
#include <iostream>
#include <fstream>
#include <string.h>
#include <math.h>
using namespace std;
struct stud {
    string fio;
    int num;
    int mat;
    int fiz;
    int fil;
};

int main(int argc, const char *argv[]){
    ifstream g;
    ofstream f;
    int n = 0;
    int o;
    int i;
    int j;
    string oo;
    int d;
    stud *mstud = new stud[n];
    while (1) {
    cout << "1. прочитать из файла\n2. записать в файл\n3. не троешники\n4. средние баллы\n0. выход\n";
    cin >> d;
    switch(d){
        case 1:
            g.open("input.txt");
            delete[] mstud;
            g >> n;
            mstud = new stud[n];
            for (int i = 0; i < n; i++) {
                g >> mstud[i].fio;
                g >> mstud[i].num;
                g >> mstud[i].mat;
                g >> mstud[i].fiz;
                g >> mstud[i].fil;
                g.ignore();
            }
            g.close();
            cout << "ФИО\tномер\tМат\tФизика\tФил\n";
            for (i = 0; i < n; i++) {
                cout << mstud[i].fio << "\t";
                cout << mstud[i].num << "\t";
                cout << mstud[i].mat << "\t";
                cout << mstud[i].fiz << "\t";
                cout << mstud[i].fil << "\n";
            }
        break;
        case 2:
            f.open("input.txt");
            cin >> n;
            f << n << "\n";
            for (i = 0; i < n; i++) {
                for (j = 0; j < 5; j++) {
                    switch(j){
                        case 0:
                            cout << "фио\n";
                            cin >> oo;
                            f << oo << "\n";
                        break;
                        case 1:
                            cout << "номер\n";
                            cin >> o;
                            f << o << "\n";
                        break;
                        case 2:
                            cout << "Мат\n";
                            cin >> o;
                            f << o << "\n";
                        break;
                        case 3:
                            cout << "Физика\n";
                            cin >> o;
                            f << o << "\n";
                        break;
                        case 4:
                            cout << "Фил\n";
                            cin >> o;
                            cin.ignore();
                            f << o << "\n";
                        break;
                    }
                }
            }
            f.close();
        break;
        case 3:
            cout << "ФИО\tномер\tМат\tФизика\tФил\n";
            for (int i = 0; i < n; i++) {
                if ((mstud[i].mat != 3)&&(mstud[i].fil != 3)&&(mstud[i].fiz != 3)) {
                    cout << mstud[i].fio << "\t";
                    cout << mstud[i].num << "\t";
                    cout << mstud[i].mat << "\t";
                    cout << mstud[i].fiz << "\t";
                    cout << mstud[i].fil << "\n";
                }
            }
        break;
        case 4:
            cout << "ФИО\tномер\tМат\tФизика\tФил\tсредний\n";
            for (int i = 0; i < n; i++) {
                cout << mstud[i].fio << "\t";
                cout << mstud[i].num << "\t";
                cout << mstud[i].mat << "\t";
                cout << mstud[i].fiz << "\t";
                cout << mstud[i].fil << "\t";
                cout << (mstud[i].fil+mstud[i].fiz+mstud[i].mat)/3. << "\n";
            }
        break;
        case 0:
            exit(0);
        break;
    }
    }
    return 0;
}
