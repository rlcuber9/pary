//1.cpp
//05-12-2022
#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

// void print(v){
//     cout << "fam" << "\t" << "year" << "\t"<< "dol" << "\t" << "zar" << "\t" << "obr" << "\n"; 
//     cout << "_____________________________________________________________________________\n";
//     for (int i = 0; i < v.size(); i++) {
//         v[i].print();
//     }
// }
class rabotnik {
private:
public:
    string fam;
    int year;
    string dol;
    int zar;
    string obr;
    rabotnik (string fam_, int year_, string dol_, int zar_, string obr_){
        fam_  = fam;
        year_ = year;
        dol_  = dol;
        zar_  = zar;
        obr_  = obr;
    }
    rabotnik (){
        fam  = "Пушкарёв";
        year = 1984;
        dol  = "Программист";
        zar  = 50000;
        obr  = "Высшее";
    }
    ~rabotnik (){
        
    };
    void input(){
        string fam_;
        int year_;
        string dol_;
        int zar_;
        string obr_;

        cout << "Введите fam\n";
        cin >> fam_;
        cout << "Введите year\n";
        cin >> year_;
        cout << "Введите dol\n";
        cin >> dol_;
        cout << "Введите zar\n";
        cin >> zar_;
        cout << "Введите obr\n";
        cin >> obr_;

        fam  = fam_;
        year = year_;
        dol  = dol_;
        zar  = zar_;
        obr  = obr_;
    }
    void print(){
        cout << fam << "\t" << year << "\t"<< dol << "\t" << zar << "\t" << obr << "\n"; 
    }
    // int get_fam(){
    //     return fam;
    // }
    // int get_year(){
    //     return year;
    // }
    // int get_dol(){
    //     return dol;
    // }
    // int get_zar(){
    //     return zar;
    // }
    // int get_obr(){
    //     return obr;
    // }
};
class max_year {
    
public:
    bool operator()(const rabotnik& a, const rabotnik& b){
        return a.year < b.year;
    }
};
class max_zar {
    
public:
    bool operator()(const rabotnik& a, const rabotnik& b){
        return a.zar < b.zar;
    }
};
class min_zar {
    
public:
    bool operator()(const rabotnik& a, const rabotnik& b){
        return a.zar > b.zar;
    }
};
int main(int argc, const char *argv[]){
    int n = 0;
    cout << "N? а Рома прав\n";
    cin >> n;
    vector<rabotnik> v;
    rabotnik rab = rabotnik();
    for (int i = 0; i <n; i++) {
        rab.input();
        v.push_back(rab);
    };
    vector<rabotnik>::iterator it;
    it = v.begin();
    cout << "fam" << "\t" << "year" << "\t"<< "dol" << "\t" << "zar" << "\t" << "obr" << "\n"; 
    cout << "_____________________________________________________________________________\n";
    for (int i = 0; i < v.size(); i++) {
        v[i].print();
    }
    it = max_element(v.begin(), v.end(), max_year());
    cout << "Номер самого младшего сотрудника: ";
    cout << it-v.begin()+1;
    cout << "\nФамилия " << v[it-v.begin()+1].fam << " , родился в " << v[it-v.begin()+1].year << "\nЕго возраст = " << 2022-v[it-v.begin()+1].year;
    sort(v.begin(), v.end(), min_zar());
    float summa_zar = 0;
    for (int i = 0; i < n; i++) {
        summa_zar +=v[i].zar;
    }
    cout << "\nfam" << "\t" << "year" << "\t"<< "dol" << "\t" << "zar" << "\t" << "obr" << "\n"; 
    cout << "_____________________________________________________________________________\n"; 
    for (int i = 0; i < v.size(); i++) {
        v[i].print();
    }
    cout << "\nsumma = " << summa_zar;
    it = max_element(v.begin(), v.end(), min_zar());
    cout << "\nмаксимальная зарплата = " << v[it-v.begin()+1].fam;
    sort(v.begin(), v.end(), max_zar());
    cout << "\nfam" << "\t" << "year" << "\t"<< "dol" << "\t" << "zar" << "\t" << "obr" << "\n"; 
    cout << "_____________________________________________________________________________\n"; 
    for (int i = 0; i < v.size(); i++) {
        v[i].print();
    }
    // cout << "Номер самого младшего сотрудника: "
    // cout << it-v.begin()+1;
    // cout << "\nФамилия " << v[it-v.begin()+1].fam << " , родился в " << v[it-v.begin()+1].year << "Зарабатывает " << v[it-v.begin()+1].zar;
    return 0;
}
