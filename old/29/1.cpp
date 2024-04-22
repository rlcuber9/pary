//1.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
class library {
private:
        string name;
        string author;
        float cena;
public:
        library() {
            author = "Артур Конан Дойль";
            name = "Этюд в багровых тонах";
            cena = 900;
        }
        library(string _name, string _author, float _cena) {
            author = _author;
            name = _name;
            cena = _cena;
        }
        ~library() {
            cout << "Диструктор выполнился" << endl;
        };

        void print() {
            cout << "Автор = " << author << endl;
            cout << "Название = " << name << endl;
            cout << "Цена = " << cena << endl;
        }
        void stoimost() {
            if (cena < 100) {
                cout << "Цена низкая" << endl;
            }
            else if (cena < 500 and cena >= 100) {
                cout << "Цена средняя" << endl;
            }
            else if (cena > 500) {
                cout << "Цена высокая" << endl;
            }
        }
};

int main(int argc, const char *argv[]){
    library libraries[3]{library(), library("Зов предков", "Джек Лондон", 400), library("Старик и море", "Эрнест Хаменгуэль", 75)};
    for (int i = 0; i <3; i++) {
        libraries[i].print();
        libraries[i].stoimost();
        cout << endl;
    }
    return 0;
}
