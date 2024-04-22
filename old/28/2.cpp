//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class avto {
    public:
    string brend;
    string model;
    int year;
};
int main(int argc, const char *argv[]){
    avto avto1;
    cout << "создаем avto1 \n";
    cout << "Нужно ввести бренд \n";
    cin >> avto1.brend;
    cout << "Нужно ввести модель \n";
    cin >> avto1.model;
    cout << "Нужно ввести Год выпуска \n";
    cin >> avto1.year; 
    avto avto2;
    cout << "создаем avto2 \n";
    cout << "Нужно ввести бренд \n";
    cin >> avto2.brend;
    cout << "Нужно ввести модель \n";
    cin >> avto2.model;
    cout << "Нужно ввести Год выпуска \n";
    cin >> avto2.year; 
    cout << "выводим на экран avto1 \n";
    cout << avto1.brend<< " ";
    cout << avto1.model<< " ";
    cout << avto1.year<< " \n"; 
    cout << "выводим на экран avto2 \n";
    cout << avto2.brend<< " ";
    cout << avto2.model<< " ";
    cout << avto2.year<< " "; 
    return 0;
}
