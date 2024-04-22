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
    string oo;
    int d;
    stud *mstud = new stud[n];
    while (1) {
    cout << "1. прочитать из файла\n2. записать в файл\n3. не троешники\n4. средние баллы\n0. выход\n";
    cin >> d;
    cout << "\nn1 = " << n;
    switch(d){
        case 1:
            cout << "\nn1 = " << n;
            g.open("input.txt", ios::binary);
            delete[] mstud;
            cout << "\nn1 = " << n;
            g.read((char*)&n,sizeof n);
            cout << "\nn2 = " << n;
            mstud = new stud[n];
            cout << "\nn3 = " << n;
            for (i = 0; i < n; i++) {
                g.read((char*)&mstud[i].fio,sizeof mstud[i].fio);
                cout << "\n" << mstud[i].fio;
                g.read((char*)&mstud[i].num,sizeof mstud[i].num);
                cout << "\n" << mstud[i].num;
                g.read((char*)&mstud[i].mat,sizeof mstud[i].mat);
                cout << "\n" << mstud[i].mat;
                g.read((char*)&mstud[i].fiz,sizeof mstud[i].fiz);
                cout << "\n" << mstud[i].fiz;
                g.read((char*)&mstud[i].fil,sizeof mstud[i].fil);
                cout << "\n" << mstud[i].fil;
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
            f.open("input.txt", ios::binary);
            cin >> n;
            cin.ignore();
            f.write((char*)&n,sizeof n);
            for (i = 0; i < n; i++) {
                    cout << "фио\n";
                    cin >> oo;
                    f.write((char*)&oo,sizeof oo);
                    cout << "номер\n";
                    cin >> o;
                    f.write((char*)&o,sizeof o);
                    cout << "Мат\n";
                    cin >> o;
                    f.write((char*)&o,sizeof o);
                    cout << "Физика\n";
                    cin >> o;
                    f.write((char*)&o,sizeof o);
                    cout << "Фил\n";
                    cin >> o;
                    cin.ignore();
                    f.write((char*)&o,sizeof o);
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
