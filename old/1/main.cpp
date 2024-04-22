#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string lastname, name, gr, fuck;
    setlocale(LC_ALL, "Russian");
    cout << "ВашаФамилия:";
    cin >> lastname;
    cout << "Ваше имя:";
    cin >> name;
    cout << "Группа";
    cin >> gr;
    cout << "Факультет";
    cin >> fuck;
    cout << "Студент " << lastname << " " << name << " является студентом группы "<< gr << " Факультет "<< fuck << " ФГБОУ ВО СибАДИ";
    return 0;
}
