//1.cpp
//11-12-2022
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

class tovar {
    public:
    string name;
    int kol;
    float stoimost;
    int sklad;

    tovar() {
        name = "";
        kol = 0;
        stoimost = 0;
        sklad = 0;
    }
    tovar(string n, int k, float st, int sk) {
        name = n;
        kol = k;
        stoimost = st;
        sklad = sk;
    }

    void print() {
        cout << "\n" << name << "\t" << kol << "\t" << "\t" << stoimost << "\t" << sklad;
    }

    void Set() {
        string n;
        int k;
        float st;
        int sk;
        cout << "Введите имя товара" << endl;
        cin >> n;
        cout << "Введите количество товара" << endl;
        cin >> k;
        cout << "Введите стоимость товара" << endl;
        cin >> st;
        cout << "Введите номер склада" << endl;
        cin >> sk;
        name = n;
        kol = k;
        stoimost = st;
        sklad = sk;
    }

    friend ofstream& operator<<(ofstream& os, tovar& r);
    friend ifstream& operator>>(ifstream& is, tovar& r);

};

class tovarStoimost {
    public:
    bool operator()(const tovar& a, const tovar& b)
    {
        return a.stoimost < b.stoimost;
    }
};

class tovarKol {
    public:
    bool operator()(const tovar& a, const tovar& b)
    {
        return a.kol > b.kol;
    }
};

ofstream& operator<<(ofstream& os, tovar& r) {
    os << r.name << " " << r.kol << " " << r.stoimost << " " << r.sklad << "\n";
    return os;
}

ifstream& operator>>(ifstream& is, tovar& r) {
    is >> r.name >> r.kol >> r.stoimost >> r.sklad;
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
    cout << "\nname\tkol\tstoimost\tsklad";
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
    cout << "\n —--------------------------------------------------";
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
