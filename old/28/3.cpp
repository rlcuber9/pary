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
    avto(){
        brend= "Volvo";
        model= "i3";
        year= 2022;
    }
    avto(string _brend, string _model, int _year){
        brend= _brend;
        model= _model;
        year= _year;
    }
};
int main(int argc, const char *argv[]){
    avto avto1 = avto();
    avto avto2 = avto("BMW", "X5", 1999);
    avto avto3 = avto("Ford", "Mustang", 1972);
    cout << "выводим на экран avto1 \n";
    cout << avto1.brend<< " ";
    cout << avto1.model<< " ";
    cout << avto1.year<< " \n"; 
    cout << "выводим на экран avto2 \n";
    cout << avto2.brend<< " ";
    cout << avto2.model<< " ";
    cout << avto2.year<< " \n"; 
    cout << "выводим на экран avto3 \n";
    cout << avto3.brend<< " ";
    cout << avto3.model<< " ";
    cout << avto3.year<< " "; 
    return 0;
}
