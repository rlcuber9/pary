//1.cpp
//11-12-2022
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

class rabotnik {
    public:
    string fam;
    int god;
    string dol;
    int zar;
    string obr;

    tovar() {
        name = "";
        kol = 0;
        stoimost = 0;
        sklad = 0;
        obr = 0;
    }
    tovar(string n, int k, float st, int sk, string o) {
        name = n;
        kol = k;
        stoimost = st;
        sklad = sk;
        obr = o;
    }

    void print() {
        cout << "\n" << name << "\t" << kol << "\t" << "\t" << stoimost << "\t" << sklad << "\t" << obr << "\n";
    }

    void Set() {
        string n;
        int k;
        float st;
        int sk;
        cout << "Введите fam" << endl;
        cin >> n;
        cout << "Введите god" << endl;
        cin >> k;
        cout << "Введите dol" << endl;
        cin >> st;
        cout << "Введите zar" << endl;
        cin >> sk;
        cout << "Введите obr" << endl;
        cin >> o;
        name = n;
        kol = k;
        stoimost = st;
        sklad = sk;
    }
};

class maxgod {
    public:
    bool operator()(const rabotnik& a, const rabotnik& b)
    {
        return a.god < b.god;
    }
};

class maxzar {
    public:
    bool operator()(const rabotnik& a, const tovar& b)
    {
        return a.zar > b.zar;
    }
};

ofstream& operator<<(ofstream& os, tovar& r) {
    os << r.name << " " << r.kol << " " << r.stoimost << " " << r.sklad << " " << r.obr << "\n";
    return os;
}

ifstream& operator>>(ifstream& is, tovar& r) {
    is >> r.name >> r.kol >> r.stoimost >> r.sklad >> r.obr;
    return is;
}



int main() {
    int n;
    cout << "Введите n ";
    cin >> n;
    vector<tovar>V;
    tovar r("", 0, 0, 0);
    for (int i = 0; i < n; i++){
        r.Set();
        V.push_back(r);
    }
    cout << "\nname\tkol\tstoimost\tsklad\tobr";
    cout << "\n —--------------------------------------------------";

    ofstream ofile("test");
    for (int i = 0; i < n; i++){
        V[i].print();
        ofile << V[i];
    }

    vector<tovar>::iterator it;

    it = max_element(V.begin(), V.end(), tovarKol());
    cout << "\nТовар с максимальным количеством: " << endl << it - V.begin() + 1;
    cout << "Название товара " << V[it - V.begin()].name << ", Количество " << V[it - V.begin()].kol;
    sort(V.begin(), V.end(), tovarStoimost());
    cout << "\nname\tkol\tstoimost\tsklad";
    cout << "\n ---------------------------------------------------";
    for (int i = 0; i < n; i++){
        V[i].print();
    }
    string name;

    cout << "\nВведите название товара " << endl;

    cin >> name;

    cout << "Товар с таким именем " << endl;

    for (int i = 0; i < n; i++){
        if (V[i].name == name){
            V[i].print();
        }
    }

    int sklad;

    cout << "\nВведите номер склада " << endl;

    cin >> sklad;

    cout << "Товар с таким номером склада" << endl;

    for (int i = 0; i < n; i++){
        if (V[i].sklad == sklad){
            V[i].print();
        }
    }

    cout << "\nЧитаем\n";

    ifstream cfile("test");
    if (!cfile.is_open()) {
        cout << "\nФайл не может быть открыт\n";
    }
    else {
        for (int i = 0; i < V.size(); i++){
            cfile >> V[i];
            V[i].print();
        }
    }
    return 0;
}
