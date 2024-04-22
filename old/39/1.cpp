//1.cpp
//12-12-2022
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class tovar {
private:
    string name;
    float cena;
    int kol;
public:
    tovar (){
        string strcena;
        string strkol;
        cout << "Введите название товара ";
        cin >> name;
        while(true){
            try{
                cout << "Введите цену: ";
                cin >> strcena;
                if (stoi(strcena)<=0) {
                    throw 0;
                }
                cena = stoi(strcena);
                break;
            }
            catch(invalid_argument){
                cout << "нада вводить число\n";
            }
            catch(int error){
                cout << "Цена не может быть не положительной\n";
            }
        }
        while(true){
            try{
                cout << "Введите количество товаров: ";
                cin >> strkol;
                if (stod(strkol)<=0) {
                    throw 0;
                }
                kol = stoi(strkol);
                break;
            }
            catch(invalid_argument){
                cout << "нада вводить целое число\n";
            }
            catch(int error){
                cout << "количество товаров не может быть не положительной\n";
            }
        }
    }
    ~tovar (){
        
    };
    void print(){
        cout<< "\nтовар -- " << name << ", цена=" << cena << ", количество=" << kol << endl;
    }
};
int main(int argc, const char *argv[]){
    tovar a1;
    a1.print();
    return 0;
}
